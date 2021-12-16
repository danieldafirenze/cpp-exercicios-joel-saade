#include <iostream>
using namespace std;

void altera(int&, int&);

int main() {
	int valor1 = 10;
	int valor2 = 20;
	cout << "Argumento real valor1 (antes): " << valor1 << endl;
	cout << "Argumento real valor2 (antes): " << valor2 << endl;

	altera(valor1, valor2);
	cout << "Argumento real valor1 (depois) " << valor1 << endl;
	cout << "Argumento real valor2 (depois) " << valor2 << endl;

	return 0;
}

void altera(int& v1, int& v2) {
	v1 = v1 + 100;
	v2 = 200;
}
