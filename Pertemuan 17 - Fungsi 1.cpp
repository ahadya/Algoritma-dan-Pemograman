#include <iostream>

void garis() {
	std::cout << "\n--------------------\n";
}

int main() {
	garis(); // memanggil fungsi garis
	std::cout << "AHMAD ADITYA - Jakarta Barat" << std::endl;
	garis(); // memanggil fungsi garis
	
	std::cin.get(); // agar program menunggu input sebelum selesai
	return 0;
}
