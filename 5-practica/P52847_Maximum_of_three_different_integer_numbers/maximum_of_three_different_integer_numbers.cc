/* Universidad de la Laguna
 * Grado en Ingeniería Informática
 *
 * @author Fabián González Lence // alu0101549491@ull.edu.es
 * @date 2 november 2022
 * @brief Cambia letras introducidas en minúscula a mayúscula
 */

#include <iostream>

int main() {
  int numero_1{0};
  int numero_2{0};
  int numero_3{0};
  int mayor{0};
  std::cin >> numero_1 >> numero_2 >> numero_3;
  if ( (mayor = numero_1 > numero_2) , mayor > numero_3 ) {
    std::cout << numero_1 << std::endl;
  }
  else
    if ( (mayor =  numero_1 > numero_2) < numero_3 ) {
      std::cout << numero_3 << std::endl;
    }
  else
    if ( (mayor = numero_1 < numero_2) > numero_3 ) {
      std::cout << numero_2 << std::endl;
    }
  else
    if ( (mayor = numero_1 < numero_2) < numero_3 ) {
      std::cout << numero_3 << std::endl;
    }
}
