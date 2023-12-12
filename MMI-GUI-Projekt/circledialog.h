#ifndef RECHNENDIALOG_H
#define RECHNENDIALOG_H

#include <QDialog>
#include "QtCore/qmath.h"

namespace Ui {
class CircleDialog;
}
/**
 * @author Mohamed
 * @date 22.01.2018
 * @version 0.1
 * @brief this Dialog show The Component to calculate a Area or Circumfernce from Circle using
* Radius And vice versa.
*/
class CircleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CircleDialog(QWidget *parent = nullptr);
    ~CircleDialog();

private slots:

    /**
     * @brief on_pushButton_Area_Circumferenc_clicked
     * This Function calculate the Area and the Circumfernce The Circle using Radius
     */
    void on_pushButton_Area_Circumferenc_clicked();
    /**
     * @brief on_pushButton_Radius_Circumference_clicked
     * This Function calculate the Radius of The Circle using Circumference
     */
    void on_pushButton_Radius_Circumference_clicked();
    /**
     * @brief on_pushButton_Radius_Area_clicked
     * This Function calculate the Area of The Circle using Radius
     */
    void on_pushButton_Radius_Area_clicked();

private:
    Ui::CircleDialog *ui;
};

#endif // RECHNENDIALOG_H
