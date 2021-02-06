#include <iostream>
#include <string>

int main() { 
    std::string frase;
    int tamanho = 0;

    std::cout << "Digite uma string: ";
    std::getline(std::cin, frase);

    for ( char c : frase) {
        tamanho++;
    }

    std::cout << "A string \"" << frase << "\" tem tamnho " << tamanho << std::endl; 
    return 0;
}
