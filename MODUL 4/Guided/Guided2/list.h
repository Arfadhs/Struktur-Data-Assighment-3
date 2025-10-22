#ifndef lish_H
#define lish_H
#define NILL null

#include <iostream>
using namespace std;

//deklarasi isi data struct mahasiswa
struct mahasiswa {
    string nama;
    int nim;
    float umur;
};

typedef mahasiswa datamahasiswa; //memberikan nama alias datamahasiswa untuk struct mahasiswa
typedef struct node *address; //memberikan nama alias address untuk pointer struct node
struct node {
    datamahasiswa isidata; //info bertipe data struct mahasiswa
    address next; //pointer next bertipe data struct node
};

struct linkedlist { // ini link listnya
    address first; //pointer first bertipe data struct node
};

//semua function & prosedur yang akan digunakan
bool isEmpty(linkedlist L);
void createList(linkedlist &List);
address alokasi(string nama, string nim, int umur);
void dealokasi(address &node);
void printList(linkedlist list);
void insertFirst(linkedlist &list, address nodebaru);
void insertAfter(linkedlist &list, address nodebaru, address prev);
void insertLast(linkedlist &list, address nodebaru);

void delFirst(linkdelist &List);
void delLast(linkdelist &List);
void delAfter(linkdelist &List, address nodeHapus, address prev);
int nbList(linkedlist List);
void deletList(linkedlist &List);

#endif