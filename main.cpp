#include <iostream>
#include "Transaction.h"

using namespace std;

int main() {
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
   break;
        }

        case 2: cout << "View transactions - coming in Week 2" << endl; break;
        case 3: cout << "Search - coming in Week 5" << endl; break;
        case 4: cout << "View balance - coming in Week 7" << endl; break;
        case 5: cout << "Goodbye!" << endl; break;
        default: cout << "Invalid option, try again." << endl;
    }
} while (choice != 5); // keep looping until user picks Exit

return 0;


}