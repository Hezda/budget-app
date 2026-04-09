#include <iostream>
#include "Transaction.h"
#include "LinkedList.h"

using namespace std;

int main() {
    LinkedList list;
    int choice;
    do {
        cout<<"\n=== Finance Tracker ==="<< endl;
        cout<<"1. Add transaction" <<endl;
        cout<<"2.View transactions" <<endl;
        cout <<"3. Search transaction" <<endl;
        cout<<"4.View balance" <<endl;
        cout<<"5.Exit" <<endl;
        cout<<"Enter choice:";
        cin>>choice;
    

    switch(choice){

        case 1: {
            double amount;
            string category, date, description;
            cout<<"Enter amount: ";cin>>amount;
            cout <<"Enter category: "; cin>> category;
            cout<< "Enter date: "; cin>>date;
            cout<< " Enter description: "; cin>> description;


    Transaction t1(amount ,category , date , description);
    cout << "\nTransaction Created!" << endl;
    cout << "Amount: " << t1.amount << endl;
    cout<< "Category: " << t1.category << endl;
    cout<< "Date: " << t1.date << endl;
    cout << "Description: " << t1.description << endl;

   
    // LinkedList test
    list.insert(t1);
    Transaction t2(15.0, "Transport", "02/12/2026", "Uber");
    list.insert(t2);
    cout << "Linked list inserted successfully. " << endl;
    list.display();

    cout << "\nAfter deleting Food:\n";
    list.remove("Food");
    list.display();

    cout << "Total: " << list.getTotal() << endl;

  

   break;
        }

        case 2:{
            list.displayTransactions();
    break;
        }
        case 3: cout << "Search - coming in Week 5" << endl; break;
        case 4: cout << "View balance - coming in Week 7" << endl; break;
        case 5: cout << "Goodbye!" << endl; break;
        default: cout << "Invalid option, try again." << endl;
    }
} while (choice != 5); // keep looping until user picks Exit

return 0;



}