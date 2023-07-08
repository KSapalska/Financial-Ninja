#include <iostream>
#include "FinancialNinja.h"

using namespace std;

int main()
{

    FinancialNinja financialNinja=FinancialNinja("users.xml");
    char selectChoiceFromMainMenu();
    char selectChoiceFromUserMenu();
    char choice;
/*

    financialNinja.rejestracjaUzytkownika();
    financialNinja.wypiszWszystkichUzytkownikow();
    financialNinja.logowanieUzytkownika();
    financialNinja.zmianaHaslaZalogowanegoUzytkownika();
*/



   while(true)
   {

        if (!financialNinja.czyUzytkownikJestZalogowany())
        {
            choice = selectChoiceFromMainMenu();

            switch (choice)
            {
            case '1':
                financialNinja.rejestracjaUzytkownika();
                break;
            case '2':
                financialNinja.logowanieUzytkownika();
                break;
            case '3':
                financialNinja.wypiszWszystkichUzytkownikow();
                break;
            case '9':
                exit(0);
            default:
                cout << endl << "There is no such option in the menu" << endl << endl;
                system("pause");
                break;
            }
        }
          else {
            choice = selectChoiceFromUserMenu();

            switch (choice)
            {
            case '1':
  //              financialNinja.dodajAdresata();
                break;
            case '2':
 //               financialNinja.wyszukajAdresatowPoImieniu();
                break;
            case '3':
     //           financialNinja.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
 //              financialNinja.wyswietlWszystkichAdresatow();
                              break;
            case '5':
   //            financialNinja.usunAdresata();

                break;
            case '6':
              financialNinja.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '7':
               financialNinja.wylogowanieUzytkownika();
                break;
            }
          }
    }
    return 0;
}


    char selectChoiceFromMainMenu()
{
    char choice;

    system("cls");
    cout << "    >>> MAIN MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Register" << endl;
    cout << "2. Log in" << endl;
    cout << "3. ListAllUser" << endl;
    cout << "9. Exit" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    choice = AncillaryMethods::getCharacter();

    return choice;
}

char selectChoiceFromUserMenu()
{
    char choice;

    system("cls");
    cout << " >>> USER MENU <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Add new income" << endl;
    cout << "2. Add new expense" << endl;
    cout << "3. Current month balance" << endl;
    cout << "4. Last month's balance" << endl;
    cout << "5. Selected period balance" << endl;
    cout << "---------------------------" << endl;
    cout << "6. Change password" << endl;
    cout << "7. Log out" << endl;
    cout << "---------------------------" << endl;
    cout << "Your choice: ";
    choice = AncillaryMethods::getCharacter();

    return choice;
}







