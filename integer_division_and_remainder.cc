/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González // alu0101549491@ull.edu.es
 * @date 30 october 2022
 * @brief Calculator of divisions between integer numbers and their remainders
 */

#include <iostream>
int main(){
  int dividendo(0);
  int divisor(0);
  std::cin >> dividendo >> divisor;
  std::cout << dividendo/divisor << " " << dividendo%divisor << std::endl;
  return 0;
}
