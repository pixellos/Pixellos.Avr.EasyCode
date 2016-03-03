#ifndef VARIABLES_H_
#define VARIABLES_H_
#include "Sh1106Class.h"
#include "Sh1106Class.cpp"
#include "AS5048A.cpp"
#include "ShiftRegister.cpp"

static volatile uint16_t RotateLimit;

PIN_A0 WheelQ;
PIN_A1 WheelPL;
PIN_A2 WheelCLK;

PIN_B0 Reset;
PIN_B1 DataCommand;
PIN_B2 OledChipSelect;
PIN_B3 AngleInterfaceChipSelect;
PIN_B4 SPISS;
PIN_B5 SPIMosi;
PIN_B6 SPIMiso;
PIN_B7 SPISck;

PIN_C7 RedLed;
PIN_C6 GreenLed;
PIN_C5 MjoyButton5;
PIN_C4 MjoyButton4;
PIN_C3 MjoyButton3;
PIN_C2 MjoyButton2;
PIN_C1 MjoyButton1;
PIN_C0 MjoyButton0;

PIN_D5 PWMOutput;

//#define DebugMode__
#ifdef DebugMode__
Sh1106 debugDisplay(DataCommand,Reset,SPIMosi,OledChipSelect,SPISck,SPIMiso,SPISS);
#endif

AS5048A AS5048AChip(SPIMosi,SPISS,SPISck,SPIMiso,AngleInterfaceChipSelect);
ShiftRegisterButtons wheelButtons(WheelCLK,WheelPL,WheelQ);

Task keyboardTask;

enum class CalibrateStage
{
	No = 0,
	Left = 1,
	Right = 2,
	Calibrated = 3
};

CalibrateStage volatile calibrateStage = CalibrateStage::No;
#endif /* VARIABLES_H_ */