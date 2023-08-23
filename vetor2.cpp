#include <iostream>
#include <vector>

using namespace std;

int main() {
    
	vector<int> numeros(5);

    cout << "Digite 5 números inteiros:" << endl;
    for (int i = 0; i < 5; i++) {
   		cin >> numeros[i];
    }

    int soma = 0;
    for (int i = 0; i < 5; i++) {
        soma += numeros[i];
    }

    int subtracao = numeros[0];
    for (int i = 1; i < 5; i++) {
        subtracao -= numeros[i];
    }

    double divisao = static_cast<double>(soma) / 5;

  
    cout << "Soma: " << soma << endl;
    cout << "Subtracao " << subtracao << endl;
    cout << "Divisao " << divisao << endl;

    return 0;
}
