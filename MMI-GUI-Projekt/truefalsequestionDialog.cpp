#include "truefalsequestiondialog.h"
#include "ui_fragendialog.h"

TrueFalseQuestionDialog::TrueFalseQuestionDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FragenDialog)
{
    ui->setupUi(this);
    ui->label_Frage->setText("Formel um Rechteckfläsche zu bestimmen 4.a.b ? ");
}

TrueFalseQuestionDialog::~TrueFalseQuestionDialog()
{
    delete ui;
}


void TrueFalseQuestionDialog::on_pushButton_Ja_clicked()
{

    if(index<10){
        QMessageBox::information(this,"Eingabeauswertung","Deine Antwort ist richtig!");
    }
    else {
         QMessageBox::warning(this,"Eingabeauswertung","Deine Antwort ist leider nicht richtig!");
    }

}

void TrueFalseQuestionDialog::on_pushButton_Next_clicked()
{
    frage[0]="Formel um die Fläche des Kreises zu bestimmen ist π.r.r  ";
    frage[1]="Formel um die Fläche des Rechteckes zu bestimmen ist a*b ";
    frage[2]="Beim Quadrat sind Länge und Breit gleich?";
    frage[3]="In einem Kreis r = 3  und dann die Fläche = 9π ?";
    frage[4]="In einem Kreis r = 5 und dann die Fläche = 25π ?";
    frage[5]="Ein Quadrat mit Seitenlänge a= 10  dann der Umfang = 40?";
    frage[6]="In einem Kreis r = 5  und dann die Umfang= 10π  ?";
    frage[7]="In einem Rechteck a = 6  und  b = 10 cm dann die Fläche= 60  ?";
    frage[8]="In einem Quadrat Umfang = 24  und dann die Seite a = 6  ?";
    frage[9]="Radius des Kreises ist doppelte des Durschmesser";

    frage[10]="Formel um Fläche des Quadrat zu bestimmen ist 4.a ";
    frage[11]="Formel um Umfang des Kreises zu bestimmen ist π.r ";
    frage[12]="Ein rechter Winkel hat 180 Grad";
    frage[13]="Durchmesser ist eine gerade von Mittelpunkt bis zur Kreislinie";
    frage[14]="In einem Rechteck a = 8  und  b = 10  dann die Fläche= 75  ?";
    frage[15]="In einem Quadrat a = 4   dann die Fläche = 8  ?";
    frage[16]="In einem Kreis r = 3  und dann der Umfang = 3π cm ?";
    frage[17]="Die Summe der Innenwinkel eines Rechtecks ist 180 Grad";
    frage[18]="In einem Rechteck a = 5  und b = 3 dann die Fläche = 8  ?";


    index = qrand()%18;
    ui->label_Frage->setText(frage[index]);
}

void TrueFalseQuestionDialog::on_pushButton_Nein_clicked()
{
    if(index>=10){
        QMessageBox::information(this,"Eingabeauswertung","Deine Antwort ist richtig!");
    }
    else {
         QMessageBox::warning(this,"Eingabeauswertung","Deine Antwort ist falsch!");
    }
}
