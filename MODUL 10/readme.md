# <h1 align="center">Laporan Praktikum Modul 10: tree</h1>
<p align="center"><b>Nama:</b> Arif Fadlil Hasibuan</p>

---

# 1. Unguided

## 2.1 Soal
<img width="409" height="560" alt="Screenshot 2025-12-16 134332" src="https://github.com/user-attachments/assets/faed2db2-f498-4536-a261-00944a6cef4f" />
<img width="434" height="488" alt="Screenshot 2025-12-16 134343" src="https://github.com/user-attachments/assets/1f7c1b70-f059-44c5-947a-ab95f171f3e6" />


---

# 2.2 Screenshot Coding dan Deskripsi

# Nomor 1
## bstree.h
<img width="972" height="1128" alt="bstree h Foto" src="https://github.com/user-attachments/assets/e265740e-a2de-461c-b2d6-67f4380e5cc8" />

**Deskripsi:**  
menyiapkan struktur data buat Binary Search Tree (BST). Isinya ada definisi struct Node buat nyimpen data integer lengkap sama pointer ke anak kiri dan kanan, terus ada juga deklarasi fungsi-fungsi utamanya kayak buat alokasi memori, nambah data baru (insertNode), nyari angka (findNode), dan nampilin datanya pake metode inorder.
---

## bstree.cpp
<img width="986" height="2002" alt="bstree cpp foto" src="https://github.com/user-attachments/assets/2c3c77e5-9f41-4228-aac6-1fd6337911f6" />


**Deskripsi:**  
kodingan lengkap membuat fungsi-fungsinya, kayak alokasi buat bikin node baru, terus logika insertNode dan findNode yang pake cara rekursif buat nyusun atau nyari angka sesuai aturan pohon biner, sama fungsi printInorder buat nyetak hasilnya secara urut.
---

## main.cpp
<img width="848" height="1166" alt="main cpp Foto" src="https://github.com/user-attachments/assets/05e98216-8562-44e8-9727-ddd9fdc0b49e" />

**Deskripsi:**  
bstree.cpp ini berisi seluruh implementasi logika fungsi BST, sedangkan main.cpp berfungsi sebagai program utama (driver) untuk menguji proses input data dan menampilkan hasilnya ke layar."
---


# Nomor 2

## bstree.h
<img width="1034" height="1318" alt="bstree h Foto" src="https://github.com/user-attachments/assets/8d290017-8a17-4b99-acad-29f3743c88eb" />

**Deskripsi:**  
Program ini berfungsi sebagai alat pengelola data berbasis Binary Search Tree (BST) yang mampu menyimpan dan mengurutkan angka secara otomatis, sekaligus menyediakan fitur pencarian data dan perhitungan statistik pohon (seperti total node dan kedalaman).
---

## bstree.cpp
<img width="1048" height="2648" alt="queue2" src="https://github.com/user-attachments/assets/331a2785-e297-4582-8cf5-59b97d500770" />

**Deskripsi:**  
Program ini berfungsi sebagai implementasi struktur data Binary Search Tree (BST) yang bertugas menyusun dan mengurutkan angka secara otomatis, sekaligus menyediakan fitur analisis untuk menghitung jumlah node, menjumlahkan total nilai data, dan mengukur kedalaman pohon secara rekursif.
---

## main.cpp
<img width="1310" height="1432" alt="main cpp Foto" src="https://github.com/user-attachments/assets/614d3e8d-d397-4c9a-b9b4-d76f4edd00cb" />

**Deskripsi:**  
Program ini berfungsi sebagai implementasi lengkap Binary Search Tree (BST) yang tidak hanya menyimpan dan mengurutkan data angka, tetapi juga melakukan operasi perhitungan statistik pohon secara rekursif, seperti menghitung total node, menjumlahkan seluruh nilai data, dan mengukur kedalaman maksimum pohon.
---

# Nomor 3

## bstree.h
<img width="972" height="1166" alt="bstree h Foto " src="https://github.com/user-attachments/assets/a50d5d66-91c0-4d49-ae9e-f3142fd35b55" />

**Deskripsi:**  
bstree.h File ini bertugas sebagai "daftar isi" yang mendefinisikan struktur node dan mengenalkan dua fungsi penelusuran baru (Pre-Order dan Post-Order) agar bisa dikenali oleh program utama.---

## bstree.cpp
<img width="1234" height="1546" alt="bstree cpp Foto" src="https://github.com/user-attachments/assets/35b5b1b1-270e-48a9-9cbc-a852833bad2c" />

**Deskripsi:**  
bstree.cpp File ini berisi "otak" program yang mengatur logika penyisipan angka, sekaligus menjalankan dua metode cetak berbeda: satu mencetak induk duluan (Pre-Order), dan satunya lagi mencetak induk belakangan (Post-Order).
---

## main.cpp
<img width="1326" height="1356" alt="main cpp Foto" src="https://github.com/user-attachments/assets/78e803cc-18d3-4f46-aeb8-99c29a89020e" />

**Deskripsi:**  
main.cpp File ini berfungsi sebagai tempat pengujian, di mana angka-angka (6, 4, 7, 2, 5, 1, 3) dimasukkan ke dalam pohon, lalu ditampilkan hasilnya menggunakan kedua metode tadi untuk membandingkan urutannya.
---


# 2. Output (Nomor 1)
<img width="280" height="54" alt="OUTPUT" src="https://github.com/user-attachments/assets/e3d31ad8-2429-415e-9452-10ad97bff852" />

---

# 2. Output (Nomor 2)
<img width="271" height="113" alt="outputlatihan2" src="https://github.com/user-attachments/assets/ade6e6e5-79d9-4afa-921c-f2c2572ecf49" />

---

# 2. Output (Nomor 3)
<img width="317" height="112" alt="latihan3" src="https://github.com/user-attachments/assets/406fec41-c55d-410e-81a5-81c3ec02a24d" />

---

# 3. Kesimpulan

# Kesimpulan Program Queue

## Paragraf
Secara keseluruhan, program ini berhasil mengimplementasikan struktur data Binary Search Tree (BST) secara modular dan rekursif, yang tidak hanya mampu menyusun data secara otomatis tetapi juga menampilkan fleksibilitas penelusuran struktur melalui metode Pre-Order dan Post-Order untuk berbagai kebutuhan analisis data.

---

## Poin-Poin Penting
- **Soal 1:** Implementasi dasar BST (Insert & Search) → Menyusun angka dan mencetaknya secara urut pakai In-Order.
- **Soal 2:** Perhitungan Statistik Tree → Menambahkan fungsi rekursif untuk menghitung jumlah node, total nilai angka, dan kedalaman pohon.
- **Soal 3:** Variasi Penelusuran (Traversal) → Mengganti metode cetak menjadi Pre-Order (cetak akar di awal) dan Post-Order (cetak akar di akhir).

---

# 5. Referensi

- Modul Praktikum 10: stree  
- W3Schools C++ Tutorial  
