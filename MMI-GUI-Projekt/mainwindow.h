#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <app.h>
#include <appstate.h>
#include "QDebug"
#include "rectangledialog.h"
#include "squaredialog.h"
#include "circledialog.h"

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

    /**
     * @brief on_comboBox_Tool_activated
     * @param arg1 the name of the Shape
     * This Function shows the Boxes for giving Values independing of selected Shape
     */
    void on_comboBox_Tool_activated(const QString &arg1);
    /**
     * @brief on_action_ber_uns_triggered
    * This Function show a Window that have Information about this Programm
     */
    void on_action_ber_uns_triggered();
    /**
     * @brief on_actionL_schen_triggered
     * Removing the current showed Shape in the graphic View
     */
    void on_actionL_schen_triggered();
    void on_actionLernen_triggered();
    /**
     * @brief on_actionKreis_triggered
     * showing Dialog for Circle with Options to calculate
     */
    void on_actionKreis_triggered();
    /**
     * @brief on_actionRechteck_triggered
     * showing Dialog for Rectangle with Options to calculate
     */
    void on_actionRechteck_triggered();
    /**
     * @brief on_actionQuadrat_triggered
     * showing Dialog for quar with Options to calculate
     */
    void on_actionQuadrat_triggered();
    /**
     * @brief on_pushButton_clicked
     * Close the Main Window
     */
    void on_pushButton_clicked();
    /**
     * @brief on_action_ber_Kreis_triggered
     * Showing a Dialog with Information about the Circle
     */
    void on_action_ber_Kreis_triggered();
    /**
     * @brief on_action_ber_Rechteck_triggered
     * Showing a Dialog with Information about the Rectangle
     */
    void on_action_ber_Rechteck_triggered();
    /**
     * @brief on_action_ber_Quadrat_triggered
     * Showing a Dialog with Information about the Square
     */
    void on_action_ber_Quadrat_triggered();
    /**
     * @brief on_actionLernen_triggered
     * this Function show a Window that have a True/False Quethions for lerning
     */
    void on_actionSpielen_mit_Lernen_triggered();
    /**
     * @brief on_actioneine_Form_zeichen_triggered
     * show Dialog that have Information about how to draw a Shape
     */
    void on_actioneine_Form_zeichen_triggered();
    /**
     * @brief on_actioneine_Form_l_schen_triggered
     * show Dialog that have Information about how to delete a Shape
     */
    void on_actioneine_Form_l_schen_triggered();
    /**
     * @brief on_actionFl_sche_des_Kreises_berechnen_triggered
     * * show Dialog that have Information about how to calculate the Area or the Cicumfurance
     */
    void on_actionFl_sche_des_Kreises_berechnen_triggered();
    /**
     * @brief on_actionRadius_des_Kreises_triggered
     * show Dialog that have Information about how to calculate the Radius of the Circle
     * using Area or Circmfurance
     */
    void on_actionRadius_des_Kreises_triggered();
    /**
     * @brief on_actionFl_sche_Umfang_des_Quadrat_triggered
     * show Dialog that have Information about how to calculate the Area or the Cicumfurance of Square
     */
    void on_actionFl_sche_Umfang_des_Quadrat_triggered();
    /**
     * @brief on_actionFl_sche_Umfang_des_Rechteck_triggered
    * show Dialog that have Information about how to calculate the Area or the Cicumfurance of Rectangle
     */
    void on_actionFl_sche_Umfang_des_Rechteck_triggered();
    /**
     * @brief on_actionSeite_des_Quadrates_triggered
     * This Function calculate a Side of Squar using Area or Circumference
     */
    void on_actionSeite_des_Quadrates_triggered();
    /**
     * @brief on_actiongeometriesche_Information_triggered
     * show a Dialog that have Information how to get Info. about a spesific Shape
     */
    void on_actiongeometriesche_Information_triggered();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
