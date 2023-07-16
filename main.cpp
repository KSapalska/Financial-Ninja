#include <iostream>
#include "FinancialNinja.h"

using namespace std;

int main()
{
  FinancialNinja financialNinja("users.xml","incomes.xml","expenses.xml");
   // FinancialNinja financialNinja=FinancialNinja("users.xml");
    char selectChoiceFromMainMenu();
    char selectChoiceFromUserMenu();
    char choice;


   while(true)
   {

        if (!financialNinja.isUserLoggedIn())
        {
            choice = selectChoiceFromMainMenu();

            switch (choice)
            {
            case '1':
                financialNinja.registerUser();
                break;
            case '2':
                financialNinja.logIn();
                break;
            case '3':
                financialNinja.listAllUsers();
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
                financialNinja.addIncome();
                break;
            case '2':
 //               financialNinja.addExpense();
                break;
            case '3':
     //           financialNinja.printBalanceCurrentMonth();
                break;
            case '4':
 //              financialNinja.printBalanceLastMonth();
                              break;
            case '5':
   //            financialNinja.printBalanceFromselectedPeriod();

                break;
            case '6':
              financialNinja.changePasswordForLoggedUser();
                break;
            case '7':
               financialNinja.logOut();
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







