#include "Singlylist.h"

int main() {
    // Soal 1: Membentuk list 9 -> 12 -> 8 -> 0 -> 2 dan menampilkan
    List L;
    address P1, P2, P3, P4, P5 = Nil;
    createList(L);

    P1 = alokasi(2);   insertFirst(L, P1);
    P2 = alokasi(0);   insertFirst(L, P2);
    P3 = alokasi(8);   insertFirst(L, P3);
    P4 = alokasi(12);  insertFirst(L, P4);
    P5 = alokasi(9);   insertFirst(L, P5);

    printInfo(L); // Expected: 9 12 8 0 2

    // Soal 2: deleteFirst (hapus 9), deleteLast (hapus 2), deleteAfter (hapus 8)
    address del;

    // Hapus node 9 (first)
    deleteFirst(L, del);
    dealokasi(del);

    // Hapus node 2 (last)
    deleteLast(L, del);
    dealokasi(del);

    // Hapus node 8 menggunakan deleteAfter:
    // Cari node dengan info 12 sebagai Prec (karena setelah 12 adalah 8)
    address Prec = L.first;
    while (Prec != Nil && Prec->info != 12) {
        Prec = Prec->next;
    }
    if (Prec != Nil) {
        deleteAfter(L, Prec, del);
        dealokasi(del);
    }

    // Tampilkan list setelah penghapusan: Expected: 12 0
    printInfo(L);

    // Tampilkan jumlah node: Expected: 2
    cout << "Jumlah node : " << nbList(L) << endl;

    // Hapus seluruh list
    deleteList(L);
    cout << "- List Berhasil Terhapus -" << endl;

    // Tampilkan jumlah node setelah deleteList: Expected: 0
    cout << "Jumlah node : " << nbList(L) << endl;

    return 0;
}