#ifndef TRANSACTIONFILE.h
#define TRANSACTIONFILE.h
#include "Transaction.h"
#include <iostream>
#include <vector>
#include "User.h"
#include "Markup.h"

using namespace std;

class TransactionFile
{
    public:
        void addTransactionToFile(Transaction transaction, string fileName);
        vector<User> loadTransactionFromFile(string fileName);
};



#endif
