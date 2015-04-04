#ifndef RPS2_H
#define RPS2_H

#include <QMainWindow>

namespace Ui {
class rps2;
}

class rps2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit rps2(QWidget *parent = 0);
    ~rps2();

private slots:

    void on_pushButton_clicked();

private:
    Ui::rps2 *ui;
    //Game functions
    int getCompChoice();
    bool gameTime(int, int);
};

#endif // RPS2_H
