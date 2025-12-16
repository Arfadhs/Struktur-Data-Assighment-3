#include "bstree.h"
#include <algorithm> 

address alokasi(infotype x) {
    address P = new Node;
    P->info = x;
    P->left = Nil; P->right = Nil;
    return P;
}

void insertNode(address &root, infotype x) {
    if (root == Nil) {
        root = alokasi(x);
    } else {
        if (x < root->info) insertNode(root->left, x);
        else if (x > root->info) insertNode(root->right, x);
    }
}

void printInorder(address root) {
    if (root != Nil) {
        printInorder(root->left);
        cout << root->info << " - ";
        printInorder(root->right);
    }
}

int hitungJumlahNode(address root) {
    if (root == Nil) {
        return 0; 
    }
    return 1 + hitungJumlahNode(root->left) + hitungJumlahNode(root->right);
}

int hitungTotalInfo(address root) {
    if (root == Nil) {
        return 0;
    }
    return root->info + hitungTotalInfo(root->left) + hitungTotalInfo(root->right);
}

int hitungKedalaman(address root, int current) {
    if (root == Nil) {
        return current; 
    }
    
    int leftDepth = hitungKedalaman(root->left, current + 1);
    int rightDepth = hitungKedalaman(root->right, current + 1);
    
    if (leftDepth > rightDepth) return leftDepth;
    else return rightDepth;
}