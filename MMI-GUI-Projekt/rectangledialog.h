#ifndef RECTANGLEDIALOG_H
#define RECTANGLEDIALOG_H

#include <QDialog>

namespace Ui {
class RectangleDialog;
}
/**
 * @brief The RectangleDialog class
 * show a dialog with options to calculate the area, circumference and side of rectangle
 */
class RectangleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RectangleDialog(QWidget *parent = nullptr);
    ~RectangleDialog();

private slots:
    /**
     * @brief on_pushButton_Ok_clicked
     * calculate the Area and the circumference of rectangle
     */
    void on_pushButton_Ok_clicked();

private:
    Ui::RectangleDialog *ui;
};

#endif // RECTANGLEDIALOG_H
