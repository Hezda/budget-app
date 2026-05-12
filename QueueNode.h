#ifndef QUEUENODE_H
#define QUEUENODE_H

#include "Transaction.h"

class QueueNode{
    public: Transaction data; // stores the transaction
    QueueNode* next; //points to teh next node

    QueueNode(Transaction t):data(t), next(nullptr) {}
       
    
    };
    

#endif
