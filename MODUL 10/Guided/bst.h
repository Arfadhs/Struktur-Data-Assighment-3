#ifndef BST_H
#define BST_H

#include <iostream>
using namespace std;

struct BST {
    int angka;
    BST *left;
    BST *right;
};

typedef BST* node;
typedef BST* BinTree;

#define Nil NULL

bool isEmpty(BinTree tree);
void createTree(BinTree &tree);
node alokasi(int angkaInput);
void dealokasi(node nodeHapus);
void insertNode(BinTree &tree, node nodeBaru);
void searchByData(BinTree tree, int angkaCari);
void preOrder(BinTree tree);
void inOrder(BinTree tree);
void postOrder(BinTree tree);
bool deleteNode(BinTree &tree, int angka);
node mostLeft(BinTree tree);
node mostRight(BinTree tree);
void deleteTree(BinTree &tree);
int size(BinTree tree);
int height(BinTree tree);

#endif
