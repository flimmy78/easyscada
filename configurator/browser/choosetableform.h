/****************************************************************************
** Form interface generated from reading ui file 'choosetableform.ui'
**
** Created: Sat May 5 20:10:28 2012
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.2.1   edited May 19 14:22 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CHOOSETABLEFORM_H
#define CHOOSETABLEFORM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QLabel;
class QComboBox;
class QPushButton;

class chooseTableForm : public QDialog
{
    Q_OBJECT

public:
    chooseTableForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~chooseTableForm();

    QLabel* textLabel2;
    QComboBox* comboOptions;
    QPushButton* buttonEdit;
    QPushButton* buttonCancel;

    QString option;

public slots:
    virtual void editPressed();
    virtual void populateOptions( QStringList entries );

protected:
    QVBoxLayout* chooseTableFormLayout;
    QHBoxLayout* layout21;
    QHBoxLayout* layout19;

protected slots:
    virtual void languageChange();

};

#endif // CHOOSETABLEFORM_H
