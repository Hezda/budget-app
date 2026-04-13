#ifndef TRANSACTIONQUEUE_H
#define TRANSACTIONQUEUE_H

#include "QueueNode.h"

class TransactionQueue {
    private:
    QueueNode* front;
    QueueNode* rear;
    int size;

public:
    TransactionQueue();
    void enqueue(Transaction t);
    void dequeue();
    void displayRecent();
    bool isEmpty();
    int getSize();

}; 
#endif