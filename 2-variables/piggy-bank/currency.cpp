#include <iostream>
#include <cmath>

int main() {
  
  double pesos = 0;
  double reais = 0;
  double soles = 0;
  double dollars = 0;

  std::cout << "Enter number of Colombian Pesos:\n";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais:\n";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles:\n";
  std::cin >> pesos;

//converting all the currencies to US dollars before adding them up.
//using current converting rates for 20 October 2024.
  dollars = (0.00024 * pesos) + (0.18 * reais) + (0.27 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";
  
}
