#include "rectangledialog.h"
#include "ui_rectangledialog.h"

RectangleDialog::RectangleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RectangleDialog)
{
    ui->setupUi(this);
}

RectangleDialog::~RectangleDialog()
{
    delete ui;
}

void RectangleDialog::on_pushButton_Ok_clicked()
{
   ui->label_Area_Value->setText(QString::number(ui->spinBox_Height->value()*ui->spinBox_Width->value()));
   ui->label_Circ_value->setText(QString::number(2*ui->spinBox_Height->value()+2*ui->spinBox_Width->value()));
}
