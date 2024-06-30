#ifndef SUISHOUJI_MW1_H
#define SUISHOUJI_MW1_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QToolBar>
#include <QLineEdit>
#include <QTextEdit>
#include <QVBoxLayout>

namespace Ui {
class suishouji_mw1;
}

class suishouji_mw1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit suishouji_mw1(QWidget *parent = nullptr);
    ~suishouji_mw1();

private:
    Ui::suishouji_mw1 *ui;

    QString currentFile;

private:
    //新建
    QMenu *fileMenu, *editMenu, *helpMenu;
    QToolBar *fileToolBar;
    QToolBar *editToolBar;
    QAction *newAct;
    QAction *openAct;
    QAction *saveAct;
    QAction *saveasAct;
    QAction *cutAct;
    QAction *copyAct;
    QAction *pasteAct;
    QAction *undoAct;
    QAction *redoAct;
    QAction *exitAct;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QVBoxLayout *vboxlayout;

private slots:
    void newFile();
    void openFile();
    void saveFile();
    void saveasFile();
    void cutAction();
    void copyAction();
    void pasteAction();
    void undoAction();
    void redoAction();
    void exitAction();

};

#endif // SUISHOUJI_MW1_H
