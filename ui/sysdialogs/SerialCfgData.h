/**********************************************************************
--- Qt Architect generated file ---
File: SerialCfgData.h
Last generated: Thu Jan 4 16:03:10 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef SerialCfgData_included
#define SerialCfgData_included
#include <qt.h>

class SerialCfgData : public QDialog
{
	Q_OBJECT
	public:
	SerialCfgData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~SerialCfgData();
	protected slots:
	virtual void Help() =0;
	virtual void SelChanged(int) =0;
	virtual void Apply() =0;
	protected:
	QLineEdit *Comment;
	QComboBox *Name;
	QComboBox *DataBits;
	QComboBox *StopBits;
	QComboBox *Parity;
	QComboBox *BaudRate;
	QPushButton *ApplyButton;
	QCheckBox *Enabled;
};
#endif // SerialCfgData_included

