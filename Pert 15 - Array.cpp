#include <iostream>
using namespace std;
int main() {
    // Deklarasi array 2 dimensi dengan 3 baris dan 4 kolom
    int array[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    // Menampilkan elemen-elemen array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl; // Pindah ke baris berikutnya
    }
    return 0;
}
