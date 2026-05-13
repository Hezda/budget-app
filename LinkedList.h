#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <string>
#include "Node.h"
#include <iomanip>
using namespace std;

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(Transaction t) {
        Node* newNode = new Node(t);

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;

            while (temp->next != nullptr) {
                temp = temp->next;
            }

            temp->next = newNode;
        }
    }

    void display() {   
        Node* temp = head;

        while (temp != nullptr) {
            cout << "Amount: " << temp->data.amount << endl;
            cout << "Category: " << temp->data.category << endl;
            cout << "Date: " << temp->data.date << endl;
            cout << "Description: " << temp->data.description << endl;
            cout << "-------------------" << endl;

            temp = temp->next;
        }
    }
    void remove(string category) {
    Node* temp = head;
    Node* prev = nullptr;

    // if first node is the one to delete
    if (temp != nullptr && temp->data.category == category) {
        head = temp->next;
        delete temp;
        return;
    }

    // search for node
    while (temp != nullptr && temp->data.category != category) {
        prev = temp;
        temp = temp->next;
    }

    // if not found
    if (temp == nullptr) return;

    // unlink and delete
    prev->next = temp->next;
    delete temp;
}
double getTotal() {
    double total = 0;
    Node* temp = head;

    while (temp != nullptr) {
        total += temp->data.amount;
        temp = temp->next;
    }

    return total;
}


void displayTransactions(){
    if ( head== nullptr){
        cout<<"No transactions found. "<<endl;
        return;}
    cout<<"\n================================================"<<endl;
    cout<<"       TRANSACTION HISTORY                        "<<endl;
    cout<<"=================================================="<<endl;
    cout<<left
        <<setw(5)<< "No."
        <<setw(15) <<"Category"
        <<setw(10)<<"Amount"
        <<setw(12)<<" Date "
        <<"Description"
        <<endl;
    cout<<"----------------------------------------------------"<<endl;

    Node* temp=head;
    int num=1;
    
    while (temp!=nullptr){
        cout<<left
            <<setw(5)<<num
            <<setw(15)<<temp->data.category
            <<"$"
            <<setw(9) << fixed << setprecision(2)
                      <<temp->data.amount  
                      << setw(12) << temp->data.date
                      << temp->data.description
                      << endl;
                 num++;
                 temp = temp->next;         // move to next node
             }
     
             cout << "------------------------------------------" << endl;
             cout << right << setw(27) << "Total: $" 
                  << fixed << setprecision(2) << getTotal() << endl;
             cout << "==========================================" << endl;
         }    
    



    
void searchByCategory(string category) { // Search linked list for matching category
    Node* temp = head; // Traverse through each node
    bool found = false;

    while (temp != nullptr) { //Check if category matches
        if (temp->data.category == category) {
            cout << "Amount: " << temp->data.amount << endl;
            cout << "Category: " << temp->data.category << endl;
            cout << "Date: " << temp->data.date << endl;
            cout << "Description: " << temp->data.description << endl;
            cout << "-------------------" << endl;
            found = true;
        }

        temp = temp->next;
    }

    if (!found) {
        cout << "No transactions found in category: " << category << endl;
    }
}
// Sort transactions by amount using Bubble Sort
void sortByAmount() {
    if (head == nullptr) {
        cout << "No transactions to sort." << endl;
        return;
    }

    bool swapped;
    Node* temp;
    Node* last = nullptr;

    do {
        swapped = false;
        temp = head;

        while (temp->next != last) {
            // Compare two neighboring transactions
            if (temp->data.amount > temp->next->data.amount) {
                // Swap the transaction data
                Transaction swapTemp = temp->data;
                temp->data = temp->next->data;
                temp->next->data = swapTemp;

                swapped = true;
            }

            temp = temp->next;
        }

        last = temp;

    } while (swapped);

    cout << "Transactions sorted by amount." << endl;
}
void showLargestTransaction() {
    if (head == nullptr) {
        cout << "No transactions found." << endl;
        return;
    }

    Node* temp = head;
    Node* largest = head;

    while (temp != nullptr) {
        if (temp->data.amount > largest->data.amount) {
            largest = temp;
        }

        temp = temp->next;
    }

    cout << "\n=== Largest Transaction ===" << endl;
    cout << "Amount: $" << largest->data.amount << endl;
    cout << "Category: " << largest->data.category << endl;
    cout << "Date: " << largest->data.date << endl;
    cout << "Description: " << largest->data.description << endl;
}
};
  
#endif