# <h1 align="center">Laporan Praktikum Modul 8: queue</h1>
<p align="center"><b>Nama:</b> Arif Fadlil Hasibuan</p>

---

# 1. Guided

## Screenshot main.cpp
<img width="1172" height="1508" alt="Guided_maincpp" src="https://github.com/user-attachments/assets/945df7c8-cd8f-4ed6-8743-9223bf7ef0ba" />

## Screenshot stack.cpp
<img width="1510" height="2534" alt="Guided_queuecpp" src="https://github.com/user-attachments/assets/cb99a480-bfdb-4eda-a1ce-06f6e46d3f7c" />

## Screenshot stack.h
<img width="972" height="1318" alt="Guided_queueh" src="https://github.com/user-attachments/assets/71cd1ea6-1302-4fe7-b080-7491b0875cf3" />

---

# 2. Unguided

## 2.1 Soal
<img width="453" height="470" alt="Screenshot 2025-11-28 130706" src="https://github.com/user-attachments/assets/2ea8af53-7d16-490c-832c-75732e626839" />

---

# 2.2 Screenshot Coding dan Deskripsi

# Alternatif 1

## queue.h
<img width="772" height="1090" alt="queue1" src="https://github.com/user-attachments/assets/97ae5b35-0252-4b65-a51f-95510233d5eb" />

**Deskripsi:**  
ini berfungsi sebagai "denah" atau kerangka dasar programnya. Di sini didefinisikan struktur Queue yang punya kapasitas maksimal 5 data (MAX = 5), variabel penanda posisi depan (head) dan belakang (tail), serta daftar judul fungsi (prototipe) seperti enqueue dan dequeue supaya program utamanya nanti mengenali perintah-perintah tersebut sebelum dijalankan.

---

## queue.cpp
<img width="988" height="2686" alt="queue1" src="https://github.com/user-attachments/assets/7d9d8a32-ec15-409b-8f05-ba747a8a2f0c" />

**Deskripsi:**  
ini adalah "mesin" atau logika utama yang menggerakkan antreannya. Isinya adalah kodingan detail cara kerja setiap fungsi, mulai dari inisialisasi awal, cara memasukkan data ke posisi belakang, hingga logika dequeue yang di sini menggunakan sistem geser (shifting), jadi kalau orang paling depan keluar, orang-orang di belakangnya otomatis maju satu langkah ke depan.

---

## main.cpp
<img width="818" height="1850" alt="main1" src="https://github.com/user-attachments/assets/941af163-c3d1-4ba9-a4f9-395efa4c353c" />

**Deskripsi:**  
ini adalah tempat "uji coba" untuk menjalankan simulasi antreannya secara nyata. Di dalam fungsi main ini, program memanggil fungsi-fungsi tadi untuk melakukan serangkaian aksi—seperti memasukkan angka 5, 2, 7, lalu mengeluarkannya satu per satu—sambil terus mencetak status antrean ke layar untuk memastikan semua logika berjalan mulus tanpa error

---

# Alternatif 2

## queue.h
<img width="772" height="1090" alt="h" src="https://github.com/user-attachments/assets/2fe09a57-b592-4f91-be54-701ded3a9c61" />

**Deskripsi:**  
ini berfungsi sebagai "denah" atau kerangka dasar programnya. Di sini didefinisikan struktur Queue yang punya kapasitas maksimal 5 data (MAX = 5), variabel penanda posisi depan (head) dan belakang (tail), serta daftar judul fungsi (prototipe) seperti enqueue dan dequeue supaya program utamanya nanti mengenali perintah-perintah tersebut sebelum dijalankan.

---

## queue.cpp
<img width="1048" height="2648" alt="queue2" src="https://github.com/user-attachments/assets/331a2785-e297-4582-8cf5-59b97d500770" />

**Deskripsi:**  
Isinya ini adalah kodingan detail cara kerja setiap fungsi, mulai dari inisialisasi awal, cara memasukkan data ke posisi belakang, hingga logika dequeue yang di sini menggunakan sistem geser (shifting), jadi kalau orang paling depan keluar, orang-orang di belakangnya otomatis maju satu langkah ke depan.

---

## main.cpp
<img width="818" height="1850" alt="main2png" src="https://github.com/user-attachments/assets/5b80b191-5b4d-4475-8779-4b57357bb59b" />

