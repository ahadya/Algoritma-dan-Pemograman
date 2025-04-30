#include <iostream>
using namespace std;

int main (){
	int a, b, c;
	
	cout << "Masukkan tiga bilangan: ";
	cin >> a >> b >>c;
	
	if (a + b > c && a + c > b && b + c > a) {
		cout <<"SEGI TIGA" << endl;
	} else {
		cout  <<"BUKAN SEGITIGA" << endl;
	}
	
	return 0;
}