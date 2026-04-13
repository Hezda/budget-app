#include <iostream>
#include "Transaction.h"
#include "LinkedList.h"
#include "TransactionQueue.h"

using namespace std;

int main() {
    LinkedList list;
    TransactionQueue recentQueue;
    int choice;
    do {
        cout<<"\n=== Finance Tracker ==="<< endl;
        cout<<"1. Add transaction" <<endl;
        cout<<"2.View transactions" <<endl;
        cout <<"3. Search transaction" <<endl;
        cout <<"4. View recent Transactions" <<endl;
        cout<<"5.View balance" <<endl;
        cout<<"6.Exit" <<endl;
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
    list.insert(t1);
    recentQueue.enqueue(t1);
    
    cout << "Transaction added successfully! " << endl;



   break;
        }

        case 2:{
            list.displayTransactions();
    break;
        }
    
case 3: cout << "Search - coming in Week 5" << endl; break;
        case 4: 
        recentQueue.displayRecent();
        break;
        case 5: cout << "View balance/ total: " << list.getTotal() << endl; 
        break;
        case 6: cout << "Goodbye!" << endl; break;
        default: cout << "Invalid option, try again." << endl;
    }
} while (choice != 6); // keep looping until user picks Exit

return 0;



}