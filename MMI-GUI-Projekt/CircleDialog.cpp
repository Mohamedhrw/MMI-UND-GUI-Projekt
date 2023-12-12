#include "circledialog.h"
#include "ui_rechnendialog.h"
#include"math.h"

CircleDialog::CircleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CircleDialog)
{
    ui->setupUi(this);
}

CircleDialog::~CircleDialog()
{
    delete ui;
}


void CircleDialog::on_pushButton_Area_Circumferenc_clicked()
{
    ui->label_Area_out->setText(QString::number(ui->spinBox->value()*ui->spinBox->value()*3.1415));
    ui->label_Circumferenc_out->setText(QString::number(ui->spinBox->value()*3.1415*2));
}

void CircleDialog::on_pushButton_Radius_Circumference_clicked()
{
    ui->label_Radius_Out->setText(QString::number(ui->spinBox_Circumference->value()/(2*3.1415)));
}

void CircleDialog::on_pushButton_Radius_Area_clicked()
{
    ui->label_Radius_Out_2->setText(QString::number(qSqrt(ui->spinBox_Area->value()/3.1415)));
}
