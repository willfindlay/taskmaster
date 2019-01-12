#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include "task.h"
#include "actionbutton.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_action_Task_triggered();

    void on_action_Quit_triggered();

    void on_action_Start_triggered();

    void on_action_Stop_triggered();

private:
    void addTask(Task* t = nullptr, QListWidget* w = nullptr);
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
