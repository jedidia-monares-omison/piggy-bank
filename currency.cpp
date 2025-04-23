#include <iostream>

int main() {
  
  double pesos, reais, soles, dollars;
  
  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> pesos;
  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;

  // colombian pesos to usd = 0.00023
  //brazilian reais to usd = 0.1752
  //peruvian soles to usd = 0.27

  dollars = (pesos * 0.00023) + (reais * 0.1752) + (soles * 0.27);
  std::cout << "US Dollars = $ " << dollars << std::endl;

}
