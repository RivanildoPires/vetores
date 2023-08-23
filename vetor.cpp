#include <iostream>

using namespace std;

int main() {
	
	const int tamanho = 10;
	
	int numeros [tamanho];
	
	cout << "Digite " << tamanho << " numeros" << endl;
	
	for (int i = 0; i < tamanho; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];}
	
	
    for (int i = tamanho - 1; i >= 0; i--) {
		cout << numeros[i] << " ";}
}
