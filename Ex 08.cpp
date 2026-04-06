#include <iostream>
using namespace std;

int main() {
    int vetor[5];
    int *ptr;
    int soma = 0;
    float media;

    // Entrada de dados
    cout << "Digite 5 valores:\n";
    for(int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }

    // Ponteiro aponta para o vetor
    ptr = vetor;

    // Soma usando ponteiro
    for(int i = 0; i < 5; i++) {
        soma += *(ptr + i);
    }

    // Cálculo da média
    media = soma / 5.0;

    // Saída
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;
}
