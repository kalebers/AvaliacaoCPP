#include <iostream>

int fibonacci(int n) {
  int termo;

  int n1 = 1, n2 = 1;
  if (n == 1 || n == 2) {
    return 1;
  }  
  
  for (int i = 3; i <= n; i++){
    termo = n1 + n2;
    n1 = n2;
    n2 = termo;
  }
  return termo;
}

int main() {
  int n;
  std::cout << "Digite um número: "; 
  std::cin >> n;

  int termo = fibonacci(n);
  std::cout << "Fibonacci ("  << n << ") = " << termo << std::endl;
  return 0;
}

