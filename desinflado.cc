/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González // alu0101549491@ull.edu.es
 * @date 30 october 2022
 * @brief The program transforms a lowercase character from the alphabet to a uppercase character 
*/

#include <iostream>

int main() {
  char lowercase;
  std::cin >> lowercase;
  int uppercase = int(lowercase);
  uppercase = uppercase - 97;
  uppercase = uppercase + 65;
  std::cout << char(uppercase) << std::endl;
}
