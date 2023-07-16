#ifndef INCOMESFILE.h
#define INCOMESFILE.h
#include <iostream>
#include <vector>
#include "User.h"
#include "XmlFile.h"
#include "TransactionFile.h"
#include "Transaction.h"



using namespace std;

class IncomesFile : public XmlFile, public virtual TransactionFile
{


    public:
        IncomesFile(string filename);
        void addIncomeToFile(Transaction transaction);
        vector<User> loadIncomeFromFile();

};



#endif
