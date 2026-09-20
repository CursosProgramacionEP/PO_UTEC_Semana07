//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#include "metodos.h"
#include <iostream>
#include <algorithm>  // para std::reverse
using namespace std;

void llenarVector(vector<string>& v, int tamano) {
    for (int i = 0; i < tamano; i++) {
        cout << "Ingrese la cadena " << i + 1 << ": ";
        string cadena;
        cin >> cadena;
        v.push_back(cadena);
    }
}

void eliminarPares(vector<string>& v) {
    // Se recorre de atrás hacia adelante para que los índices no se desfasen al borrar
    for (int i = static_cast<int>(v.size()) - 1; i >= 0; --i) {
        if (i % 2 == 0) {
            v.erase(v.begin() + i);
        }
    }
}

void imprimirVector(const vector<string>& v) {
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

string palindromo(const vector<string>& v) {
    string palindromoMasLargo = "";
    for (const auto& cadena : v) {
        string cadenaReversa = cadena;
        reverse(cadenaReversa.begin(), cadenaReversa.end());
        if (cadena == cadenaReversa && cadena.length() > palindromoMasLargo.length()) {
            palindromoMasLargo = cadena;
        }
    }
    return palindromoMasLargo;
}