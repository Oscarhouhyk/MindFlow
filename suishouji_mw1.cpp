#include "suishouji_mw1.h"
#include "ui_suishouji_mw1.h"

#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QIcon>
#include <QFont>
#include <QFontDialog>

suishouji_mw1::suishouji_mw1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::suishouji_mw1)
{
    ui->setupUi(this);

    this->resize(500,400);
    this->setWindowTitle("Mindflow: 随手记");
    this->setWindowIcon(QIcon(":/images/file/notepad.png"));  //设置显示图标

    //实例菜单和控件
    fileMenu = new QMenu(this);  //文件栏
    editMenu = new QMenu(this);  //编辑栏
    textEdit = new QTextEdit(this);  //文字编辑栏
    vboxlayout = new QVBoxLayout(this);
    this->setCentralWidget(textEdit);

    //填充菜单子节点
    newAct = new QAction(QIcon( ":/images/file/new_file.png" ), tr( "新建" ), this );
    newAct->setShortcut(tr("Ctrl+N" ));        //快捷键
    newAct->setStatusTip(tr("新建文件" ));      //底部状态提示
    openAct = new QAction(QIcon( ":/images/file/open_file.png" ), tr( "打开" ), this );
    openAct->setShortcut(tr("Ctrl+O" ));
    openAct->setStatusTip(tr("打开文件" ));
    saveAct = new QAction(QIcon( ":/images/file/save_file.png" ), tr( "保存" ), this );
    saveAct->setShortcut(tr("Ctrl+S" ));
    saveAct->setStatusTip(tr("保存文件" ));
    saveasAct = new QAction(QIcon( ":/images/file/save_as.png" ), tr( "另存为" ), this );
    saveasAct->setShortcut(tr("Ctrl+Shift+S" ));
    saveasAct->setStatusTip(tr("另存为文件" ));
    exitAct = new QAction(QIcon( ":/images/file/exit.png" ), tr( "退出" ), this );
    exitAct->setShortcut(tr("Ctrl+E"));
    exitAct->setStatusTip(tr("退出"));

    //信号与槽
    connect(newAct, SIGNAL(triggered()), this, SLOT(newFile()));
    connect(openAct,SIGNAL(triggered()),this,SLOT(openFile()));
    connect(saveAct,SIGNAL(triggered()),this,SLOT(saveFile()));
    connect(saveasAct,SIGNAL(triggered()),this,SLOT(saveasFile()));

    cutAct = new QAction(QIcon( ":/images/file/cut.png" ), tr( "剪切" ), this );
    cutAct->setShortcut(tr("Ctrl+X" ));
    cutAct->setStatusTip(tr("剪切内容" ));
    copyAct = new QAction(QIcon( ":/images/file/copy.png" ), tr( "复制" ), this );
    copyAct->setShortcut(tr("Ctrl+C" ));
    copyAct->setStatusTip(tr("复制内容" ));
    pasteAct = new QAction(QIcon( ":/images/file/paste.png" ), tr( "粘贴" ), this );
    pasteAct->setShortcut(tr("Ctrl+V" ));
    pasteAct->setStatusTip(tr("粘贴内容" ));
    undoAct = new QAction(QIcon( ":/images/file/undo.png" ), tr( "向后" ), this );
    undoAct->setShortcut(tr("Ctrl+Z" ));
    undoAct->setStatusTip(tr("向后一步" ));
    redoAct = new QAction(QIcon( ":/images/file/redo.png" ), tr( "向前" ), this );
    redoAct->setShortcut(tr("Ctrl+Y" ));
    redoAct->setStatusTip(tr("向前一步" ));

    //信号与槽
    connect(copyAct, SIGNAL(triggered()), this, SLOT(copyAction()));
    connect(cutAct, SIGNAL(triggered()), this, SLOT(cutAction()));
    connect(pasteAct, SIGNAL(triggered()), this, SLOT(pasteAction()));
    connect(undoAct, SIGNAL(triggered()), this, SLOT(undoAction()));
    connect(redoAct, SIGNAL(triggered()), this, SLOT(redoAction()));
    connect(exitAct, SIGNAL(triggered()), this, SLOT(exitAction()));

    //填充菜单
    fileMenu = menuBar()->addMenu(tr( "文件" ));
    fileMenu->addAction(newAct);
    fileMenu->addAction(openAct);
    fileMenu->addAction(saveAct);
    fileMenu->addAction(saveasAct);
    fileMenu->addAction(exitAct);
    fileMenu->addSeparator();

    editMenu = menuBar()->addMenu(tr("编辑" ));
    editMenu->addAction(cutAct);
    editMenu->addAction(copyAct);
    editMenu->addAction(pasteAct);
    editMenu->addAction(undoAct);
    editMenu->addAction(redoAct);
    menuBar()->addSeparator();

    //toolBar 工具条
    //fileTooBar添加
    fileToolBar = addToolBar(tr("新建"));     //右键添加改变
    fileToolBar->addAction(newAct);
    fileToolBar->addAction(openAct);
    fileToolBar->addAction(saveAct);
    fileToolBar->addAction(saveasAct);

    //editToolBar添加
    editToolBar = addToolBar(tr("修改"));
    editToolBar->addAction(cutAct);
    editToolBar->addAction(copyAct);
    editToolBar->addAction(pasteAct);
    editToolBar->addAction(undoAct);
    editToolBar->addAction(redoAct);
    editToolBar->addAction(exitAct);

}

suishouji_mw1::~suishouji_mw1()
{
    delete ui;
}

//子菜单事件
void suishouji_mw1::newFile()
{
    currentFile.clear();
    textEdit->setText(QString());
}

void suishouji_mw1::openFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, "打开文件");
    QFile file(fileName);
    currentFile = fileName;
    if (!file.open(QIODevice::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "警告", "无法打开文件: " + file.errorString());
        return;
    }
    setWindowTitle(fileName);
    QTextStream in(&file);
    QString text = in.readAll();
    textEdit->setText(text);
    file.close();
}

void suishouji_mw1::saveFile()
{
    QString fileName;

    if (currentFile.isEmpty()) {
        fileName = QFileDialog::getSaveFileName(this, "Save");// 若没有文件,重新创建一个
        currentFile = fileName;
    } else {
        fileName = currentFile;
    }

    QFile file(fileName);

    if (!file.open(QIODevice::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "警告", "无法打开文件: " + file.errorString());
        return;
    }

    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = textEdit->toPlainText();
    out << text;
    file.close();
}

void suishouji_mw1::saveasFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, "另存为");
    QFile file(fileName);

    if (!file.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "警告", "无法打开文件: " + file.errorString());
        return;
    }

    currentFile = fileName;
    setWindowTitle(fileName);
    QTextStream out(&file);
    QString text = textEdit->toPlainText();
    out << text;
    file.close();
}

void suishouji_mw1::cutAction()
{
    textEdit->cut();
}

void suishouji_mw1::pasteAction()
{
    textEdit->paste();
}

void suishouji_mw1::copyAction()
{
    textEdit->copy();
}

void suishouji_mw1::undoAction()
{
    textEdit->undo();
}

void suishouji_mw1::redoAction()
{
    textEdit->redo();
}

void suishouji_mw1::exitAction()
{
    this->close();
}


