#include "Doublylist.h"

void createList(List &L) {
    first(L) = nil;
    last(L) = nil;
}

address alokasi(infotype x) {
    address P = new elmList;
    info(P) = x;
    next(P) = nil;
    prev(P) = nil;
    return P;
}

void dealokasi(address P) {
    delete P;
}

void printInfo(List L) {
    address P = first(L);
    if (P == nil) {
        cout << "List Kosong" << endl;
    } else {
        while (P != nil) {
            cout << "No Polisi : " << info(P).nopol << endl;
            cout << "Warna     : " << info(P).warna << endl;
            cout << "Tahun     : " << info(P).thnBuat << endl;
            cout << "-----------------------" << endl;
            P = next(P);
        }
    }
}

void insertLast(List &L, address P) {
    if (first(L) == nil) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

address findElm(List L, string nopol) {
    address P = first(L);
    while (P != nil) {
        if (info(P).nopol == nopol) {
            return P;
        }
        P = next(P);
    }
    return nil;
}

void deleteFirst(List &L, address &P) {
    P = first(L);
    if (first(L) != nil) {
        if (first(L) == last(L)) { 
            first(L) = nil;
            last(L) = nil;
        } else {
            first(L) = next(first(L));
            prev(first(L)) = nil;
            next(P) = nil;
        }
    }
}

void deleteLast(List &L, address &P) {
    P = last(L);
    if (first(L) != nil) {
        if (first(L) == last(L)) { 
            createList(L);
        } else {
            last(L) = prev(last(L));
            next(last(L)) = nil;
            prev(P) = nil;
        }
    }
}

void deleteAfter(List &L, address Prec, address &P) {
    P = next(Prec);
    if (P != nil) {
        next(Prec) = next(P);
        if (next(P) != nil) { 
            prev(next(P)) = Prec;
        } else { 
            last(L) = Prec;
        }
        next(P) = nil;
        prev(P) = nil;
    }
}

void deleteSpecific(List &L, string nopol) {
    address P = findElm(L, nopol);
    address dummy;
    
    if (P == nil) {
        cout << "Data " << nopol << " tidak ditemukan." << endl;
    } else {
        if (P == first(L)) {
            deleteFirst(L, dummy);
        } else if (P == last(L)) {
            deleteLast(L, dummy);
        } else {
            deleteAfter(L, prev(P), dummy);
        }
        dealokasi(dummy);
        cout << "Data dengan nomor polisi " << nopol << " berhasil dihapus." << endl;
    }
}