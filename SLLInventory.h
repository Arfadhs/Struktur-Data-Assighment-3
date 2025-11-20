#ifndef SLLINVENTORY_H
#define SLLINVENTORY_H

#include <string>
using namespace std;

struct Product {
    string Nama;
    string SKU;
    int Jumlah;
    float HargaSatuan;
    float DiskonPersen;
};

struct Node {
    Product info;
    Node* next;
};

struct List {
    Node* head;
};

void createList(List& L);
bool isEmpty(List L);
Node* allocate(Product P);
void deallocate(Node* N);

void insertFirst(List& L, Product P);
void insertLast(List& L, Product P);
void insertAfter(Node* Q, Product P);

void deleteFirst(List& L, Product& P);
void deleteLast(List& L, Product& P);
void deleteAfter(Node* Q, Product& P);

void updateAtPosition(List& L, int posisi);
void viewList(List L);
void searchByFinalPriceRange(List L, float minPrice, float maxPrice);
void MaxHargaAkhir(List L);
float hargaAkhir(Product P);

#endif
