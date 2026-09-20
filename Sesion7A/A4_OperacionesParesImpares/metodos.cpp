//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#include "metodos.h"
#include <iostream>
using namespace std;

void llenarVector(vector<int>& v, int tamano) {
    for (int i = 0; i < tamano; i++) {
        int numero = rand() % 10 + 1; // Genera un número aleatorio entre 1 y 10
        v.push_back(numero);
    }
}

void imprimirVector(const vector<int>& v) {
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

long long multiplicarImpares(const vector<int>& v) {
    long long producto = 1;
    bool hayImpares = false;
    for (auto i = v.begin(); i != v.end(); i++) {
        if (*i % 2 != 0) {
            producto *= *i;
            hayImpares = true;
        }
    }
    return hayImpares ? producto : 0;
}

int sumarPares(const vector<int>& v) {
    int suma = 0;
    for (auto i = v.begin(); i != v.end(); i++) {
        if (*i % 2 == 0) {
            suma += *i;
        }
    }
    return suma;
}

vector<int> vectorMultiplosDeTres(const vector<int>& v) {
    vector<int> resultado;
    for (int i = 0; i < (int)v.size(); i++) {
        if (i % 3 == 0) { // posición 0, 3, 6, 9, ...
            resultado.push_back(v[i]);
        }
    }
    return resultado;
}
