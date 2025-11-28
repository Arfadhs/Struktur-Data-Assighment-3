#include <iostream>
#include "queue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmpty(Queue Q) {
    return Q.tail == -1;
}

bool isFull(Queue Q) {
    return Q.tail == MAX - 1;
}

void enqueue(Queue &Q, int x) {
    if (isFull(Q)) return;

    if (isEmpty(Q)) {
        Q.head = 0;
        Q.tail = 0;
    } else {
        Q.tail++;
    }
    Q.data[Q.tail] = x;
}

int dequeue(Queue &Q) {
    if (isEmpty(Q)) return -1;

    int x = Q.data[Q.head];

    for (int i = 0; i < Q.tail; i++) {
        Q.data[i] = Q.data[i + 1];
    }
    Q.tail--;

    if (Q.tail == -1) { 
        Q.head = -1;
    }

    return x;
}

void printInfo(Queue Q) {
    cout << Q.head << " - " << Q.tail << "    : ";

    if (isEmpty(Q)) {
        cout << "empty queue" << endl;
        return;
    }

    for (int i = Q.head; i <= Q.tail; i++) {
        cout << Q.data[i] << " ";
    }
    cout << endl;
}
