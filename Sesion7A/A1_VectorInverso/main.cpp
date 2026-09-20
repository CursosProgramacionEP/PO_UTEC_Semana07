#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Escribir un programa que permita leer N números,
    // los almacene en un vector y los muestre en forma inversa.

    int n;
    cout << "Ingrese la cantidad de números: ";
    cin >> n;

    // Creación de un vector de tamaño fijo
    vector<int> v(n);

    // Lectura de los números
    for (int i = 0; i < n; i++) {
        int numero;
        cout << "Ingrese el número " << i + 1 << ": ";
        cin >> numero;
        v[i] = numero;
        // Si el vector empieza vacío, se puede usar push_back:
        // vector<int> v;
        // v.push_back(numero);
    }

    // Mostrar los números en forma inversa — opción 1: índice decreciente
    cout << "Los números en forma inversa son: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Alternativa con iterador inverso (rbegin / rend):
    // for (auto i = v.rbegin(); i != v.rend(); i++) {
    //     cout << *i << " ";
    // }
    // rbegin() devuelve un iterador al último elemento del vector
    // rend()   devuelve un iterador antes del primer elemento

    return 0;
}