//
// Created by Carlos Palomino Vidal on 20/09/26.
//
#ifndef A3_ESTADISTICASVECTOR_METODOS_H
#define A3_ESTADISTICASVECTOR_METODOS_H

#include <vector>

// Nota: using namespace std NO va en headers — contamina el namespace global
void imprimirVector(const std::vector<int>& v);
double calcularPromedio(const std::vector<int>& v);
int calcularSumaMenoresA70(const std::vector<int>& v);
std::vector<double> generarVectorDiferencias(const std::vector<int>& v, double promedio);
void llenarVector(std::vector<int>& v, int tamano);



#endif //A3_ESTADISTICASVECTOR_METODOS_H
