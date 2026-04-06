#include <iostream>
using namespace std;

int main() {
    int vetor[10];
    int *ptr;

    // Entrada de dados
    cout << "Digite 10 valores:\n";
    for(int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    // Ponteiro aponta para o início do vetor
    ptr = vetor;

    // Impressão na ordem normal
    cout << "\nOrdem normal:\n";
    for(int i = 0; i < 10; i++) {
        cout << *(ptr + i) << " ";
    }

    // Impressão na ordem inversa
    cout << "\nOrdem inversa:\n";
    for(int i = 9; i >= 0; i--) {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
