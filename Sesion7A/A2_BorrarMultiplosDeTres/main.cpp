#include "metodos.h"

#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

int main() {

    /*
    * Escribir un programa que permita crear un vector con N enteros con valores aleatorios entre el 1 y el 30.
    * Imprima el vector original.
    * Borre todos aquellos que sean múltiplos de 3.
    * Muestre el vector modificado.
     */

    vector<int> v;
    srand(time(nullptr));
    int n;
    std::cout << "Ingrese la cantidad de números: ";
    std::cin >> n;

    ingresarNumeros(v, n);

    std::cout << "Vector original: ";
    imprimirVector(v);

    borrarMultiplosDeTres(v);

    std::cout << "Vector sin múltiplos de 3: ";
    imprimirVector(v);

    return 0;
}