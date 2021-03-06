/**********************************************************************
--- Qt Architect generated file ---
File: BatchCfgData.h
Last generated: Thu Jan 4 15:53:03 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef BatchCfgData_included
#define BatchCfgData_included
#include <qt.h>
#include "valedit.h"

class BatchCfgData : public QDialog
{
	Q_OBJECT
	public:
	BatchCfgData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~BatchCfgData();
	protected slots:
	virtual void Help() =0;
	virtual void Delete() =0;
	virtual void SelChanged(int) =0;
	virtual void Apply() =0;
	virtual void Report() =0;
	virtual void New() =0;
	protected:
	QComboBox *Name;
	QLineEdit *Comment;
	TIMEEDIT *StartTime;
	DATEEDIT *StartDate;
	TIMEEDIT *EndTime;
	DATEEDIT *EndDate;
	QPushButton *ApplyButton;
	QPushButton *NewButton;
	QPushButton *DeleteButton;
};
#endif // BatchCfgData_included

