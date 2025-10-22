#include "Singlylist.h"

/* ********* pengecekan dan pembuatan list ********* */
void createList(List& L) {
    L.first = Nil;
}

/* ********* manajemen memori ********* */
address alokasi(infotype x) {
    address P = new ElmList;
    P->info = x;
    P->next = Nil;
    return P;
}

void dealokasi(address& P) {
    delete P;
    P = Nil;
}

/* ********* penambahan elemen ********* */
void insertFirst(List& L, address P) {
    if (P != Nil) {
        P->next = L.first;
        L.first = P;
    }
}

/* ********** proses semua elemen list ********* */
void printInfo(const List& L) {
    address P = L.first;
    bool firstOut = true;
    while (P != Nil) {
        if (!firstOut) cout << " ";
        cout << P->info;
        firstOut = false;
        P = P->next;
    }
    cout << endl;
}

int nbList(const List& L) {
    int n = 0;
    address P = L.first;
    while (P != Nil) {
        n++;
        P = P->next;
    }
    return n;
}

/* ********** penghapusan elemen ********* */
void deleteFirst(List& L, address& P) {
    P = Nil;
    if (L.first != Nil) {
        P = L.first;
        L.first = L.first->next;
        P->next = Nil;
    }
}

void deleteLast(List& L, address& P) {
    P = Nil;
    if (L.first == Nil) return;

    address Q = L.first;
    address Prec = Nil;

    while (Q->next != Nil) {
        Prec = Q;
        Q = Q->next;
    }
    P = Q;
    if (Prec == Nil) {
        // hanya satu elemen
        L.first = Nil;
    }
    else {
        Prec->next = Nil;
    }
    P->next = Nil;
}

void deleteAfter(List& L, address Prec, address& P) {
    P = Nil;
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = P->next;
        P->next = Nil;
    }
}

/* ********** penghapusan seluruh list ********* */
void deleteList(List& L) {
    address P;
    while (L.first != Nil) {
        deleteFirst(L, P);
        dealokasi(P);
    }
}