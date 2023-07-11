#ifndef DATESMANAGER_H
#define DATESMANAGER_H

#include <time.h>
#include "AncillaryMethods.h"

using namespace std;

class DatesManager
{
    bool checkDateFormat(string& year,string& month,string& day);
    int getNumberOfDaysOfMonth(int month, int year);
    bool checkIfYearIsLeap (int year);


public:
    int getCurrentDate();
    string getCurrentYear();
    string getCurrentMonth();
    string getCurrentDay();
    string convertDateFormat(string date);
    bool checkDateFormat(string date);
    bool checkNumberOfDays(int year, int month, int days);

    int enterNewDate();

};

#endif // DATESMANAGER_H
