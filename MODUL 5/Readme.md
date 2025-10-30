# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (5)</h1>
<p align="center">Arif Fadlil Hasibuan</p>

## Modul 5 SINGLY LINKED LIST (BAGIAN KEDUA)

##  Unguided 

## [Soal]

<img width="519" height="620" alt="image" src="https://github.com/user-attachments/assets/b7427119-b4c0-4c40-afcb-acac0f714474" />
<img width="442" height="349" alt="image" src="https://github.com/user-attachments/assets/6b0f0d14-02c8-4d72-a004-9730d88acd3f" />

### 1.main.cpp
<h2> list.cpp </h2>

```C++
#include "Singlylist.h"

int main() {
    List L;
    address P1, P2, P3, P4, P5;

    createList(L);

    P1 = alokasi(2); insertFirst(L, P1);
    P2 = alokasi(0); insertFirst(L, P2);
    P3 = alokasi(8); insertFirst(L, P3);
    P4 = alokasi(12); insertFirst(L, P4);
    P5 = alokasi(9); insertFirst(L, P5);

    cout << "Isi List: ";
    printInfo(L);

    address found = findElm(L, 8);
    if (found != Nil) {
        cout << found->info << " ditemukan dalam list" << endl;
    }
    else {
        cout << "Elemen tidak ditemukan" << endl;
    }

    cout << "Total info elemen = " << sumInfo(L) << endl;

    return 0;
}
```
File header untuk linked list tunggal yang menggambarkan tipe data (infotype), struktur node (ElmList) dan struktur List. Memuat deklarasi fungsi untuk membuat list, mengalokasikan/dealokasikan node, menampilkan isi, menambahkan node di depan, mencari elemen, dan menghitung total nilai pada list.

## Singlylist.cpp
```
#include "Singlylist.h"

void createList(List& L) {
    L.first = Nil;
}

address alokasi(infotype x) {
    address P = new ElmList;
    if (P != Nil) {
        P->info = x;
        P->next = Nil;
    }
    return P;
}

void dealokasi(address P) {
    delete P;
}

void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

void insertFirst(List& L, address P) {
    if (P != Nil) {
        P->next = L.first;
        L.first = P;
    }
}

address findElm(List L, infotype x) {
    address P = L.first;
    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

int sumInfo(List L) {
    int total = 0;
    address P = L.first;
    while (P != Nil) {
        total += P->info;
        P = P->next;
    }
    return total;
}

```

Program ini menerapkan fungsi-fungsi dasar dari linked list yang sederhana: membuat sebuah list yang kosong, mengalokasikan atau menghapus node, mencetak konten list, menambahkan node di bagian depan, mencari elemen sesuai dengan nilainya, serta menghitung total dari seluruh nilai dalam list. Semua fungsi memanfaatkan Nil (NULL) untuk menunjukkan akhir dari list, dan tipe data untuk elemen tersebut adalah infotype (int).

## linglylist.h
```
#ifndef SINGLYLIST_H
#define SINGLYLIST_H

#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;
typedef struct ElmList* address;

struct ElmList {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List& L);
address alokasi(infotype x);
void dealokasi(address P);
void printInfo(List L);
void insertFirst(List& L, address P);
address findElm(List L, infotype x);
int sumInfo(List L);

#endif
```
Mendefinisikan tipe dan struktur untuk daftar terhubung tunggal (ElmList, List, infotype) serta mendeklarasikan fungsi-fungsi dasar untuk membangun daftar, mengalokasikan atau menghapus node, menampilkan isi, menambahkan node di depan, mencari elemen tertentu, dan menjumlahkan semua nilai yang ada.



#### Output:
<img width="248" height="107" alt="Screenshot 2025-10-30 165803" src="https://github.com/user-attachments/assets/b52b3d7b-f6ec-4f65-a930-3258033e165d" />

#### Full code Screenshot:
# Main.cpp

<img width="1280" height="1394" alt="main" src="https://github.com/user-attachments/assets/46d33264-c3ed-407c-9c28-44cb228b5f55" />

# Singlylist.cpp

<img width="894" height="2382" alt="Singlylist" src="https://github.com/user-attachments/assets/e1f162de-702e-46f2-9eaf-be21c2479d96" />

# Singlylist.h

<img width="880" height="1394" alt="Singlylist-h" src="https://github.com/user-attachments/assets/50993443-3ea9-4675-83de-d726d0ffbe0f" />


## Kesimpulan
Semua kode yang ada mengimplementasikan daftar terhubung sederhana pada C++ (tipe informasi = int) dengan fungsi-fungsi dasar: membuat daftar kosong, mengalokasikan/dealokasikan node, menambahkan node di awal, menampilkan isi, mencari elemen, dan menghitung total semua nilai. Catatan singkat: kode ini menggunakan Nil/NULL dan new/delete, sehingga perlu dipastikan bahwa semua node didealokasi saat selesai; kode ini juga dapat disederhanakan dengan penggunaan nullptr, dipisahkan menjadi. h/. cpp, atau dijadikan template untuk memberikan fleksibilitas.

## Referensi
Modul 5 SINGLY LINKED LIST (BAGIAN KEDUA)

w3schools https://www.w3schools.com/cpp/default.asp
