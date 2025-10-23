# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (4)</h1>
<p align="center">Arif Fadlil Hasibuan</p>

## Dasar Teori

## Guided 

### 1.linked list
<h2> list.cpp </h2>

```C++
#include "list.h"
#include <iostream>
using namespace std;

//I.S = Initial State / kondisi awal
//F.S = Final State / kondisi akhir

//fungsi untuk cek apakah list kosong atau tidak
bool isEmpty(linkedlist List) {
    if(List.first == Nil){
        return true; 
    } else {
        return false;
    }
}

//pembuatan linked list kosong
void createList(linkedlist &List) {
    /* I.S. sembarang
       F.S. terbentuk list kosong */
    List.first = Nil;
}

//pembuatan node baru dengan menerapkan manajemen memori
address alokasi(string nama, string nim, int umur) { 
    /* I.S. sembarang
       F.S. mengembalikan alamat node baru dengan isidata = sesuai parameter dan next = Nil */
    address nodeBaru = new node; 
    nodeBaru->isidata.nama = nama;
    nodeBaru->isidata.nim = nim; 
    nodeBaru->isidata.umur = umur;
    nodeBaru->next = Nil;
    return nodeBaru;
}

//penghapusan node dengan menerapkan manajemen memori
void dealokasi(address &node) {
    /* I.S. P terdefinisi
       F.S. memori yang digunakan node dikembalikan ke sistem */
    node->next = Nil;
    delete node;
}

//prosedur-prosedur untuk insert / menambahkan node baru kedalam list
void insertFirst(linkedlist &List, address nodeBaru) {
    /* I.S. sembarang, P sudah dialokasikan
       F.S. menempatkan elemen list (node) pada awal list */
    nodeBaru->next = List.first; 
    List.first = nodeBaru;
}

void insertAfter(linkedlist &List, address nodeBaru, address Prev) {
    /* I.S. sembarang, nodeBaru dan Prev alamat salah satu elemen list (node)
       F.S. menempatkan elemen (node) sesudah elemen node Prev */
    if (Prev != Nil) {
        nodeBaru->next = Prev->next;
        Prev->next = nodeBaru;
    } else {
        cout << "Node sebelumnya tidak valid!" << endl;
    }
}

void insertLast(linkedlist &List, address nodeBaru) {
    /* I.S. sembarang, nodeBaru sudah dialokasikan
       F.S. menempatkan elemen nodeBaru pada akhir list */
    if (isEmpty(List)) {
        List.first = nodeBaru;
    } else {
        address nodeBantu = List.first;
        while (nodeBantu->next != Nil) {
            nodeBantu = nodeBantu->next;
        }
        nodeBantu->next = nodeBaru;
    }
}

//prosedur untuk menampilkan isi list
void printList(linkedlist List) {
    /* I.S. list mungkin kosong
       F.S. jika list tidak kosong menampilkan semua info yang ada pada list */
    if (isEmpty(List)) {
        cout << "List kosong." << endl;
    } else {
        address nodeBantu = List.first;
        while (nodeBantu != Nil) { 
            cout << "Nama : " << nodeBantu->isidata.nama << ", NIM : " << nodeBantu->isidata.nim 
            << ", Usia : " << nodeBantu->isidata.umur << endl;
            nodeBantu = nodeBantu->next;
        }
    }
}

```
Kode itu dipakai buat untuk mengatur data pakai linked list, seperti menambahkan, menghapus, dan menunjukkan data mahasiswa secara dinamis.

## main.cpp
```
#include "list.h"

#include<iostream>
using namespace std;

int main(){
    linkedlist List;
    address nodeA, nodeB, nodeC, nodeD, nodeE = Nil;
    createList(List);

    dataMahasiswa mhs;

    nodeA = alokasi("Dhimas", "2311102151", 20);
    nodeB = alokasi("Arvin", "2211110014", 21);
    nodeC = alokasi("Rizal", "2311110029", 20);
    nodeD = alokasi("Satrio", "2211102173", 21);
    nodeE = alokasi("Joshua", "2311102133", 21);

    insertFirst(List, nodeA);
    insertLast(List, nodeB);
    insertAfter(List, nodeC, nodeA);
    insertAfter(List, nodeD, nodeC);
    insertLast(List, nodeE);

    cout << "--- ISI LIST SETELAH DILAKUKAN INSERT ---" << endl;
    printList(List);

    return 0;
}

```

