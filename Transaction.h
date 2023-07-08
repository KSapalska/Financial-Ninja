#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>

using namespace std;

class Transaction
{
    int transactionId;
    int userId;
    int date;
    float amount;
    string category;

public:

    void setTransactionId(int transactionId);
    void setUserId(int userId);
    void setDate(int date);
    void setAmount(float amount);
    void setCategory(string category);

    int getTransactionId();
    int getUserId();
    int getDate();
    float getAmount();
    string getCategory();


};

#endif // TRANSACTION_H
