//Defines what a transaction object looks like
//Stores amount, category, date, descrption
// Declares a constructor(how transactions get created)

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
using namespace std;

class Transaction {
    public: 
    double amount;
    string category;
    string date;
    string description;

    Transaction(double amt, string cat, string dt, string desc);

};
#endif