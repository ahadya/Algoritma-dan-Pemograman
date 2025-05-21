#include <iostream>

using namespace std;

int main() 
{
	char nama[ ]     = "Ahmad Aditya";
    char kodemahasiswa[] = "02289";

    int a, b, hasil;

    // Input angka pertama
    cout << "Masukan angka pertama : ";
    cin >> a;

    // Input angka kedua
    cout << "Masukan angka kedua : ";
    cin >> b;

    // Penjumlahan angka
    hasil = a + b;

    // Output hasil penjumlahan
    cout << "Hasil Penjumlahan a dan b : " << hasil << endl;
    

    // Output nama dan kode dosen
     cout << "Nama: "<< nama << endl;
     cout << "kode Mahasiswa: " << kodemahasiswa << endl;

    return 0;
}
