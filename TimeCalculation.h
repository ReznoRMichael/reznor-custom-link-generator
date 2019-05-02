#include <time.h>  // calculate time

class TimeCalculation
{
    clock_t Tstart;
    clock_t Tstop;

    public:

    double TimeCalculated;
    void TimeCalcStart();
    void TimeCalcStop();
};
