#include <iostream>
#include <string>
using namespace std;

// -------- Struct --------
struct Product {
    string Nama, SKU;
    int Jumlah;
    float HargaSatuan, DiskonPersen;
};

struct Node {
    Product info;
    Node* next;
};

struct List {
    Node* head;
};

// -------- Fungsi Linked List --------
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
                 << " (Harga: " << h << ")\n";
        }
        t = t->next;
        idx++;
    }
}

// -------- Main --------
int main() {
    List inventory;
    createList(inventory);

    Product P1 = {"Mouse", "SKU001", 10, 150000, 10};
    Product P2 = {"Keyboard", "SKU002", 5, 250000, 5};
    Product P3 = {"Monitor", "SKU003", 2, 1500000, 15};

    insertLast(inventory, P1);
    insertLast(inventory, P2);
    insertFirst(inventory, P3);

    cout << "=== Semua Produk ===\n";
    viewList(inventory);

    cout << "\n=== Cari Produk dengan harga akhir 100000 - 300000 ===\n";
    searchByFinalPriceRange(inventory, 100000, 300000);

    return 0;
}
