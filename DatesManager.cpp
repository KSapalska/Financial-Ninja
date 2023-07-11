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

   string monthString = AncillaryMethods::IntToString(month);
   if (month < 10) monthString.insert(0,"0");

    string dayString = AncillaryMethods::IntToString(day);
    if (day < 10) dayString.insert(0,"0");

    dateString = AncillaryMethods::IntToString(year)+monthString+dayString;
    dateInteger = AncillaryMethods::StringToInt(dateString);

    return dateInteger;
}

string DatesManager::getCurrentYear()
{
    string currentYearString;
    string currentDateString;

    int currentDate = getCurrentDate();
    currentDateString = AncillaryMethods::IntToString(currentDate);


    currentYearString.append(currentDateString,0,4);

    return currentYearString;
}

string DatesManager::getCurrentMonth()
{
    string currentMonthString;
    string currentDateString;

    int currentDate = getCurrentDate();
    currentDateString = AncillaryMethods::IntToString(currentDate);


    currentMonthString.append(currentDateString,4,2);

    return currentMonthString;
}

string DatesManager::getCurrentDay()
{
    string currentDayString;
    string currentDateString;

    int currentDate = getCurrentDate();
    currentDateString = AncillaryMethods::IntToString(currentDate);


    currentDayString.append(currentDateString,6,2);

    return currentDayString;
}

/*int DatesManager::enterNewDate()
{
    string currentYearString;
    string currentMonthString;
    string currentDayString;
    string currentDateString;

    int currentDate = getCurrentDate();
    currentDateString = AncillaryMethods::IntToString(currentDate);


    currentYearString.append(currentDateString,0,4);
    currentMonthString.append(currentDateString,4,2);
    currentDayString.append(currentDateString,6,2);

    cout<<"currentYearString:"<<currentYearString<<endl;
    cout<<"currentMonthString:"<<currentMonthString<<endl;
    cout<<"currentDayString:"<<currentDayString<<endl;
    cin.get();
} */

string DatesManager::convertDateFormat(string date)
{
    char dash = '-';
    string year = date.substr(0,4);
    string month = date.substr(4,2);
    string day = date.substr(6,2);
    string formattedDate = year + dash + month + dash + day;

    return formattedDate;
}

bool DatesManager::checkDateFormat(string date) {
    int numberOfIntegers = 0;
    int numberOfDashes = 0;
    char dash = '-';

    for(int i = 0; i < date.length(); i++) {
        if((date[i] >= 48) && (date[i] <= 57)) {
            numberOfIntegers++;
        } else if(date[i] == dash) {
            numberOfDashes++;
        }
    }
    if((numberOfIntegers == 8) && (numberOfDashes == 2))
        return true;
    else
        return false;
}

bool DatesManager::checkNumberOfDays(int year, int month, int days)
{
    int numberOfDays = getNumberOfDaysOfMonth(year, month);
    if(days <= numberOfDays)
        return true;
    else
        return false;
}
