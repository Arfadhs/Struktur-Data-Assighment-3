#include "SLLInventory.h"
#include <iostream>
using namespace std;

void createList(List& L) {
    L.head = NULL;
}

bool isEmpty(List L) {
    return L.head == NULL;
}

Node* allocate(Product P) {
    Node* N = new Node;
    N->info = P;
    N->next = NULL;
    return N;
}

void deallocate(Node* N) {
    delete N;
}

void insertFirst(List& L, Product P) {
    Node* N = allocate(P);
    N->next = L.head;
    L.head = N;
}

void insertLast(List& L, Product P) {
    Node* N = allocate(P);
    if (L.head == NULL) {
        L.head = N;
        return;
    }
    Node* t = L.head;
    while (t->next != NULL)
        t = t->next;
    t->next = N;
}

void insertAfter(Node* Q, Product P) {
    if (Q == NULL) return;
    Node* N = allocate(P);
    N->next = Q->next;
    Q->next = N;
}

void deleteFirst(List& L, Product& P) {
    if (L.head == NULL) return;
    Node* t = L.head;
    P = t->info;
    L.head = t->next;
    deallocate(t);
}

void deleteLast(List& L, Product& P) {
    if (L.head == NULL) return;
    Node* t = L.head;
    Node* prev = NULL;
    while (t->next != NULL) {
        prev = t;
        t = t->next;
    }
    P = t->info;
    if (prev == NULL)
        L.head = NULL;
    else
        prev->next = NULL;
    deallocate(t);
}

void deleteAfter(Node* Q, Product& P) {
    if (Q == NULL || Q->next == NULL) return;
    Node* t = Q->next;
    P = t->info;
    Q->next = t->next;
    deallocate(t);
}

void updateAtPosition(List& L, int posisi) {
    Node* t = L.head;
    int i = 1;
    while (t != NULL && i < posisi) {
        t = t->next;
        i++;
    }
    if (t == NULL) return;

    cout << "Masukkan data baru:\n";
    cout << "Nama: "; cin >> t->info.Nama;
    cout << "SKU: "; cin >> t->info.SKU;
    cout << "Jumlah: "; cin >> t->info.Jumlah;
    cout << "Harga Satuan: "; cin >> t->info.HargaSatuan;
    cout << "Diskon (%): "; cin >> t->info.DiskonPersen;
}

float hargaAkhir(Product P) {
    return P.HargaSatuan * (1 - P.DiskonPersen / 100);
}

void viewList(List L) {
    Node* t = L.head;
    int idx = 1;
    while (t != NULL) {
        cout << "Posisi: " << idx << endl;
        cout << "Nama: " << t->info.Nama << endl;
        cout << "SKU: " << t->info.SKU << endl;
        cout << "Jumlah: " << t->info.Jumlah << endl;
        cout << "Harga Satuan: " << t->info.HargaSatuan << endl;
        cout << "Diskon (%): " << t->info.DiskonPersen << endl;
        cout << "Harga Akhir: " << hargaAkhir(t->info) << endl;
        cout << "------------------\n";
        t = t->next;
        idx++;
    }
}

void searchByFinalPriceRange(List L, float minPrice, float maxPrice) {
    Node* t = L.head;
    int idx = 1;
    while (t != NULL) {
        float h = hargaAkhir(t->info);
        if (h >= minPrice && h <= maxPrice) {
            cout << "Posisi " << idx << ": " << t->info.Nama
                 << " (Harga Akhir: " << h << ")\n";
        }
        t = t->next;
        idx++;
    }
}

void MaxHargaAkhir(List L) {
    if (L.head == NULL) {
        cout << "List kosong.\n";
        return;
    }

    float maxHarga = hargaAkhir(L.head->info);
    Node* t = L.head->next;
    while (t != NULL) {
        float h = hargaAkhir(t->info);
        if (h > maxHarga) maxHarga = h;
        t = t->next;
    }

    t = L.head;
    int posisi = 1;
    cout << "\n=== Produk dengan Harga Akhir Maksimum ===\n";
    while (t != NULL) {
        if (hargaAkhir(t->info) == maxHarga) {
            cout << "Posisi: " << posisi << endl;
            cout << "Nama: " << t->info.Nama << endl;
            cout << "SKU: " << t->info.SKU << endl;
            cout << "Harga Akhir: " << maxHarga << endl;
            cout << "------------------\n";
        }
        t = t->next;
        posisi++;
    }
}
