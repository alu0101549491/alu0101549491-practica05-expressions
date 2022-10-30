/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González // alu0101549491@ull.edu.es
 * @date 30 october 2022
 * @brief The program realizes the basic boolean operations (AND, OR, NOT) 
*/

#include <iostream>

int main() {
  bool character_a;
  bool character_b;
  std::cout << "Introduce el valor de la variable A (1 = TRUE, 0 = FALSE): ";
  std::cin >> character_a;
  std::cout << "Introduce el valor de la variable B (1 = TRUE, 0 = FALSE): ";
  std::cin >> character_b;
  if (character_a == 1 or character_a == 0, character_b == 1 or character_b == 0) {
    bool and_operation = (character_a && character_b);
    bool or_operation = (character_a || character_b);
    bool not_operation_a = (!character_a);
    bool not_operation_b = (!character_b);
    std::cout << "A^B: " << and_operation << std::endl;
    std::cout << "AvB: " << or_operation << std::endl;
    std::cout << "¬A: " << not_operation_a << std::endl;
    std::cout << "¬B: " << not_operation_b << std::endl;
  }
  else {
    std::cout << " " << std::endl;
    std::cout << "Uno o dos de los valores introducidos es incorrecto, recuerda que tienes que escribir un valor booleano (1 = TRUE, 0 = FALSE)" << std::endl;
  }  
}
