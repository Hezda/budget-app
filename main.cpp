#include <iostream>
#include "Transaction.h"
#include "LinkedList.h"
#include "TransactionQueue.h"
#include <unordered_map>

using namespace std;

int main() {
    LinkedList list;
    TransactionQueue recentQueue;
    unordered_map<string, double> categoryTotals; //updates totals (hash)

    int choice;
    do {
        cout<<"\n=== Finance Tracker ==="<< endl;
        cout<<"1. Add transaction" <<endl;
        cout<<"2.View transactions" <<endl;
        cout <<"3. Search transaction" <<endl;
        cout <<"4. View recent Transactions" <<endl;
        cout<<"5.View balance" <<endl;
        cout<<"6.View spending by category"<<endl;
        cout<<"7.Sort transactions"<<endl;
        cout<<"8.Exit"<<endl;
        cout<<"Enter choice:";
        cin>>choice;
    

    switch(choice){

        case 1: {
            double amount;
            string category, date, description;
            cout<<"Enter amount: ";cin>>amount;
            cout <<"Enter category: "; cin>> category;
            cout<< "Enter date: "; cin>>date;
            cout << "Enter description: ";
            cin.ignore();
            getline(cin, description);
        


    Transaction t1(amount ,category , date , description);
    list.insert(t1);
    recentQueue.enqueue(t1);

    categoryTotals[category] += amount; // actual functionality updates the hash table every time a transaction is added.
    
    cout << "Transaction added successfully! " << endl;



   break;
        }

        case 2:{
            list.displayTransactions();
    break;
        }
    
case 3: {// Search transactions by category
    int searchChoice;

    cout << "\n=== Search Menu ===" << endl;
    cout << "1. Search by category" << endl;
    cout << "Enter choice: ";
    cin >> searchChoice;

    if(searchChoice == 1)
    {
        string category;

        cout << "Enter category: ";
        cin >> category;

        cout << "\n=== Search Results ===" << endl;

        list.searchByCategory(category);
    }
    break;
}
case 6:

    cout << "\n=== Spending by Category ===" << endl;

    for (auto pair : categoryTotals)
    {
        cout << pair.first << ": $" << pair.second << endl;
    }

    break;

case 7:{
    int sortChoice;

    cout << "\n=== Sort Menu ===" << endl;
    cout << "1. Sort by amount" << endl;
    cout << "Enter choice: ";
    cin >> sortChoice;

    if(sortChoice == 1)
    {
        cout << "\n=== Sorted Transactions ===" << endl;

        list.sortByAmount();
    }
   
    break;
}
    case 8:
    cout << "Goodbye!" << endl;

default:
    cout << "Invalid option, try again." << endl;
       
    }
} while (choice != 8); // keep looping until user picks Exit

return 0;



}