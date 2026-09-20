//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#include "metodos.h"
#include <iostream>

using namespace std;

void llenarVector(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        int valor;
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valor;
        v.push_back(valor);
    }
}

void imprimirVector(const vector<int>& v) {
    for (const int& valor : v) {
        cout << valor << " ";
    }
    cout << endl;
}

double calcularPromedio(const vector<int>& v) {
    if (v.empty()) return 0.0;
    double suma = 0;
    for (const int& valor : v) {
        suma += valor;
    }
    return suma / v.size();
}

vector<int> obtenerSinRepetidos(const vector<int>& v) {
    vector<int> sinRepetidos;
    for (const int& valor : v) {
        bool yaExiste = false;
        for (const int& actual : sinRepetidos) {
            if (actual == valor) {
                yaExiste = true;
                break;
            }
        }
        if (!yaExiste) {
            sinRepetidos.push_back(valor);
        }
    }
    return sinRepetidos;
}

void imprimirParejasMayorPromedio(const vector<int>& sinRepetidos, double promedio) {
    int total = sinRepetidos.size();
    bool primera = true;
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            if (sinRepetidos[i] + sinRepetidos[j] > promedio) {
                if (!primera) {
                    cout << " , ";
                }
                cout << sinRepetidos[i] << "-" << sinRepetidos[j];
                primera = false;
            }
        }
    }
    cout << endl;
}
