#include <iostream>
#include "Transaction.h"
#include "LinkedList.h"
#include "TransactionQueue.h"

using namespace std;

int main() {
    LinkedList list;
<<<<<<< HEAD
=======
    TransactionQueue recentQueue;
>>>>>>> ed0f724 (week 3: Implemented TransactionQueue for recent transaction and integrated into main)
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
<<<<<<< HEAD
    cout << "\nTransaction Created!" << endl;
    cout << "Amount: " << t1.amount << endl;
    cout<< "Category: " << t1.category << endl;
    cout<< "Date: " << t1.date << endl;
    cout << "Description: " << t1.description << endl;

   
    // LinkedList test
=======
>>>>>>> ed0f724 (week 3: Implemented TransactionQueue for recent transaction and integrated into main)
    list.insert(t1);
    recentQueue.enqueue(t1);
    
    cout << "Transaction added successfully! " << endl;


<<<<<<< HEAD
    cout << "Total: " << list.getTotal() << endl;

  
=======
>>>>>>> ed0f724 (week 3: Implemented TransactionQueue for recent transaction and integrated into main)

   break;
        }

<<<<<<< HEAD
        case 2:{
            list.displayTransactions();
    break;
        }
=======
        case 2: cout << "\n=== All Transactions===" << endl; 
        list.display();
        break;
>>>>>>> ed0f724 (week 3: Implemented TransactionQueue for recent transaction and integrated into main)
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