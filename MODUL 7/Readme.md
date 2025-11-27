# <h1 align="center">Laporan Praktikum Modul Pengenalan Bahasa C++ (6)</h1>
<p align="center">Arif Fadlil Hasibuan</p>

## Modul 7 Stack 

##  | guided 

  ## 1. main.cpp
  <img width="1156" height="2154" alt="Guided 1 png" src="https://github.com/user-attachments/assets/6b1b33fa-7e3b-49b1-bcd5-b75057c238f5" />
  
  ## 2. stack.cpp
  <img width="1756" height="4738" alt="Guided 2 png" src="https://github.com/user-attachments/assets/9bf897f7-8fdd-4f50-80c5-e1817a0d7d57" />
  
  ## 3. stack.h
  <img width="1034" height="1432" alt="Guided 3 png" src="https://github.com/user-attachments/assets/27797e82-b562-4682-8276-25f22b5d8d0a" />



##  | Unguided 

  ## [Soal]
  
  <img width="539" height="577" alt="Screenshot 2025-11-27 072243" src="https://github.com/user-attachments/assets/67afb9ee-b974-4cd1-b5fb-ae110ef544e5" />
  <img width="521" height="486" alt="Screenshot 2025-11-27 072312" src="https://github.com/user-attachments/assets/6faa833b-bddc-4ac7-bc2d-2d573f484046" />


### 1.stack.h

```C++
#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

#define nMax 20 

typedef int infotype;

struct Stack {
    infotype info[nMax + 1]; 
    int top;
};

void createStack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, infotype x);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S); 
void pushAscending(Stack &S, infotype x); 
void getInputStream(Stack &S); 

#endif
```
Kode di atas adalah file header yang mendefinisikan kerangka struktur data Stack berbasis array lengkap dengan operasi dasar seperti push dan pop. Selain fungsi standar, di situ juga ada fitur tambahan khusus buat membalik tumpukan (balikStack), mengurutkan data otomatis (pushAscending), dan membaca input terus-menerus (getInputStream).
## stack.cpp
```
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

```

Program ini bertujuan mengimplementasikan struktur data Stack berbasis array dengan prinsip LIFO (Last In First Out) untuk melakukan operasi dasar seperti penambahan (push) dan pengambilan (pop) data. Selain itu, program ini dirancang untuk melatih logika manipulasi data melalui fitur khusus seperti membalik urutan tumpukan, mengurutkan data secara otomatis (ascending), dan membaca input angka secara beruntun dari pengguna.
## main.cpp
```
#include "stack.h"

int main() {
    Stack S;
    createStack(S);

    cout << "Hello World" << endl;
    pushAscending(S, 3);
    pushAscending(S, 4);
    pushAscending(S, 8);
    pushAscending(S, 2);
    pushAscending(S, 3);
    pushAscending(S, 9);
    
    printInfo(S); 

    cout << "balik stack" << endl;
    balikStack(S); 
    printInfo(S);  
    
    createStack(S); 
    
    cout << "\nHello World" << endl;
    getInputStream(S); 
    
    printInfo(S); 
    
    cout << "balik stack" << endl;
    balikStack(S);
    printInfo(S);

    return 0;
}
```
Berikut adalah deskripsi tujuan program tersebut dalam 1 kalimat:

Program utama ini bertujuan untuk mendemonstrasikan dan menguji operasi manipulasi Stack lanjutan, yaitu penyisipan data terurut (push ascending) dan pembacaan input stream , sekaligus memvalidasi hasilnya melalui fungsi pembalik tumpukan (reverse).

#### Output:
<img width="534" height="291" alt="Screenshot 2025-11-27 073646" src="https://github.com/user-attachments/assets/6c4ab46a-d7db-408d-88f9-fba365f74301" />


#### Full code Screenshot:
# stack.h

<img width="956" height="1280" alt="code" src="https://github.com/user-attachments/assets/2e76df24-f175-4a08-826c-81aa75107315" />

# stack.cpp

<img width="1218" height="3446" alt="code 2 png" src="https://github.com/user-attachments/assets/187b6550-f1f4-48ab-9fff-3449374d6c8f" />

# main.cpp

<img width="864" height="1546" alt="code 3 png" src="https://github.com/user-attachments/assets/a5918669-e54d-466e-a4a5-b7ae4d1df777" />


## Kesimpulan
program ini adalah implementasi praktis struktur data Stack (tumpukan) berbasis array yang bekerja dengan prinsip LIFO (Last In First Out). Melalui kode ini, kamu tidak hanya menjalankan operasi dasar seperti menambah (push) dan mengambil (pop) data, tetapi juga menerapkan logika algoritma yang lebih kompleks untuk memanipulasi isi tumpukan, seperti membalik urutan data, mengurutkan angka secara otomatis (ascending), dan membaca input langsung dari pengguna.

> Implementasi: Membuat struktur data Stack menggunakan Array dengan prinsip LIFO (Last In First Out).



> Operasi Dasar: Menangani penambahan (push) dan pengambilan (pop) data yang hanya dilakukan melalui bagian paling atas (Top).



> Fitur Lanjutan: Mampu memanipulasi data untuk membalik urutan tumpukan (reverse), mengurutkan angka secara otomatis (ascending), dan membaca input beruntun dari pengguna.


## Referensi
Modul 7 Stack

w3schools https://www.w3schools.com/cpp/default.asp
