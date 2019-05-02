#include "TimeCalculation.h"
#include <time.h>  // calculate time
#include <windows.h>  // calculate time

void TimeCalculation::TimeCalcStart()
{
    Tstart = clock();
}

void TimeCalculation::TimeCalcStop()
{
    Tstop = clock();
    TimeCalculated = (double)(Tstop - Tstart) / CLOCKS_PER_SEC;
}
