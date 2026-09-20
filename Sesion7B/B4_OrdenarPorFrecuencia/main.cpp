#include <iostream>
#include <vector>
#include <utility>
#include "metodos.h"

using namespace std;

int main() {
    /*
     * Dado N caracteres, imprima los caracteres en orden en función
     * a su frecuencia en el vector.
     *
     * Ejemplo:
     * Con las letras: a, a, b, a, c, c, c, d
     * Frecuencias:
     *   a: 3 veces
     *   c: 3 veces
     *   b: 1 vez
     *   d: 1 vez
     *
     * Nota: se emplea std::pair para asociar cada carácter con su conteo.
     */

    int n;
    cout << "Ingrese la cantidad de caracteres (N): ";
    cin >> n;

    vector<char> v;
    llenarVector(v, n);

    cout << "\nVector original: ";
    imprimirVector(v);

    // Calcular frecuencias usando pair<char, int>
    vector<pair<char, int>> frecuencias = calcularFrecuencias(v);

    // Mostrar el desglose de frecuencias
    cout << "\nFrecuencias obtenidas:" << endl;
    for (const auto& par : frecuencias) {
        cout << "  '" << par.first << "': " << par.second << " vez(ces)" << endl;
    }

    // 1. Orden ascendente (menor a mayor frecuencia)
    ordenarPorFrecuencia(frecuencias, true);
    cout << "\nOrden ascendente por frecuencia: ";
    imprimirResultado(frecuencias);

    // 2. Orden descendente (como figura en el ejemplo 'a, c, b, d' de la diapositiva)
    ordenarPorFrecuencia(frecuencias, false);
    cout << "Orden descendente por frecuencia: ";
    imprimirResultado(frecuencias);

    return 0;
}