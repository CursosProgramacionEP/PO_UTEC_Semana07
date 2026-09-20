#include "metodos.h"

#include <iostream>
#include <vector>

void imprimirVector(const std::vector<int>& vector) {
    for (const int& numero : vector) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;
}
void ingresarNumeros(std::vector<int>& vector, int n) {
    for (int i = 0; i < n; i++) {
        int numero = std::rand() % 30 + 1;
        vector.push_back(numero);
    }
}

void borrarMultiplosDeTres(std::vector<int>& vector) {
    for (auto it = vector.begin(); it != vector.end();) {
        if (*it % 3 == 0) {
            it = vector.erase(it);
        }else{
            ++it;
        }
    }
}
