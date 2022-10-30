/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Fabián González // alu0101549491@ull.edu.es
 * @date 30 october 2022
 * @brief Do the basic arithmetic operations with two numbers
*/

#include <iostream>

int main() {
  int primer_numero;
  int segundo_numero;
  std::cout << "Introduce un número entero: ";
  std::cin >> primer_numero;
  std::cout << "Introduce otro número entero: ";
  std::cin >> segundo_numero;
  int suma = primer_numero + segundo_numero;
  int resta = primer_numero - segundo_numero;
  int multiplicacion = primer_numero * segundo_numero;
  int division = primer_numero / segundo_numero;
  int resto = primer_numero % segundo_numero;
  int igualdad = primer_numero == segundo_numero;
  int desigualdad = primer_numero != segundo_numero;
  int menor = primer_numero < segundo_numero;
  int mayor = primer_numero > segundo_numero;
  int menor_igual = primer_numero <= segundo_numero;
  int mayor_igual = primer_numero >= segundo_numero;
  std::cout << primer_numero << " + " << segundo_numero << " = " << suma << std::endl;
  std::cout << primer_numero << " - " << segundo_numero << " = " << resta << std::endl;
  std::cout << primer_numero << " * " << segundo_numero << " = " << multiplicacion << std::endl;
  std::cout << primer_numero << " / " << segundo_numero << " = " << division << std::endl;
  std::cout << primer_numero << " % " << segundo_numero << " = " << resto << std::endl;
  std::cout << primer_numero << " == " << segundo_numero << " = " << igualdad << std::endl;
  std::cout << primer_numero << " != " << segundo_numero << " = " << desigualdad << std::endl;
  std::cout << primer_numero << " < " << segundo_numero << " = " << menor << std::endl;
  std::cout << primer_numero << " > " << segundo_numero << " = " << mayor << std::endl;
  std::cout << primer_numero << " <= " << segundo_numero << " = " << menor_igual << std::endl;
  std::cout << primer_numero << " >= " << segundo_numero << " = " << mayor_igual << std::endl;
}
