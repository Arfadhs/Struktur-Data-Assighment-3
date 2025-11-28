#include <iostream>
#include "queue.h"
using namespace std;

int main() {
    Queue Q;
    createQueue(Q);

    cout << "Hello world!\n";
    cout << "-----------------------\n";
    cout << "H - T    : Queue Info\n";

    printInfo(Q);               

    enqueue(Q, 5);
    printInfo(Q);

    enqueue(Q, 2);
    printInfo(Q);               

    enqueue(Q, 7);
    printInfo(Q);               

    dequeue(Q);
    printInfo(Q);
    enqueue(Q, 4);
    printInfo(Q);               

    dequeue(Q);                 
    printInfo(Q);               

    dequeue(Q);                 
    printInfo(Q);              

    dequeue(Q);                 
    printInfo(Q);              

    return 0;
}
