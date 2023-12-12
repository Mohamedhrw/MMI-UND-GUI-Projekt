#ifndef FRAGENDIALOG_H
#define FRAGENDIALOG_H

#include <QDialog>
#include "QMessageBox"

namespace Ui {
class FragenDialog;
}

/**
 * @author Mohamed
 * @date 22.01.2019
 * @version 0.1
 * @brief The TrueFalsequestion class
 * show a dialog with a true/false questions to the user
 */
class TrueFalseQuestionDialog : public QDialog
{
    Q_OBJECT

public:
    /**
     * @brief FragenDialog
     * @param parent
     */
    explicit TrueFalseQuestionDialog(QWidget *parent = nullptr);
    ~TrueFalseQuestionDialog();

private slots:
    /**
     * @brief on_pushButton_Ja_clicked
     * show a feedback if the answer was true or false
     */
    void on_pushButton_Ja_clicked();
    /**
     * @brief on_pushButton_Next_clicked
     * show the next question
     */

    void on_pushButton_Next_clicked();
    /**
     * @brief on_pushButton_Nein_clicked
     * show a feedback if the answer was true or false
     */

    void on_pushButton_Nein_clicked();

private:
    Ui::FragenDialog *ui;
    /**
     * @brief frage
     * store the questiones that will be showed to the user
     */
    QString frage[25];
    /**
     * @brief indx
     * save the index of the current showed question
     */
    int index;
};

#endif // FRAGENDIALOG_H