**Deskripsi:**  
ini adalah tempat "uji coba" untuk menjalankan simulasi antreannya secara nyata. Di dalam fungsi main ini, program memanggil fungsi-fungsi tadi untuk melakukan serangkaian aksi—seperti memasukkan angka 5, 2, 7, lalu mengeluarkannya satu per satu—sambil terus mencetak status antrean ke layar untuk memastikan semua logika berjalan mulus tanpa error.

---

# Alternatif 3

## queue.h
<img width="772" height="1090" alt="1h" src="https://github.com/user-attachments/assets/8c33bdc7-cafb-4feb-8040-69d73e28e40b" />

**Deskripsi:**  
ini berfungsi sebagai "denah" atau kerangka dasar programnya. Di sini didefinisikan struktur Queue yang punya kapasitas maksimal 5 data (MAX = 5), variabel penanda posisi depan (head) dan belakang (tail), serta daftar judul fungsi (prototipe) seperti enqueue dan dequeue supaya program utamanya nanti mengenali perintah-perintah tersebut sebelum dijalankan.

---

## queue.cpp
<img width="1048" height="2648" alt="queue3" src="https://github.com/user-attachments/assets/947a0283-e4b9-4189-ba8b-15e13512749b" />

**Deskripsi:**  
ini adalah implementasi Circular Queue (Antrean Melingkar). Bedanya sama yang tadi, di sini kita pakai rumus matematika sisa bagi atau modulo (% MAX) buat ngatur pergerakan head dan tail-nya, jadi antreannya seolah-olah nyambung terus dari ujung belakang balik ke depan (melingkar). Keunggulan utamanya ada di fungsi dequeue-nya; dia nggak perlu repot-repot menggeser (shifting) semua data kayak kode sebelumnya, cukup majuin penunjuk head-nya saja, jadi performanya jauh lebih cepat dan efisien.

---

## main.cpp
<img width="926" height="1812" alt="main3png" src="https://github.com/user-attachments/assets/ccb6057c-ffd6-4b50-a4d2-4f168679be4d" />

**Deskripsi:**  
ini adalah tempat "uji coba" untuk menjalankan simulasi antreannya secara nyata. Di dalam fungsi main ini, program memanggil fungsi-fungsi tadi untuk melakukan serangkaian aksi—seperti memasukkan angka 5, 2, 7, lalu mengeluarkannya satu per satu—sambil terus mencetak status antrean ke layar untuk memastikan semua logika berjalan mulus tanpa error.

---


# 3. Output (Alternatif 1)
<img width="552" height="291" alt="Screenshot 2025-11-28 162159" src="https://github.com/user-attachments/assets/257a99cb-953c-4972-9770-571bb53db52b" />

---

# 3. Output (Alternatif 2)
<img width="554" height="264" alt="Screenshot 2025-11-28 163131" src="https://github.com/user-attachments/assets/d95de22c-cbe7-45ae-922d-4f0650d14645" />

---

# 3. Output (Alternatif 3)
<img width="561" height="260" alt="image" src="https://github.com/user-attachments/assets/97d73820-a88c-48f2-9fd5-ce5405541eb2" />

---

# 4. Kesimpulan

# Kesimpulan Program Queue

## Paragraf
Ketiga program queue ini menggambarkan tiga pendekatan berbeda dalam mengelola antrian berbasis array: pendekatan shift yang menggeser elemen setiap kali dequeue, pendekatan linear yang hanya menggerakkan pointer head, dan pendekatan circular yang menggunakan indeks melingkar agar kapasitas array dapat dimanfaatkan sepenuhnya. Perbedaannya terlihat pada cara elemen dipindahkan, pergerakan head–tail, serta efisiensi pemakaian ruang.

## Poin-Poin Penting
- **Soal 1:** Dequeue menggeser seluruh elemen → `head` kembali ke 0.
- **Soal 2:** Dequeue hanya menaikkan `head` → `tail` bisa penuh meski ada slot kosong.
- **Soal 3:** Menggunakan metode circular → `head` dan `tail` berputar untuk memaksimalkan kapasitas array.

---

# 5. Referensi

- Modul Praktikum 8: queue  
- W3Schools C++ Tutorial  
