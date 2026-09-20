#include <iostream>
#include <iomanip>
#include <vector>
#include "metodos.h"

using namespace std;

int main() {
    /*
     * Lea N números y almacénelos en un vector.
     * Cree un nuevo vector sin elementos repetidos e imprima las parejas
     * de números, tal que su suma sea mayor al promedio de todo el vector inicial.
     *
     * Ejemplo:
     * Para N=6, con los números 1 2 3 3 5 5
     * el promedio es: 3.16
     * los números no repetidos: 1 2 3 5
     * Pares de numeros, cuya suma es mayor que el promedio:
     * 1-3 , 1-5 , 2-3 , 2-5 , 3-5
     */

    int n;
    cout << "Ingrese la cantidad de números (N): ";
    cin >> n;

    vector<int> v;
    llenarVector(v, n);

    cout << "\nVector original: ";
    imprimirVector(v);

    double promedio = calcularPromedio(v);
    cout << fixed << setprecision(2);
    cout << "El promedio es: " << promedio << endl;

    vector<int> sinRepetidos = obtenerSinRepetidos(v);
    cout << "Los números no repetidos: ";
    imprimirVector(sinRepetidos);

    cout << "Pares de números cuya suma es mayor que el promedio: \n";
    imprimirParejasMayorPromedio(sinRepetidos, promedio);

    return 0;
}