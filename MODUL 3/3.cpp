#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 3x3
void tampil(int A[3][3], string nama) {
    cout << "Array " << nama << ":\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            cout << A[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}

// Menukar nilai A[r][c] dan B[r][c]
void tukarIsi(int A[3][3], int B[3][3], int r, int c) {
    int temp = A[r][c];
    A[r][c] = B[r][c];
    B[r][c] = temp;
}

// Menukar nilai yang ditunjuk pointer
void tukarPointer(int *p, int *q) {
    int temp = *p;
    *p = *q;
    *q = temp;
}

int main() {
    int A[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[3][3] = {{10,11,12},{13,14,15},{16,17,18}};

    cout << "Sebelum ditukar:\n";
    tampil(A, "A");
    tampil(B, "B");

    // Tukar isi elemen di baris 1 kolom 1
    tukarIsi(A, B, 1, 1);

    cout << "Sesudah tukar elemen [1][1]:\n";
    tampil(A, "A");
    tampil(B, "B");

    int x = 10, y = 20;
    cout << "Sebelum tukar pointer: x=" << x << " y=" << y << endl;
    tukarPointer(&x, &y);
    cout << "Sesudah tukar pointer: x=" << x << " y=" << y << endl;

    return 0;
}
