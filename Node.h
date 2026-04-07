#ifndef NODE_H // Checks if NODE_H has not been defined yet 
#define NODE_H // Defines NODE_H so this file does not get included twice

#include "Transaction.h" // lets Node use Transaction
class Node{
    public:  Transaction data; // stores one Transaction inside the node
    Node* next; 
    Node(Transaction t) : data(t), next(nullptr){ // Constructor for creating a new node with a transaction
     

    }
};
#endif