#ifndef EXPENSESFILE_H
#define EXPENSESFILE_H

#include "XmlFile.h"
#include "TransactionFile.h"


class ExpensesFile : public XmlFile, public virtual TransactionFile
{


    public:
        ExpensesFile(string filename);
        void addExpenseToFile(Transaction transaction);
        vector<User> loadExpenseFromFile();

};

#endif


