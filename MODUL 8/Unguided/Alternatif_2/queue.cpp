#include <iostream>
#include "queue.h"
using namespace std;

void createQueue(Queue &Q) {
    Q.head = -1;
    Q.tail = -1;
}

bool isEmpty(Queue Q) {
    return Q.head == -1;
}

bool isFull(Queue Q) {
    return Q.tail == MAX - 1;
}

void enqueue(Queue &Q, int x) {
    if (isFull(Q)) {
        cout << "Queue penuh\n";
        return;
    }

    if (isEmpty(Q)) {
        Q.head = Q.tail = 0;
    } else {
        Q.tail++;
    }

    Q.data[Q.tail] = x;
}

int dequeue(Queue &Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong\n";
        return -1;
    }

    int x = Q.data[Q.head];

    if (Q.head == Q.tail) {
        Q.head = Q.tail = -1;
    } else {
        Q.head++;
    }

    return x;
}

void printQueue(Queue Q) {
    if (isEmpty(Q)) {
        cout << "Queue kosong\n";
        return;
    }

    for (int i = Q.head; i <= Q.tail; i++) {
        cout << Q.data[i] << " ";
    }
    cout << endl;
}
