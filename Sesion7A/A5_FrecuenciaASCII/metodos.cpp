//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#include "metodos.h"
#include <iostream>
using namespace std;

void contarFrecuencias(const string& texto, vector<int>& frecuencias) {
    for (auto i = texto.begin(); i != texto.end(); i++) {
        int codigo = (int)(*i); // typecasting char → int para obtener el código ASCII
        frecuencias[codigo]++;
    }
}

void imprimirFrecuencias(const vector<int>& frecuencias) {
    for (int i = 0; i < (int)frecuencias.size(); i++) {
        if (frecuencias[i] > 0) {
            cout << "'" << (char)i << "' (ASCII " << i << "): "
                 << frecuencias[i] << " vez(ces)" << endl;
        }
    }
}
