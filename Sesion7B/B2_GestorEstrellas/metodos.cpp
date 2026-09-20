//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#include "metodos.h"
#include <iostream>
using namespace std;

void agregarEstrella(vector<string>& nombres, vector<string>& tipos) {
    cout<<"Ingrese el nombre de la estrella: ";
    string nombre;
    getline(cin >> ws,nombre);

    nombres.push_back(nombre);
    cout<<"Ingrese el tipo: ";
    string tipo;
    getline(cin >> ws,tipo);
    //cin >> tipo;
    tipos.push_back(tipo);
}

void borrarEstrella(vector<string>& nombres, vector<std::string>& tipos) {
    cout<<"Ingrese el nombre de la estrella a borrar: ";
    string nombre;
    getline(cin >> ws, nombre);
    for(int i = 0; i < nombres.size(); i++) {
        if(nombres[i] == nombre) {
            nombres.erase(nombres.begin() + i);
            tipos.erase(tipos.begin() + i);
            break;
        }
    }
}

void buscarEstrella(const vector<string>& nombres, const vector<string>& tipos) {
    cout<<"Ingrese el nombre de la estrella a buscar: ";
    string nombre;
    getline(cin >> ws, nombre);
    for(int i = 0; i < nombres.size(); i++) {
        if(nombres[i] == nombre) {
            cout<<"Nombre: "<<nombres[i]<<", Tipo: "<<tipos[i]<<endl;
            return;
        }
    }
    cout<<"Estrella no encontrada."<<endl;
}

void imprimirEstrellas(const std::vector<std::string>& nombres, const std::vector<std::string>& tipos) {
    cout << "Estrellas y sus tipos:" << endl;
    for(int i = 0; i < nombres.size(); i++) {
        cout << "Nombre: " << nombres[i] << ", Tipo: " << tipos[i] << endl;
    }
}

void ordenarEstrellas(std::vector<std::string>& nombres, std::vector<std::string>& tipos) {
    int n = nombres.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nombres[i] > nombres[j]) {
                // Intercambiamos en ambos vectores para no perder correspondencia
                std::swap(nombres[i], nombres[j]);

                //string temp=tipos[i];
                //tipos[i]=tipos[j];
                //tipos[j]=temp;

                std::swap(tipos[i], tipos[j]);
            }
        }
    }
}

/*
// METODOS ADICIONALES COMO ALTERNATIVA CON ITERADORES
// Esta es otra forma de hacer lo mismo, pero recorriendo con iteradores
// en lugar de usar [i]. Solo sirve como ejemplo de implementación distinta.

void borrarEstrellaIterador(vector<string>& nombres, vector<string>& tipos) {
    cout<<"Ingrese el nombre de la estrella a borrar: ";
    string nombre;
    cin >> nombre;

    auto itNombre = nombres.begin();
    auto itTipo = tipos.begin();

    while (itNombre != nombres.end()) {
        if (*itNombre == nombre) {
            nombres.erase(itNombre);
            tipos.erase(itTipo);
            break;
        }
        ++itNombre;
        ++itTipo;
    }
}

void buscarEstrellaIterador(const vector<string>& nombres, const vector<string>& tipos) {
    cout<<"Ingrese el nombre de la estrella a buscar: ";
    string nombre;
    cin >> nombre;

    auto itNombre = nombres.begin();
    auto itTipo = tipos.begin();

    while (itNombre != nombres.end()) {
        if (*itNombre == nombre) {
            cout<<"Nombre: "<<*itNombre<<", Tipo: "<<*itTipo<<endl;
            return;
        }
        ++itNombre;
        ++itTipo;
    }

    cout<<"Estrella no encontrada."<<endl;
}

void imprimirEstrellasIterador(const vector<string>& nombres, const vector<string>& tipos) {
    cout << "Estrellas y sus tipos:" << endl;

    auto itNombre = nombres.begin();
    auto itTipo = tipos.begin();

    while (itNombre != nombres.end()) {
        cout << "Nombre: " << *itNombre << ", Tipo: " << *itTipo << endl;
        ++itNombre;
        ++itTipo;
    }
}
*/