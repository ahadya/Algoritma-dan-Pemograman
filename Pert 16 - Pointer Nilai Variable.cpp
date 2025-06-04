#include <iostream>
using namespace std;

int main() {
	int num = 10;
	int *ptr = &num;
	
	cout << "Nilai variable num: " << num << endl;
	cout << "Alamat memori variable num: " << num << endl;
	cout << "Nilai yang ditunjuk oleh pointer: " << *ptr << endl;
	cout << "Alamat memori yang ditunjuk oleh pointer: " << ptr << endl;
	
	*ptr = 20;
	
	cout << "Nilai variable num setelah perubahan: " << num << endl;
	cout << "Nilai yang ditunjuk oleh pointer setelah perubahan: " << num << endl;
	
	return 0;
}
