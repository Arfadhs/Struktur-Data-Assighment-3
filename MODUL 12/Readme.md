# <h1 align="center">Laporan Praktikum Modul 12: Multi Linked List </h1>
<p align="center"><b>Nama:</b> Arif Fadlil Hasibuan</p>

---

# 1. Unguided

## 2.1 Soal
![Modul 12_multilinkedlist_page-0001](https://github.com/user-attachments/assets/b66b090c-b63a-47f8-8d4d-c7c1d68af9a4)



---

# 2.2 Screenshot Coding dan Deskripsi

# Nomor 1
## circularlist.h
<img width="1464" height="1698" alt="hcode" src="https://github.com/user-attachments/assets/50736ec8-6f2c-4c73-80d4-7d190c81480e" />

**Deskripsi:**  
Bagian ini cuma berisi definisi "bentuk" datanya (struct) dan daftar nama fungsi yang bakal dipakai (prototipe).

---

## circularlist.cpp
<img width="2602" height="4890" alt="code" src="https://github.com/user-attachments/assets/cb737cb2-b48c-44c5-bb1f-8128f566c5dd" />


**Deskripsi:**  
File ini berisi aturan main lengkapnya, kayak gimana caranya nambah data di awal/akhir, menghapus data, dan memastikan list-nya "muter" (circular) kembali ke awal.

---

## main.cpp
<img width="1140" height="1736" alt="maincode" src="https://github.com/user-attachments/assets/144f96f3-3fac-424a-a008-7a7a22106ca3" />

**Deskripsi:**  
Ini tempat eksekusinya, di mana program membuat list baru, lalu memasukkan data mahasiswa (seperti Danu, Fahmi, Bobi, dll.) dengan berbagai posisi urutan, dan terakhir menampilkannya ke layar.

---


# 2. Output (Nomor 1)
<img width="240" height="650" alt="image" src="https://github.com/user-attachments/assets/038424aa-0a66-4a5a-a55b-17735fe23cf6" />

---


# 3. Kesimpulan
Program ini mendemonstrasikan penerapan struktur data Circular Single Linked List C++ untuk mengelola data mahasiswa, di mana data baru dimasukkan secara bertahap ke posisi awal, akhir, dan disisipkan di tengah setelah data "patokan"-nya ditemukan.

---

## Poin-Poin Penting
- truktur Melingkar: Program menggunakan konsep Circular, artinya elemen terakhir (ekor) menunjuk kembali ke elemen pertama (kepala), jadi tidak ada ujung yang putus (NULL).

- Demonstrasi Lengkap: Kode ini menguji semua fungsi dasar input sekaligus: insertFirst (depan), insertLast (belakang), dan insertAfter (tengah/nyelip).

- Pencarian Valid: Fitur insertAfter bekerja dengan sempurna karena program terlebih dahulu mencari NIM yang sudah ada (menggunakan findElm) sebagai patokan sebelum menyisipkan data baru.

- Data Mahasiswa: Setiap elemen menyimpan informasi lengkap berupa Nama, NIM, Jenis Kelamin, dan IPK
---

# 5. Referensi

- Modul Praktikum 12: Multi Linked List  
- W3Schools C++ Tutorial  
