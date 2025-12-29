#include "circularlist.h"
#include <iostream>
using namespace std;

int main() {
    List L, A, B, L2; 
    address P1 = Nil;
    address P2 = Nil; 
    mahasiswa x; 
    createList(L); 

    cout << "Masukkan first, last, dan after" << endl;
    P1 = createData("Arif", "04", '1', 3.0); 
    insertFirst(L,P1); 
    P1 = createData("Andka", "06", 'l',3.33); 
    insertLast(L,P1); 
    P1 = createData("Ali", "02", 'l',3.71);
    insertFirst(L,P1); 
    P1 = createData("Azizi", "01", 'l', 3.3); 
    insertFirst(L,P1); 
    P1 = createData("Ajda", "07", 'p', 3.75); 
    insertLast(L,P1); 
    x.nim = "02"; 
    P1 = findElm(L,x); 
    P2 = createData("Amel", "03", 'p', 3.5); 
    insertAfter(L, P1, P2); 
    x.nim = "07"; 
    P1 = findElm(L,x); 
    P2 = createData("Arfan", "08", 'p', 3.3); 
    insertAfter(L, P1, P2); 
    x.nim = "04"; 
    P1 = findElm(L,x); 
    P2 = createData("Raihan", "05", 'p', 3.4); 
    insertAfter(L, P1, P2); 
    printInfo(L); 
    return 0; 
}
