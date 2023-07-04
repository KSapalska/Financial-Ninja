#include "AncillaryMethods.h"

string AncillaryMethods::IntToString(int number)
{
    ostringstream ss;
    ss << number;
    string str = ss.str();
    return str;
}

string AncillaryMethods::replaceFirstLetterUppercaseAndOtherLowercase(string text)
{
    if (!text.empty())
    {
        transform(text.begin(), text.end(), text.begin(), ::tolower);
        text[0] = toupper(text[0]);
    }
    return text;
}

int AncillaryMethods::StringToInt(string number)
{
    int numberInt;
    istringstream iss(number);
    iss >> numberInt;

    return numberInt;
}

char AncillaryMethods::getCharacter()
{
    string input = "";
    char sign  = {0};

    while (true)
    {
        getline(cin, input);

        if (input.length() == 1)
        {
            sign = input[0];
            break;
        }
        cout << "Must be a single character. Please reenter: ";
    }
    return sign;
}

string AncillaryMethods::getSingleLine()
{
    string input = "";
    getline(cin, input);
    return input;
}


string AncillaryMethods::replaceComaWithDot(string amount)
{
    for(int i = 0; i < amount.length(); i++)
    {
        if(amount[i] == ',')
            amount[i] = '.';
    }
    return amount;
}

string AncillaryMethods::floatToString(float amount)
{
    stringstream stream;
    stream << amount;
    string amountString = stream.str();
    return amountString;
}
