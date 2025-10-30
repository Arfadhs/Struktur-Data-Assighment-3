#include "SLL.h"
#include <iostream>

int main() {
    List L;
    createList(L);

    insertFirst(L, alokasi(2));
    insertFirst(L, alokasi(0));
    insertFirst(L, alokasi(8));
    insertFirst(L, alokasi(12));
    insertFirst(L, alokasi(9));

    std::cout << "Isi List: ";
    printInfo(L);

    address found = findElm(L, 8);
    if (found != nullptr) {
        std::cout << found->info << " ditemukan dalam list\n";
    }
    else {
        std::cout << "Elemen tidak ditemukan\n";
    }

    std::cout << "Total info elemen = " << sumInfo(L) << '\n';

    return 0;
}
