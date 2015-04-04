#include "rps2.h"
#include "ui_rps2.h"


//player vars
int playerchoice;
int compchoice;
rps2::rps2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::rps2)
{
    ui->setupUi(this);
}

rps2::~rps2()
{
    delete ui;
}
//sets the users choice based on radio boxes
void rps2::on_pushButton_clicked()
{
    if(ui->rockButton->isChecked())
    {
        playerchoice = 1;
    }
    if(ui->paperButton->isChecked())
    {
        playerchoice = 2;
    }
    if(ui->scissorsButton->isChecked())
    {
        playerchoice = 3;
    }
    compchoice = getCompChoice();
    gameTime(compchoice, playerchoice);
}
//Generates a pseudo random number for the Computer opponent
int rps2::getCompChoice()
{
        int x;
        unsigned seed = time(0);
        srand(seed);
        unsigned randomNumber = rand();
        srand(randomNumber);
        x = rand() % 3 + 1;
        return x;
}
//Compares user selection to Computer selection and determines a winner
bool rps2::gameTime(int cpc, int plc)
{
    if (cpc == plc)
    {
        ui->label->setText("Tie!");
    }
    else if (cpc == 1 && plc == 2)
    {
        ui->label->setText("You win!\n Paper covers Rock!");
    }
    else if (cpc == 1 && plc == 3)
    {
        ui->label->setText("You Lose!\n Rock smashes Scissors!");
    }
    else if (cpc == 2 && plc == 1)
    {
        ui->label->setText("You Lose!\n Paper covers Rock!");
    }
    else if (cpc == 2 && plc == 3)
    {
        ui->label->setText("You win!\n Scissors cuts Paper");
    }
    else if (cpc == 3 && plc == 1)
    {
        ui->label->setText("You win!\n Rock smashes Scissors");
    }
    else if (cpc == 3 && plc == 2)
    {
        ui->label->setText("You Lose!\n Scissors cuts Paper!");
    }

}