Kode ini digunakan untuk mendemonstrasikan pembuatan linked list, penyisipan data mahasiswa ke dalamnya dengan berbagai metode, dan pencetakan isi list.

## list.h
```
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
void deleteFirst(linkedlist &list, address &nodehapus);

#endif
```
Kode ini digunakan untuk mendemonstrasikan pembuatan linked list, penyisipan data mahasiswa ke dalamnya dengan berbagai metode, dan pencetakan isi list.

## Soal 1 & 2
<img width="324" height="394" alt="image" src="https://github.com/user-attachments/assets/cb95a550-6aca-4b49-a96a-f05b842ec76d" />
<img width="509" height="412" alt="image" src="https://github.com/user-attachments/assets/46f5bf2b-3eba-45c5-89ab-ee08234fdb0b" />



## Unguided 

### 1. [Soal]
<h2>Singlylist.h</h2>
    
```C++
#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L);

    P1 = alokasi(2);   insertFirst(L, P1);
    P2 = alokasi(0);   insertFirst(L, P2);
    P3 = alokasi(8);   insertFirst(L, P3);
    P4 = alokasi(12);  insertFirst(L, P4);
    P5 = alokasi(9);   insertFirst(L, P5);

    printInfo(L); 

    address del;

    deleteFirst(L, del);
    dealokasi(del);

    deleteLast(L, del);
    dealokasi(del);

    address Prec = L.first;
    while (Prec != Nil && Prec->info != 12) {
        Prec = Prec->next;
    }
    if (Prec != Nil) {
        deleteAfter(L, Prec, del);
        dealokasi(del);
    }

    printInfo(L);

    cout << "Jumlah node : " << nbList(L) << endl;

    deleteList(L);
    cout << "- List Berhasil Terhapus -" << endl;

    cout << "Jumlah node : " << nbList(L) << endl;

    return 0;
}
```
<h2>Singlylist.cpp</h2>

```
#include "Singlylist.h"

void createList(List& L) {
    L.first = Nil;
}

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

void insertFirst(List& L, address P) {
    if (P != Nil) {
        P->next = L.first;
        L.first = P;
    }
}

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

void deleteList(List& L) {
    address P;
    while (L.first != Nil) {
        deleteFirst(L, P);
        dealokasi(P);
    }
}
```
<h2>Main.cpp</h2>

```
#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L);

    P1 = alokasi(2);   insertFirst(L, P1);
    P2 = alokasi(0);   insertFirst(L, P2);
    P3 = alokasi(8);   insertFirst(L, P3);
    P4 = alokasi(12);  insertFirst(L, P4);
    P5 = alokasi(9);   insertFirst(L, P5);

    printInfo(L); 

    address del;

    deleteFirst(L, del);
    dealokasi(del);

    deleteLast(L, del);
    dealokasi(del);

    address Prec = L.first;
    while (Prec != Nil && Prec->info != 12) {
        Prec = Prec->next;
    }
    if (Prec != Nil) {
        deleteAfter(L, Prec, del);
        dealokasi(del);
    }

    printInfo(L);

    cout << "Jumlah node : " << nbList(L) << endl;

    deleteList(L);
    cout << "- List Berhasil Terhapus -" << endl;

    cout << "Jumlah node : " << nbList(L) << endl;

    return 0;
}

```

#### Output:
<img width="315" height="153" alt="Screenshot 2025-10-23 064103" src="https://github.com/user-attachments/assets/c0f56d04-2803-4782-874d-f68f04772700" />

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
# Main.cpp
<img width="1080" height="1926" alt="image" src="https://github.com/user-attachments/assets/7ea5d9b4-7171-4a04-b254-6d72ae0459fe" />
# Singlylist.cpp
<img width="1126" height="3864" alt="image" src="https://github.com/user-attachments/assets/76067221-40bf-4ad1-b939-6aca17d453cc" />
# Singlylist.h
<img width="1080" height="1926" alt="image" src="https://github.com/user-attachments/assets/f7e7fa33-c868-45fb-b844-844768e76e76" />


## Kesimpulan
Program ini menunjukkan bagaimana ADT Singly Linked List dapat digunakan untuk menambah, menampilkan, menghitung, dan menghapus node secara dinamis hingga list benar‑benar kosong.

## Referensi
Modul 4_Singly Linked List (Bagian Pertama)

w3schools https://www.w3schools.com/cpp/default.asp
