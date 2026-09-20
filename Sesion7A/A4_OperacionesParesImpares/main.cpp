#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "metodos.h"

using namespace std;

int main() {
    /*
     * Escribir un programa que almacene N números positivos (del 1 al 10)
     * generados aleatoriamente en un vector.
     * Deberán crearse 3 funciones que realicen los siguientes cálculos:
     *
     * 1. La multiplicación de todos los números impares.
     * 2. La suma de todos los números pares.
     * 3. Generar un nuevo vector con los valores en posiciones múltiplo de 3
     *    (incluyendo la posición 0).
     */

    srand(time(nullptr));

    int tamano;
    cout << "Ingrese la cantidad de números a generar: ";
    cin >> tamano;

    vector<int> v;
    llenarVector(v, tamano);

    cout << "Vector original: ";
    imprimirVector(v);

    long long productoImpares = multiplicarImpares(v);
    cout << "Multiplicación de impares: " << productoImpares << endl;

    int sumaPares = sumarPares(v);
    cout << "Suma de pares: " << sumaPares << endl;

    vector<int> multiplosTres = vectorMultiplosDeTres(v);
    cout << "Valores en posiciones múltiplo de 3: ";
    imprimirVector(multiplosTres);

    return 0;
}