#include <iostream>
#include "bstree.h"

using namespace std;

int main() {
    cout << "\n=== LATIHAN 3: Pre-Order & Post-Order ===" << endl;
    
    address root = Nil;
    
    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 2);
    insertNode(root, 5);
    insertNode(root, 1);
    insertNode(root, 3);

    
    cout << "\nPre-Order  : ";
    printPreOrder(root);
    
    cout << "\nPost-Order : ";
    printPostOrder(root);
    
    cout << endl << endl;
    return 0;
}