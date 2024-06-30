#ifndef TODOLIST_H
#define TODOLIST_H
#include <QMainWindow>
#include <QListView>
#include <QStringListModel>
#include <QLabel>
class ToDoList : public QMainWindow
{
    Q_OBJECT
public:
    explicit ToDoList(QWidget* parent = nullptr);
    ~ToDoList();

    int pending_cnt=0;

protected slots:
    void onAdd();
    void onRemove();
    void onRemove2();
    //void minus_cnt();

private:
    QLabel pending_lbl;

    QListView* m_pwPending = nullptr;
    QListView* m_pwCompleted = nullptr;

    QAction* m_pActAdd = nullptr;
    QAction* m_pActRemove = nullptr;
    QAction* m_pActRemove2 = nullptr;
};

#endif // TODOLIST_H
