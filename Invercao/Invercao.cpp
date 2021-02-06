#include <iostream>

int tamanho_string(std::string frase) {
    int tamanho = 0;
    for ( char c : frase) {
        tamanho++;
    }
    return tamanho;
}

int main() { 
    std::string frase = "The quick brown fox jumps over the lazy dog";
    char c;
    int i = 1;
    int j = tamanho_string(frase) - 1;
    while(i < j) {
        c = frase[i];
        frase[i] = frase[j];
        frase[j] = c;
        i++;
        j--;
    }
    std::cout << "A frase invertida é \"" << frase << "\"" << std::endl;
    return 0;
}
