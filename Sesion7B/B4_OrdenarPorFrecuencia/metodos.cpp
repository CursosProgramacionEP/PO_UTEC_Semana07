//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#include "metodos.h"
#include <iostream>
#include <utility>

using namespace std;

void llenarVector(vector<char>& v, int n) {
    for (int i = 0; i < n; i++) {
        char c;
        cout << "Ingrese el caracter " << i + 1 << ": ";
        cin >> c;
        v.push_back(c);
    }
}

void imprimirVector(const vector<char>& v) {
    for (const char& c : v) {
        cout << c << " ";
    }
    cout << endl;
}

vector<pair<char, int>> calcularFrecuencias(const vector<char>& v) {
    vector<pair<char, int>> frecuencias;

    for (const char& c : v) {
        bool encontrado = false;
        for (auto& par : frecuencias) {
            if (par.first == c) {
                par.second++;
                encontrado = true;
                break;
            }
        }
        if (!encontrado) {
            frecuencias.push_back({c, 1});
        }
    }

    return frecuencias;
}

void ordenarPorFrecuencia(vector<pair<char, int>>& frecuencias, bool ascendente) {
    int total = frecuencias.size();
    for (int i = 0; i < total - 1; i++) {
        for (int j = i + 1; j < total; j++) {
            bool debeIntercambiar = false;
            if (ascendente) {
                // Menor frecuencia primero; en empate, orden alfabético
                if (frecuencias[i].second > frecuencias[j].second) {
                    debeIntercambiar = true;
                } else if (frecuencias[i].second == frecuencias[j].second && frecuencias[i].first > frecuencias[j].first) {
                    debeIntercambiar = true;
                }
            } else {
                // Mayor frecuencia primero (como en el ejemplo de la diapo)
                if (frecuencias[i].second < frecuencias[j].second) {
                    debeIntercambiar = true;
                } else if (frecuencias[i].second == frecuencias[j].second && frecuencias[i].first > frecuencias[j].first) {
                    debeIntercambiar = true;
                }
            }

            if (debeIntercambiar) {
                swap(frecuencias[i], frecuencias[j]);
            }
        }
    }
}

void imprimirResultado(const vector<pair<char, int>>& frecuencias) {
    bool primero = true;
    for (const auto& par : frecuencias) {
        if (!primero) {
            cout << ", ";
        }
        cout << par.first;
        primero = false;
    }
    cout << endl;
}
