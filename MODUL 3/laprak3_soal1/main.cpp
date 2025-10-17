#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int n;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i+1 << endl;
        cout << "Nama   : "; cin >> mhs[i].nama;
        cout << "NIM    : "; cin >> mhs[i].nim;
        cout << "UTS    : "; cin >> mhs[i].uts;
        cout << "UAS    : "; cin >> mhs[i].uas;
        cout << "Tugas  : "; cin >> mhs[i].tugas;

        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\n=== Daftar Nilai Mahasiswa ===\n";
    for (int i = 0; i < n; i++) {
        cout << mhs[i].nama << " (" << mhs[i].nim << ") -> Nilai Akhir: "
             << mhs[i].nilaiAkhir << endl;
    }

    return 0;
}
