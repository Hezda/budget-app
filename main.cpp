#include <iostream>
#include "Transaction.h"
#include "LinkedList.h"

using namespace std;

int main() {
    Transaction t1(20.5, "Food", "03/11/2026", "lunch");
    cout << "Amount: " << t1.amount << endl;
    cout<< "Category: " << t1.category << endl;
    cout<< "Date: " << t1.date << endl;
    cout << "Description: " << t1.description << endl;
   
    // LinkedList test
    LinkedList list;
    list.insert(t1);
    Transaction t2(15.0, "Transport", "02/12/2026", "Uber");
    list.insert(t2);
    cout << "Linked list inserted successfully. " << endl;
    list.display();

    cout << "\nAfter deleting Food:\n";
    list.remove("Food");
    list.display();

    cout << "Total: " << list.getTotal() << endl;

    return 0;
}