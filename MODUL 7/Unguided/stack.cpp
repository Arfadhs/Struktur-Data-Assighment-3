#include "stack.h"

void createStack(Stack &S) {
    S.top = 0;
}

bool isEmpty(Stack S) {
    return S.top == 0;
}

bool isFull(Stack S) {
    return S.top == nMax;
}

void push(Stack &S, infotype x) {
    if (!isFull(S)) {
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack Penuh" << endl;
    }
}

infotype pop(Stack &S) {
    infotype x;
    if (!isEmpty(S)) {
        x = S.info[S.top];
        S.top--;
        return x;
    } else {
        cout << "Stack Kosong" << endl;
        return 0; 
    }
}

void printInfo(Stack S) {
    cout << "[TOP] ";
    for (int i = S.top; i >= 1; i--) {
        cout << S.info[i] << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    Stack tempS;
    createStack(tempS);

    while (!isEmpty(S)) {
        push(tempS, pop(S));
    }
    
    S = tempS;
}

void pushAscending(Stack &S, infotype x) {
    if (isEmpty(S) || x >= S.info[S.top]) {
        push(S, x);
    } else {
        Stack tempS;
        createStack(tempS);

        while (!isEmpty(S) && S.info[S.top] > x) {
            push(tempS, pop(S));
        }

        push(S, x);

        while (!isEmpty(tempS)) {
            push(S, pop(tempS));
        }
    }
}

void getInputStream(Stack &S) {
    char c;
    cout << "Masukkan angka (tekan enter untuk selesai): ";
    while (cin.get(c) && c != '\n') {
        if (c >= '0' && c <= '9') { 
            int angka = c - '0'; 
            push(S, angka);
        }
    }
}