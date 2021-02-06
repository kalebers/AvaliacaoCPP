#include <iostream>

int pesquisa_linear(int* vetor, int tamanho, int chave) {
    for(int i = 0; i < tamanho; i++) {
        if(vetor[i] == chave) {
            return i;
        }
    }
    return -1;
}

int main() { 
    int tamanho = 10;
    int vetor[tamanho] = {21,340,210,9999,53,345,768,953,621,31};

    std::cout << pesquisa_linear(vetor,tamanho,53) << std::endl;
    std::cout << pesquisa_linear(vetor,tamanho,42) << std::endl;

    return 0;
}
