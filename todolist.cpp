#include "todolist.h"
#include "sz.h"

#include <QLabel>
#include <QToolBar>
#include <QBoxLayout>
#include <QWidget>

ToDoList::ToDoList(QWidget* parent):QMainWindow(parent)
{
    QWidget* pWidget = new QWidget(this);
    //pWidget->setStyleSheet("background-color: #404142");
    setCentralWidget(pWidget);

    this->setWindowTitle("Mindflow: To-do List");

    QVBoxLayout* pMainLayout = new QVBoxLayout();
    pWidget->setLayout(pMainLayout);

    QLabel* pwTitle = new QLabel("To-Do List", this);
    pMainLayout->addWidget(pwTitle);
    pwTitle->setAlignment(Qt::AlignCenter);
    pwTitle->setStyleSheet("font-size: 30pt; margin: 10%;");

    QHBoxLayout* pHLayoutLabels = new QHBoxLayout();
    pMainLayout->addLayout(pHLayoutLabels);

    QLabel* plblPending = new QLabel("待完成", this);
    plblPending->setStyleSheet("font-size: 15pt;");
    pHLayoutLabels->addWidget(plblPending);

    /*pending_lbl.setParent(this);
    pending_lbl.move(100,100);
    pending_lbl.resize(100,50);
    pending_lbl.setText("???");
    pending_lbl.setStyleSheet("font-size: 15pt;");*/
    //pHLayoutLabels->addWidget(pending_lbl);

    QLabel* plblCompleted = new QLabel("已完成", this);
    plblCompleted->setStyleSheet("font-size: 15pt;");
    pHLayoutLabels->addWidget(plblCompleted);

    QHBoxLayout* pHLayout = new QHBoxLayout();
    pMainLayout->addLayout(pHLayout);

    m_pwPending = new QListView(this);
    m_pwPending->setDragEnabled(true);
    m_pwPending->setAcceptDrops(true);
    m_pwPending->setDropIndicatorShown(true);
    m_pwPending->setDefaultDropAction(Qt::MoveAction);
    pHLayout->addWidget(m_pwPending);

    m_pwCompleted = new QListView(this);
    m_pwCompleted->setDragEnabled(true);
    m_pwCompleted->setAcceptDrops(true);
    m_pwCompleted->setDropIndicatorShown(true);
    m_pwCompleted->setDefaultDropAction(Qt::MoveAction);
    pHLayout->addWidget(m_pwCompleted);

    m_pwPending->setModel(new QStringListModel());
    m_pwCompleted->setModel(new QStringListModel());

    m_pwPending->setStyleSheet
        ("QListView { font-size: 20pt; font-weight: bold; }"
         "QListView::item { background-color: #E74C3C; padding: 10%;"
         "border: 1px solid #C0392B; }"
         "QListView::item::hover { background-color: #C0392B }");

    m_pwCompleted->setStyleSheet
        ("QListView { font-size: 20pt; font-weight: bold; }"
         "QListView::item { background-color: #2ECC71; padding: 10%;"
         "border: 1px solid #27AE60; }"
         "QListView::item::hover { background-color: #27AE60 }");


    QToolBar* pToolBar = new QToolBar(this);
    addToolBar(pToolBar);

    m_pActAdd = new QAction(this);
    m_pActAdd->setIcon(QIcon(":/image/images/plus_4315609.png"));
    connect(m_pActAdd, &QAction::triggered, this, &ToDoList::onAdd);

    m_pActRemove = new QAction(this);
    m_pActRemove->setIcon(QIcon(":/image/images/delete.png"));
    connect(m_pActRemove, &QAction::triggered, this, &ToDoList::onRemove);

    m_pActRemove2 = new QAction(this);
    m_pActRemove2->setIcon(QIcon(":/image/images/delete-512.png"));
    connect(m_pActRemove2, &QAction::triggered, this, &ToDoList::onRemove2);

    pToolBar->addAction(m_pActAdd);
    pToolBar->addAction(m_pActRemove);
    pToolBar->addAction(m_pActRemove2);
    //connect(m_pwPending, &QListView::acceptDrops, this, &ToDoList::minus_cnt);

}

void ToDoList::onAdd()
{
    //pending_cnt++;
    sz::zong++;
    m_pwPending->model()->insertRow(m_pwPending->model()->rowCount());
    QModelIndex oIndex = m_pwPending->model()->index(
        m_pwPending->model()->rowCount() - 1, 0);
    //pending_lbl.setText(QString::number(m_pwPending->model()->rowCount()));
    m_pwPending->edit(oIndex);
}

void ToDoList::onRemove()
{
    sz::zong--;
    QModelIndex oIndex = m_pwPending->currentIndex();
    m_pwPending->model()->removeRow(oIndex.row());
    //if(oIndex.row() != -1){
        //pending_cnt--;
       // pending_lbl.setText(QString::number(pending_cnt));
    //}
}

void ToDoList::onRemove2()
{
    sz::shan++;
    QModelIndex oIndex2 = m_pwCompleted->currentIndex();
    m_pwCompleted -> model()->removeRow(oIndex2.row());
}

/*
void ToDoList::minus_cnt(){
    pending_cnt--;
    pending_lbl.setText(QString::number(pending_cnt));
}*/

ToDoList::~ToDoList(){

}
