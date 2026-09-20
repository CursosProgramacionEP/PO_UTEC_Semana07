#include <iostream>
#include <vector>
#include <string>
#include "metodos.h"

using namespace std;

int main() {
    /*
     * La tabla de caracteres ASCII asigna a cada carácter un código del 0 al 255.
     * Al realizar el typecasting de un char a int se obtiene su código ASCII.
     * Por ejemplo: 'A' → 65, 'a' → 97.
     *
     * Escribir un programa que lea un texto y haciendo uso de un vector,
     * cuente las veces que se repite cada carácter del texto leído.
     */

    // Vector de 256 posiciones, una por cada posible código ASCII
    // Inicializado en 0 — no hay ningún carácter visto aún
    vector<int> frecuencias(256, 0);

    string texto;
    cout << "Ingrese un texto: ";
    getline(cin, texto); // getline para leer texto con espacios

    contarFrecuencias(texto, frecuencias);

    cout << "\nFrecuencia de caracteres:" << endl;
    imprimirFrecuencias(frecuencias);

    return 0;
}