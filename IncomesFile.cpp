#include "IncomesFile.h"

IncomesFile::IncomesFile(string filename)
    : XmlFile(filename)
{

};

void IncomesFile::addIncomeToFile(Transaction transaction)
{
addTransactionToFile(transaction,getFileName());
}


vector<User> IncomesFile::loadIncomeFromFile()
{
loadTransactionFromFile(getFileName());
}
