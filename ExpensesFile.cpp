#include "ExpensesFile.h"

ExpensesFile::ExpensesFile(string filename)
    : XmlFile(filename)
{

};


void ExpensesFile::addExpenseToFile(Transaction transaction)
{
addTransactionToFile(transaction,getFileName());
}


vector<User> ExpensesFile::loadExpenseFromFile()
{
loadTransactionFromFile(getFileName());
}


