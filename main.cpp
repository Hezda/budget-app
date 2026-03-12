#include <iostream>
#include "Transaction.h"

using namespace std;

int main() {
    Transaction t1(20.5, "Food", "03/11/2026", "lunch");
    cout << "Amount: " << t1.amount << endl;
    cout<< "Category: " << t1.category << endl;
    cout<< "Date: " << t1.date << endl;
    cout << "Description: " << t1.description << endl;
   
    return 0;
}