#ifndef TRANSACTIONMANAGER_H
#define TRANSACTIONMANAGER_H


#include "ExpensesFile.h"
#include "IncomesFile.h"
#include "DatesManager.h"
#include "Transaction.h"
#include <algorithm>


class TransactionManager
{
    int LOGGED_USER_ID;

    ExpensesFile expensesFile;
    IncomesFile incomesFile;
  //  DatesManager datesManager;



public:
    TransactionManager(string fileWithExpenses,string fileWithIncomes,int loggedUserId);
    void readIncomesFromFile();
    void readExpensesFromFile();
    void addIncome();
    void addExpense();



};

#endif
