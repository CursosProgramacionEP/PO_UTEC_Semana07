//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#include "metodos.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void llenarVector(vector<int>& v, int tamano) {
    for (int i = 0; i < tamano; i++) {
        int numero = rand() % 100; // Genera un número aleatorio entre 0 y 99
        v.push_back(numero);
    }
}

void imprimirVector(const vector<int>& v) {
    for (auto i = v.begin(); i != v.end(); i++) {
        cout << *i << " ";
    }
    cout << endl;
}

double calcularPromedio(const vector<int>& v) {
    double suma = 0;
    for (auto i = v.begin(); i != v.end(); i++) {
        suma += *i;
    }
    return suma / v.size();
}

int calcularSumaMenoresA70(const vector<int>& v) {
    int suma = 0;
    for (auto i = v.begin(); i != v.end(); i++) {
        if (*i < 70) {
            suma += *i;
        }
    }
    return suma;
}

// Retorna double para no perder la parte decimal de la diferencia
vector<double> generarVectorDiferencias(const vector<int>& v, double promedio) {
    vector<double> diferencias;
    for (auto i = v.begin(); i != v.end(); i++) {
        diferencias.push_back(*i - promedio);
    }
    return diferencias;
}