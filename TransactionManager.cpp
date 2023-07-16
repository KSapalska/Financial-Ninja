#include "TransactionManager.h"


  TransactionManager::TransactionManager(string fileWithExpenses,string fileWithIncomes,int loggedUserId):expensesFile(fileWithExpenses),incomesFile(fileWithIncomes)
  {
      LOGGED_USER_ID=loggedUserId;
  };

   // void TransactionManager::readIncomesFromFile();
 //   void TransactionManager::readExpensesFromFile();

    void TransactionManager::addIncome()
    {
        Transaction transaction;
        transaction.setAmount(12.45);
        transaction.setUserId(LOGGED_USER_ID);
        transaction.setCategory("food");
        transaction.setDate(12121212);
        transaction.setTransactionId(10);
        incomesFile.addIncomeToFile(transaction);
    };
  //  void TransactionManager::addExpense();
