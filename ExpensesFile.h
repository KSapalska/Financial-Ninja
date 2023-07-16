#ifndef EXPENSESFILE_H
#define EXPENSESFILE_H

#include "XmlFile.h"
#include "Expense.h"
#include "Markup.h"
#include "AncillaryMethods.h"
#include <vector>
#include <cmath>

class ExpensesFile : public XmlFile
{
    int idOfLastExpense;

    public:
        ExpensesFile(string filename);
        void addExpenseToFile(Expense expense);
        vector<Expense> loadExpensesOfLoggedInUserFromFile(int idOfLoggedInUser);
        int getIdOfLastExpense();
};

#endif
