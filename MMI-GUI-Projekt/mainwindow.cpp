#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtCore"
#include "QtGui"
#include "QMessageBox"
#include "circledialog.h"
#include "truefalsequestiondialog.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

     ui->setupUi(this);
     ui->comboBox_Tool->addItem("Rechteck");
     ui->comboBox_Tool->addItem("Quadrat");
     ui->comboBox_Tool->addItem("Kreis");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_Tool_activated(const QString &arg1)
{
   if(ui->comboBox_Tool->currentText()=="Rechteck"){
       ui->label->show();
       ui->label_2->show();
       ui->spinBox_Height->show();
       ui->spinBox_Width->show();
       ui->label->setText("Breite");
       ui->label_2->setText("Länge");
   }
   else if(ui->comboBox_Tool->currentText()=="Kreis"){
       ui->label->setText("Radius");
       ui->label->show();
       ui->spinBox_Width->show();
       ui->spinBox_Height->hide();
       ui->label_2->hide();
   }
   else if(ui->comboBox_Tool->currentText()=="Quadrat"){
       ui->label->setText("Seite");
       ui->label->show();
       ui->spinBox_Width->show();
       ui->spinBox_Height->hide();
       ui->label_2->hide();

   }

}

void MainWindow::on_action_ber_uns_triggered()
{
    QString text="Das Programm verwendet die Version 1.0 .\n"
                 "Das Programm wurde am 22.22.2222 von Mohamed Ahmed entwickelt. Diese App ist insbesondere für Kinder geeignet.  Der Entwickler vom diesem Programm ist Mohamed Ahmad und er hat dies am 16.01.2019 entwicklt.\n"
                 "Mit dieser App wird Kindern die Möglichkeit geschaffen, verschiedenen geometriesche Formen zeichen zu können."
                 "Durch Übungsfragen (Ja/Nein Fragen) können die Kinder ihr Wissen überprüfen und erweitern. ";
    QMessageBox::information(this,"Info",text);

}


void MainWindow::on_actionL_schen_triggered()
{
   if(ui->graphicsView->scene()!=nullptr){

       ui->graphicsView->scene()->clear();
                                      }

}

void MainWindow::on_actionLernen_triggered()
{


}

void MainWindow::on_actionKreis_triggered()
{
    CircleDialog dialog;
    dialog.setModal(true);
    dialog.exec();

}

void MainWindow::on_actionRechteck_triggered()
{
    RectangleDialog rectangleDialog;
    rectangleDialog.setModal(true);
    rectangleDialog.exec();

}

void MainWindow::on_actionQuadrat_triggered()
{
    SquareDialog squareDialog;
    squareDialog.setModal(true);
    squareDialog.exec();
}

void MainWindow::on_pushButton_clicked()
{
    app::App *app=new app::App();
   ui->graphicsView->setScene(app->scene());
   if(ui->radioButton_Green->isChecked()){
       app->appState()->setSelectedColor(Qt::GlobalColor::green);
   }else if(ui->radioButton_Red->isChecked()){
       app->appState()->setSelectedColor(Qt::GlobalColor::red);
   }else if(ui->radioButton_Blue->isChecked()){
            app->appState()->setSelectedColor(Qt::GlobalColor::blue);
  }else if(ui->radioButton_Black->isChecked()){
       app->appState()->setSelectedColor(Qt::GlobalColor::black);
  }
   if(ui->comboBox_Tool->currentText()=="Rechteck"){
       app->appState()->setSelectedPosition(QPoint(ui->spinBox_Width->value(),ui->spinBox_Height->value()));
       app->appState()->setSelectedTool(app::AppState::Tool::RECTANGLE);
       app->appState()->setSelectedHeigth(ui->spinBox_Height->value());
       app->appState()->setSelectedWidth(ui->spinBox_Width->value());
       app->onnCanvasClicked();
   }
   else if(ui->comboBox_Tool->currentText()=="Kreis"){
       app->appState()->setSelectedPosition(QPoint(0,0));
       app->appState()->setSelectedTool(app::AppState::Tool::CIRCLE);
       app->appState()->setSelectedWidth(ui->spinBox_Width->value());
       app->appState()->setSelectedHeigth(ui->spinBox_Width->value());
       app->onnCanvasClicked();
   }
   else if(ui->comboBox_Tool->currentText()=="Quadrat"){
       app->appState()->setSelectedPosition(QPoint(0,0));
       app->appState()->setSelectedTool(app::AppState::Tool::RECTANGLE);
       app->appState()->setSelectedHeigth(ui->spinBox_Width->value());
       app->appState()->setSelectedWidth(ui->spinBox_Width->value());
       app->onnCanvasClicked();
   }

}

void MainWindow::on_action_ber_Kreis_triggered()
{
    QString text="Kresi: \n\n Ein Kreis beschreibt die Menge aller Punkte, die denselben Abstand "
                 "r zum Mittelpunkt M besitzen.\n Umfang: Den Umfang erhältst man durch Abrollen des Kreises und messen der abgerollten Strecke."
                 "Auf diese Weise kannst du die Kreiszahl π=3,14159265 definieren.\n"
                 "Umfang = 2.π.r\n Kreis:\n Für die Berechnung des Flächeninhaltes eines Kreises verwendest man die Formel\n "
                 "Fläsche = π.r.r";
    QMessageBox::information(this,"Kreis Info",text);
}

