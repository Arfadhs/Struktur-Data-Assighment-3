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