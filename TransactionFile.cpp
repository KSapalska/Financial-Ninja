#include "TransactionFile.h"


void TransactionFile::addTransactionToFile(Transaction transaction,string fileName)
{
    CMarkup xml;
    xml.Load(fileName);
    xml.AddElem( "TRANSACTION" );
    xml.IntoElem();
    {
        xml.AddElem( "ID", transaction.getTransactionId() );
        xml.AddElem( "USERID", transaction.getUserId() );
        xml.AddElem( "DATE", transaction.getDate() );
        xml.AddElem( "AMOUNT", transaction.getAmount() );
        xml.AddElem( "CATEGORY", transaction.getCategory() );
    }
    xml.OutOfElem();
    xml.Save(fileName);

    cout<<"haloto ja";
    cin.get();
}



vector<User> TransactionFile::loadTransactionFromFile(string fileName)
{

}
