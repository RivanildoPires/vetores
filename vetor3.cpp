#include <iostream>

using namespace std;

int main() {
    
    char caracteres[10];

    
    cout << "Digite 10 caracteres:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> caracteres[i];
    }

    int quantidadeConsoantes = 0;
    for (int i = 0; i < 10; i++) {
        char c = tolower(caracteres[i]);
        if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            quantidadeConsoantes++;
        }
    }

    cout << "Quantidade de consoantes lidas: " << quantidadeConsoantes << endl;

    return 0;
}
