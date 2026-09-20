#include <iostream>
#include <vector>
#include <string>
#include "metodos.h"

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.

    //*
    //Las estrellas se clasifican según su tipo/clase espectral en: O, B, A, F, G, K, M.
    //Escribir un programa que genere un vector de nombres de estrellas y otro vector de tipos de estrella (vectores paralelos).
    //El programa debe implementar un menú con las siguientes operaciones:
    //Borrar una estrella y su correspondiente tipo (en ambos vectores).
    //Añadir una estrella y su tipo (en ambos vectores).
    //Buscar una estrella e imprimir su nombre y tipo.
    //Ordenar alfabéticamente el vector de nombres de estrellas, actualizando también el vector de tipos en el mismo
    //orden para no perder la correspondencia.
    //*//

    vector<string> nombres;
    vector<string> tipos;

    int opcion = 0;
    do {
        cout << "\n=== GESTOR DE ESTRELLAS ===\n";
        cout << "1. Añadir estrella\n";
        cout << "2. Borrar estrella\n";
        cout << "3. Buscar estrella\n";
        cout << "4. Ordenar alfabeticamente\n";
        cout << "5. Mostrar todas las estrellas\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarEstrella(nombres, tipos); break;
            case 2: borrarEstrella(nombres, tipos); break;
            case 3: buscarEstrella(nombres, tipos); break;
            case 4:
                ordenarEstrellas(nombres, tipos);
                cout << "Estrellas ordenadas alfabeticamente.\n";
                break;
            case 5: imprimirEstrellas(nombres, tipos); break;
            case 6: cout << "Saliendo...\n"; break;
            default: cout << "Opcion no valida.\n";
        }
    } while (opcion != 6);


    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}