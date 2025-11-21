# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (6)</h1>
<p align="center">Arif Fadlil Hasibuan</p>

## Modul 6 DOUBLY LINKED LIST (BAGIAN KEDUA)

##  Unguided 

## [Soal]

<img width="549" height="393" alt="Screenshot 2025-11-21 200935" src="https://github.com/user-attachments/assets/bc617ddf-d7fd-4fa5-b286-16766ae2102b" />
<img width="476" height="667" alt="Screenshot 2025-11-21 200952" src="https://github.com/user-attachments/assets/f74b3ea3-998f-431a-81f4-99519b880688" />


### 1.DoublyList.h

```C++
#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H

#include <iostream>
#include <string>
using namespace std;

#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define nil NULL

struct kendaraan {
    string nopol;
    string warna;
    int thnBuat;
};

typedef kendaraan infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void createList(List &L);
address alokasi(infotype x);
void dealokasi(address P);
void printInfo(List L);
void insertLast(List &L, address P);

address findElm(List L, string nopol);
void deleteFirst(List &L, address &P);
void deleteLast(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteSpecific(List &L, string nopol); 

#endif
```
Gambar ini menunjukkan file header Doublylist.h yang mendefinisikan struktur data kendaraan (nopol, warna, tahun) serta deklarasi tipe data pointer address. File ini berfungsi sebagai "peta" atau referensi tipe data yang menghubungkan program utama dengan file implementasi .
## DoublyLins.cpp
```
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

```

Gambar ini menampilkan file implementasi Doublylist.cpp yang berisi logika utama fungsi-fungsi seperti createList, alokasi, dan insertLast. Bagian kode ini bertanggung jawab mengatur mekanisme pointer next dan prev agar data kendaraan dapat saling terhubung dalam list
## main.cpp
```
#include <iostream>
#include "Doublylist.h" 
using namespace std;

int main() {
    List L;
    createList(L);
    
    infotype data;
    address P;
    int n;
    
    cout << "Masukkan jumlah data kendaraan: ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "\nData ke-" << i+1 << endl;
        cout << "Masukkan nomor polisi : "; cin >> data.nopol;
        cout << "Masukkan warna kendaraan: "; cin >> data.warna;
        cout << "Masukkan tahun kendaraan: "; cin >> data.thnBuat;
        
        if (findElm(L, data.nopol) == nil) {
            P = alokasi(data);
            insertLast(L, P);
        } else {
            cout << "Nomor polisi sudah terdaftar!" << endl;
        }
    }

    cout << "\n=== DATA LIST 1 ===" << endl;
    printInfo(L);

    cout << "\n=== PENCARIAN DATA ===" << endl;
    string cariNopol;
    cout << "Masukkan Nomor Polisi yang dicari: "; cin >> cariNopol;
    address hasilCari = findElm(L, cariNopol);
    if (hasilCari != nil) {
        cout << "Nomor Polisi : " << info(hasilCari).nopol << endl;
        cout << "Warna        : " << info(hasilCari).warna << endl;
        cout << "Tahun        : " << info(hasilCari).thnBuat << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    cout << "\n=== PENGHAPUSAN DATA ===" << endl;
    string hapusNopol;
    cout << "Masukkan Nomor Polisi yang akan dihapus: "; cin >> hapusNopol;
    deleteSpecific(L, hapusNopol);

    cout << "\n=== DATA LIST SETELAH DIHAPUS ===" << endl;
    printInfo(L);

    return 0;
}
```
Gambar ini memperlihatkan kode sumber yang memuat implementasi lengkap operasi pencarian (findElm) dan berbagai jenis penghapusan data (deleteFirst, deleteLast, deleteSpecific). Meskipun nama filenya main_cpp, isi gambar ini sebenarnya identik dengan file Doublylist.cpp yang menangani dealokasi memori saat data dihapus .


#### Output:
<img width="485" height="665" alt="Screenshot 2025-11-21 233644" src="https://github.com/user-attachments/assets/5299b7c2-66ba-4a8c-8a23-9f3b3d45d1d2" />
<img width="352" height="642" alt="Screenshot 2025-11-21 233708" src="https://github.com/user-attachments/assets/a08b13dd-12b0-4bab-9d2f-4aca4b2ec48d" />

#### Full code Screenshot:
# DoublyList.h

<img width="1110" height="2078" alt="DoubluLite_h" src="https://github.com/user-attachments/assets/6f098d74-49d8-45c6-a3c5-faf7848c176c" />

# DoublyList.cpp

<img width="1632" height="4662" alt="DoubluLite_cpp" src="https://github.com/user-attachments/assets/d2de6490-70f4-4392-b961-e1b27479eda9" />

# main.cpp

<img width="1632" height="4662" alt="main_cpp" src="https://github.com/user-attachments/assets/42e14e94-b54e-4b70-a80f-19b059f17d87" />


## Kesimpulan
1. Struktur Data yang Tepat: Kamu berhasil menerapkan konsep Doubly Linked List di mana setiap elemen (elmList) memiliki dua pointer, yaitu next dan prev. Ini memungkinkan data kendaraan terhubung dua arah, sehingga memudahkan proses penyisipan dan penghapusan data di posisi mana pun (depan, belakang, atau tengah) .


2. Logika Validasi Terpenuhi: Program mampu menangani aturan bisnis yang diminta, yaitu mencegah input ganda. Saat D001 dimasukkan untuk kedua kalinya, sistem sukses menolaknya dengan pesan "nomor polisi sudah terdaftar", membuktikan logika pencarian (findElm) sebelum penyisipan (insertLast) berfungsi dengan baik.

3. Operasi CRUD Berjalan Mulus:

  * Create: Data berhasil ditambahkan ke dalam list.


  * Read/Search: Pencarian data spesifik (Nopol D001) berhasil menampilkan detail yang benar .


  * Delete: Penghapusan data di tengah list (Nopol D003) berjalan sukses tanpa memutus rantai list, menyisakan data D001 dan D004 yang tetap terhubung .
## Referensi
Modul 6 Doubly  Linked LIST (BAGIAN PERTAMA)

w3schools https://www.w3schools.com/cpp/default.asp
