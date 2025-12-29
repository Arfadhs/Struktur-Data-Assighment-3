
# <h1 align="center">Laporan Praktikum Modul 14: Graph </h1>
<p align="center"><b>Nama:</b> Arif Fadlil Hasibuan</p>

---

# 1. Unguided

## 2.1 Soal
<img width="547" height="559" alt="image" src="https://github.com/user-attachments/assets/4d949160-dc44-4b5e-9fc9-a198f09eaeff" />

---

# 2.2 Screenshot Coding dan Deskripsi

# Nomor 1
## Graph.h
<img width="940" height="1736" alt="hcode" src="https://github.com/user-attachments/assets/018f3381-160c-4672-864f-24a3e6f63dcc" />

**Deskripsi:**  
File ini berfungsi sebagai kerangka dasar yang mendefinisikan struktur data Graph (menggunakan struct ElmNode dan ElmEdge) serta mendeklarasikan daftar fungsi yang akan digunakan.

---

## Graph.cpp
<img width="1016" height="4776" alt="code" src="https://github.com/user-attachments/assets/ff0b4efe-5372-44a7-aa14-0de553c5ff75" />


**Deskripsi:**  
File ini berisi "otak" program yang memuat logika detail untuk menambahkan node, menyambungkan garis (edge), serta melakukan penelusuran graph menggunakan algoritma DFS (Stack) dan BFS (Queue).

---

## main.cpp
<img width="1202" height="2344" alt="maincode" src="https://github.com/user-attachments/assets/60cb5e90-87ab-46e2-927b-3dd4a92b3b6f" />

**Deskripsi:**  
Ini adalah tempat eksekusi program di mana Graph "Z" dibuat dengan node A sampai H, dihubungkan satu sama lain, lalu hasilnya ditampilkan dalam bentuk Adjacency List serta urutan traversal DFS dan BFS.

---


# 2. Output (Nomor 1)
<img width="354" height="229" alt="image" src="https://github.com/user-attachments/assets/2e104ba6-5ef1-4fe1-9496-efd9c3ef6832" />

---


# 3. Kesimpulan
Secara keseluruhan, program ini adalah implementasi lengkap struktur data Graph menggunakan representasi Adjacency List yang mampu membangun koneksi antar data dan mendemonstrasikan dua metode penelusuran data yang berbeda (DFS dan BFS).

---

## Poin-Poin Penting
- Representasi Data: Graph dibangun menggunakan konsep Adjacency List, di mana setiap Node (titik) memiliki pointer firstEdge yang menunjuk ke daftar tetangganya.

- Dua Metode Traversal: Program ini menerapkan DFS (Depth First Search) yang menggunakan bantuan Stack untuk menelusuri kedalaman, dan BFS (Breadth First Search) yang menggunakan Queue untuk menelusuri secara melebar.

- Status Visited: Terdapat variabel visited di dalam node untuk menandai apakah node tersebut sudah dikunjungi atau belum, guna mencegah looping abadi saat penelusuran.

- Reset Data: Di program utama (main), status visited di-reset kembali menjadi 0 setelah DFS selesai agar algoritma BFS berikutnya bisa berjalan dengan benar dari awal.
---

# 5. Referensi

- Modul Praktikum 14: Graph  
- W3Schools C++ Tutorial  
