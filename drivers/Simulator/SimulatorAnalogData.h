/**********************************************************************
--- Qt Architect generated file ---
File: SimulatorAnalogData.h
Last generated: Thu Jan 4 16:18:59 2001
DO NOT EDIT!!!  This file will be automatically
regenerated by qtarch.  All changes will be lost.
*********************************************************************/
#ifndef SimulatorAnalogData_included
#define SimulatorAnalogData_included
#include <qt.h>
#include "valedit.h"
class SimulatorAnalogData : public QWidget
{
	Q_OBJECT
	public:
	SimulatorAnalogData(QWidget *parent = NULL, const char *name = NULL);
	virtual ~SimulatorAnalogData();
	protected:
	TIMEEDIT *Time;
	INTEDIT *Mean;
	INTEDIT *Variation;
};
#endif // SimulatorAnalogData_included

