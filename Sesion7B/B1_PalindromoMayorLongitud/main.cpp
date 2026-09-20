#include <iostream>

#include "metodos.h"
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.

    /**Leer N strings en un vector, eliminar las cadenas en las posiciones pares y encontrar
     *la cadena palíndroma con la mayor longitud entre las restantes.*/

    vector<string> v;
    int tamano;
    cout << "Ingrese la cantidad de cadenas a leer: ";
    cin >> tamano;
    llenarVector(v, tamano);
    eliminarPares(v);
    string palindromoLargo = palindromo(v);
    cout << "El palíndromo más largo es: " << palindromoLargo << endl;
    imprimirVector(v);
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}