void MainWindow::on_action_ber_Rechteck_triggered()
{
    QString text="Rechteck:\n\n Ein Parallelogramm mit einem rechten Winkel ist ein Rechteck."
                 " Für das Rechteck gilt demzufolge: \n-Die gegenüberliegenden Seiten sind gleich"
                 " lang und zueinander parallel.\n-Benachbarte Seiten sind rechtwinklig zueinander."
                 "\n-Alle vier Innenwinkel sind gleich groß. Sie betragen 90°.\nUmfang: Den Umfang"
                 " eines Rechtecks erhält man, wenn alle vier Seitenlängen addiert werden. "
                 "Da jeweils zwei Seiten die gleiche Länge haben, gilt für den Umfang eines Rechtecks:"
                 "\nUmfang = 2(a+b).\nFläche: Der Flächeninhalt A eines Rechtecks ist das Produkt"
                 " seiner Seitenlängen \n Fläche = a.b";
    QMessageBox::information(this,"Rechteck Info",text);
}

void MainWindow::on_action_ber_Quadrat_triggered()
{
    QString text ="Quadrat:\n\nEin Viereck, bei dem je zwei benachbarte Seiten zueinander"
                  " senkrecht und gleich lang sind, heißt Quadrat. Gleichwertig sind auch"
                  " folgende Aussagen:\n-Ein Quadrat ist ein Rechteck mit gleich langen Seiten."
                  "\n-Ein Quadrat ist eine Raute (ein Rhombus) mit rechten Winkeln.\n"
                  "Umfang: Für den Umfang eines Quadrats gilt:\n"
                  " Umfang = 4.a\nFläche: Der Flächeninhalt eines Quadrats ist gleich dem Quadrat"
                  " der Seitenlänge.\n Fläche = a.a";
    QMessageBox::information(this,"Quadrat Info",text);
}

void MainWindow::on_actionSpielen_mit_Lernen_triggered()
{
    TrueFalseQuestionDialog fragenDialog;
    fragenDialog.setModal(true);
    fragenDialog.exec();
}

void MainWindow::on_actioneine_Form_zeichen_triggered()
{
    QMessageBox::information(this,"Zeichen","Um eine Form zu zeichen musst du folgende"
                                                 "Schritte ausführen:\n1- eine Form auswählen(Kreis, Quadrat, Rechteck),"
                                                 ").\n2- die Parameter anpassen(Länge, Breite, Radius).\n3-"
                                                 " auf `rechnen` klicken.");
}

void MainWindow::on_actioneine_Form_l_schen_triggered()
{
    QMessageBox::information(this,"Löschen","um eine Form zu löschen klick einfach auf "
                                                 "Mülleimer Symbol oder von Menü Datei `löschen` auswählen"
                                               );
}

void MainWindow::on_actionFl_sche_des_Kreises_berechnen_triggered()
{
    QMessageBox::information(this,"Fläche/Umfang berechnen","um Fläche/Umfang eines Kreises zu berechnen "
                                                             "beachte folgenden Schritte:\n"
                                                             "1- Datei --> Berechnen --> Kreis.\n"
                                                             "2- Radius eingeben dann auf `rechnen` klicken.");
}

void MainWindow::on_actionRadius_des_Kreises_triggered()
{
    QMessageBox::information(this,"Radius berechnen","um Radius durch Fläche/Umfang zu berechnen "
                                                     "beachte folgenden Schritte:\n"
                                                     "1- Datei --> Berechnen --> Kreis.\n"
                                                     "2- Fläche oder Umfang eingeben dann auf `rechnen` klicken.");
}

void MainWindow::on_actionFl_sche_Umfang_des_Quadrat_triggered()
{
    QMessageBox::information(this,"Fläche/Umfang berechnen","um Fläche/Umfang eines Quadrates zu berechnen "
                                                             "beachte folgenden Schritte:\n"
                                                             "1- Datei --> Berechnen --> Quadrat.\n"
                                                             "2- Seitelänge eingeben dann auf `rechnen` klicken.");
}

void MainWindow::on_actionFl_sche_Umfang_des_Rechteck_triggered()
{
    QMessageBox::information(this,"Fläche/Umfang berechnen","um Fläche/Umfang eines Rechteckes zu berechnen "
                                                             "beachte folgenden Schritte:\n"
                                                             "1- Datei --> Berechnen --> Rechteck.\n"
                                                             "2- Länge und Breit eingeben dann auf `rechnen` klicken.");
}

void MainWindow::on_actionSeite_des_Quadrates_triggered()
{
    QMessageBox::information(this,"Seitelänge berechnen","um Seitlänge eines Quadrates zu berechnen "
                                                             "Müssen folgende Schritte beachtet werden:\n"
                                                             "1- Datei --> Berechnen --> Quadrat.\n"
                                                             "Fläsche oder Umfang eingeben dann auf `rechnen` klicken.");
}

void MainWindow::on_actiongeometriesche_Information_triggered()
{
    QMessageBox::information(this,"Informationen","um sich über verschiedenen Formen zu informieren "
                                                             "beachte folgenden Schritte:\n"
                                                             "1- Datei --> Lernen \n"
                                                             "2-\n-durch eine klick auf `Über Kreis` enthältst du "
                                                             "Informationen über Kreis. \n-durch eine klick auf `Über Rechteck`"
                                                             " enthältst du Informationen über Rechteck. \n-durch eine "
                                                             "klicke auf `Über Quadrat` enthältest du "
                                                             "Informationen über Quadrat");
}
