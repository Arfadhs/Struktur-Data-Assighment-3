#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string nama, kode;

    cout << "Masukkan nama pelajaran : ";
    getline(cin, nama);
    cout << "Masukkan kode pelajaran : ";
    getline(cin, kode);

    Pelajaran pel = create_pelajaran(nama, kode);
    tampil_pelajaran(pel);

    return 0;
}
