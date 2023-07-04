#ifndef ANCILLARYMETHODS_H
#define ANCILLARYMETHODS_H

#include <iostream>
#include <sstream>
#include <algorithm> //- sprawdzic po co

using namespace std;

class AncillaryMethods
{
public:
    static string IntToString(int number);
    static string replaceFirstLetterUppercaseAndOtherLowercase(string text);
    static int StringToInt(string number);
    static char getCharacter();
    static string getSingleLine();
    static string replaceComaWithDot(string amount); //
    static string floatToString(float amount); //zweryfikowac czy potrzebne
};

#endif
