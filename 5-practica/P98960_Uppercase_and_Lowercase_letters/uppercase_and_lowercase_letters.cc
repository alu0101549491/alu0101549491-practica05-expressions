/* Universidad de la Laguna
 * Grado en Ingeniería Informática
 *
 * @author Fabián González Lence // alu0101549491@ull.edu.es
 * @date 2 november 2022
 * @brief Cambia letras introducidas en minúscula a mayúscula
 */

#include <iostream>

int main() {
  char letra{0};
  int letra_cambiada{0};
  std::cin >> letra;
  if (int(letra) >= 97) { 
    int letra_cambiada = int(letra);
    letra_cambiada = letra_cambiada - 97;
    letra_cambiada = letra_cambiada + 65;
    std::cout << char(letra_cambiada) << std::endl; 
  }
  else
    if (int(letra) < 97) {
      int letra_cambiada = int(letra);
      letra_cambiada = letra_cambiada + 97;
      letra_cambiada = letra_cambiada - 65;
      std::cout << char(letra_cambiada) << std::endl; 
    }
}
