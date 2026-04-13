#include <iostream>
#include "TransactionQueue.h"

using namespace std;
TransactionQueue:: TransactionQueue(){ // constructor for the queue
    front = nullptr; // since no items yet
    rear= nullptr;
    size= 0;
}
bool TransactionQueue:: isEmpty(){
    return front== nullptr;

}
int TransactionQueue:: getSize(){
    return size; // return how many transactions are in the queue
}
void TransactionQueue:: enqueue(Transaction t){ // adds a transaction to the back of the queue
    if (size == 10){ // keeps the last 10 items, by removing olderst(front)
    dequeue();
}
QueueNode* newNode = new QueueNode(t); // creates new node, with transaction inside it 

    if(isEmpty()){ 

front = rear = newNode;

}else{
    rear->next= newNode;// if queue already has items, link last node to new node and move rear pointer to new node 
    rear = newNode;
}
size++; // increase the # of elements in queue

}
void TransactionQueue:: dequeue(){ // removes item frrom front
    if (isEmpty()){
        return;
    }
    QueueNode* temp = front; // save current front node in temp, we'll delete later
    front = front->next;
    delete temp;// free memory
    size--;
    if (front == nullptr){ // iff queue became empty after deletion: set rear to nullptr too
       rear = nullptr;
    } 
}
   
void TransactionQueue:: displayRecent(){ // prints all transcactions in queue
    if (isEmpty()){
        cout <<"No recent transactions. \n";
        return;
    }
        QueueNode* current = front; // start from front 
        cout<< "\n === Recent Transactions ===\n";
        while (current != nullptr){
            cout<< "Amount: " << current ->data.amount <<endl;
            cout<< "Catagory: "<< current ->data.category << endl;
            cout<< "Date: "<< current ->data.date << endl;
            cout<< "Description: "<< current ->data.description << endl;
            cout<< "-------------------------------- "<< endl;
            current = current-> next;

        }
    }

