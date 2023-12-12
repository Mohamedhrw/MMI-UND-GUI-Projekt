#ifndef SQUAREDIALOG_H
#define SQUAREDIALOG_H
#include "QtCore/qmath.h"

#include <QDialog>

namespace Ui {
class SquareDialog;
}
/**
 * @brief The SquareDialog class
 * show a dialog with options to calculate the Area, circumference und side of the square
 */
class SquareDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SquareDialog(QWidget *parent = nullptr);
    ~SquareDialog();

private slots:
    /**
     * @brief on_pushButton_clicked
     * calculate the Area and the circumference of square
     */
    void on_pushButton_clicked();
    /**
     * @brief on_pushButton_Side_Circ__clicked
     * calculate the side of square using the circumference
     */

    void on_pushButton_Side_Circ__clicked();
    /**
     * @brief on_pushButton_Side_Area_clicked
     * calculate the side of square using the Area
     */

    void on_pushButton_Side_Area_clicked();

private:
    Ui::SquareDialog *ui;
};

#endif // SQUAREDIALOG_H
