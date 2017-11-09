#include <iostream>
using namespace std;

int main () {
	int bil1;
	int bil2;
	int hasil;
	
	cout << "masukan bilangan 1 : ";
	cin >>bil1;
	cout << "masukan bilangan 2 : ";
	cin >>bil2;
	
	if (bil1>bil2)
	hasil = bil1 - bil2;
	else
	hasil = bil2 - bil1;
	cout << "bilangan absolute nya adalah : "<<hasil;
}
