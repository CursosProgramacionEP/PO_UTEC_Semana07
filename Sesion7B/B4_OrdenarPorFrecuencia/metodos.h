//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#ifndef B4_ORDENARPORFRECUENCIA_METODOS_H
#define B4_ORDENARPORFRECUENCIA_METODOS_H

#include <vector>
#include <utility> // std::pair

void llenarVector(std::vector<char>& v, int n);
void imprimirVector(const std::vector<char>& v);
std::vector<std::pair<char, int>> calcularFrecuencias(const std::vector<char>& v);
void ordenarPorFrecuencia(std::vector<std::pair<char, int>>& frecuencias, bool ascendente = true);
void imprimirResultado(const std::vector<std::pair<char, int>>& frecuencias);

#endif //B4_ORDENARPORFRECUENCIA_METODOS_H
