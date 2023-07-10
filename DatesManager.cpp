#include "DatesManager.h"

bool DatesManager::checkIfYearIsLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        cout << year << " is a leap year."<<endl;   //to delete after test
        return true;
    }
    else
    {
        cout << year << " is not a leap year."; //to delete after test
        return false;
    }
}

int DatesManager::getNumberOfDaysOfMonth(int month, int year)
{
    switch (month)
    {
    case 2:
        if (checkIfYearIsLeap(year)==1)
            return 29;
        else return 28;
        break;
    case 4:
        return 30;
        break;
    case 6:
        return 30;
        break;
    case 9:
        return 30;
        break;
    case 11:
        return 30;
        break;
    default:
        //  (month == 1 or month ==3 or month ==5 or month ==7 or month ==8 or month ==10 or month ==12)
        return 31;
        break;
            }
}


int DatesManager::getCurrentDate()
{
    int dateInteger;
    string dateString;

 // current date/time based on current system
   time_t now = time(0);   //now - Number of sec since January 1,1970
   tm *ltm = localtime(&now);

   int year = 1900 + ltm->tm_year;
   int month = 1 + ltm->tm_mon;
   int day = ltm->tm_mday;

    string dateString;

    dateString = AncillaryMethods::IntToString(year)+AncillaryMethods::IntToString(month)+AncillaryMethods::IntToString(day);
    return dateInteger;
}


