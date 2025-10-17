#include <iostream>
using namespace std;

const int N = 3;

void tampilArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarPosisi(int arr1[N][N], int arr2[N][N], int i, int j) {
    int temp = arr1[i][j];
    arr1[i][j] = arr2[i][j];
    arr2[i][j] = temp;
}
void tukarPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A[N][N] = {{1,2,3},{4,5,6},{7,8,9}};
    int B[N][N] = {{9,8,7},{6,5,4},{3,2,1}};

    cout << "Array A sebelum tukar:\n"; tampilArray(A);
    cout << "Array B sebelum tukar:\n"; tampilArray(B);

    tukarPosisi(A, B, 1, 1);

    cout << "\nArray A setelah tukar:\n"; tampilArray(A);
    cout << "Array B setelah tukar:\n"; tampilArray(B);

    int x = 10, y = 20;
    int *px = &x, *py = &y;
    cout << "\nSebelum tukar pointer: x=" << x << ", y=" << y << endl;
    tukarPointer(px, py);
    cout << "Sesudah tukar pointer: x=" << x << ", y=" << y << endl;

    return 0;
}
