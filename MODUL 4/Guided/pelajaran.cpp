#include <iostream>
#include "pelajaran.h"
using namespace std;

Pelajaran create_pelajaran(const string &namapel, const string &kodepel) {
    Pelajaran p;
    p.namaMapel = namapel;
    p.kodeMapel = kodepel;
    return p;
}

void tampil_pelajaran(const Pelajaran &pel) {
    cout << "------ Data Pelajaran ------\n";
    cout << "Nama  : " << pel.namaMapel << '\n';
    cout << "Kode  : " << pel.kodeMapel << '\n';
}
