#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "metodos.h"

using namespace std;

int main() {
    /**
    * Escribir un programa que almacene N números positivos (del 0 al 99) generados aleatoriamente en un vector.
      Deberá crearse 3 funciones que realicen los siguientes cálculos:

      Imprimir el vector.
      Calcular el promedio de todos los números del vector.
      Calcular la suma de todos los números menores a 70.
      Generar un nuevo vector que almacene para cada número la diferencia entre el promedio y el número.

     */
    srand(time(nullptr));
    vector<int> v;
    cout << "Ingrese la cantidad de números a generar: ";
    int tamano;
    cin >> tamano;
    // int tamano = 10; // Por ejemplo, se generan 10 números
    
    llenarVector(v, tamano);
    cout << "Vector original: ";
    imprimirVector(v);
    double promedio = calcularPromedio(v);
    cout << fixed << setprecision(2); // Para mostrar el promedio con 2 decimales
    cout << "Promedio: " << promedio << endl;
    int sumaMenoresA70 = calcularSumaMenoresA70(v);
    cout << "Suma de números menores a 70: " << sumaMenoresA70 << endl;
    vector<double> diferencias = generarVectorDiferencias(v, promedio);
    cout << "Diferencias con respecto al promedio: ";
    for (const auto& d : diferencias) cout << d << " ";
    cout << endl;

    return 0;
}