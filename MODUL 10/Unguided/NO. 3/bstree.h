#ifndef BSTREE_H_INCLUDED
#define BSTREE_H_INCLUDED
#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct Node *address;

struct Node {
    infotype info;
    address left;
    address right;
};

address alokasi(infotype x);
void insertNode(address &root, infotype x);

void printPreOrder(address root);
void printPostOrder(address root);

#endif