#include <iostream>
#include "SLLInventory.h"
using namespace std;

int main() {
    List inventory;
    createList(inventory);

    Product P1 = {"Pulpen", "A001", 20, 2500, 0};
    Product P2 = {"BukuTulis", "A002", 15, 5000, 10};
    Product P3 = {"Penghapus", "A003", 30, 1500, 0};

    insertLast(inventory, P1);
    insertLast(inventory, P2);
    insertLast(inventory, P3);

    cout << "=== List Awal ===\n";
    viewList(inventory);

    Product temp;
    deleteFirst(inventory, temp);

    cout << "\n=== List setelah deleteFirst ===\n";
    viewList(inventory);

    cout << "\n=== Update data posisi ke-2 ===\n";
    updateAtPosition(inventory, 2);

    cout << "\n=== List setelah update ===\n";
    viewList(inventory);

    cout << "\n=== Search Harga Akhir 2000 - 7000 ===\n";
    searchByFinalPriceRange(inventory, 2000, 7000);

    MaxHargaAkhir(inventory);

    return 0;
}
