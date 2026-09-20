//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#ifndef B3_PARESCONSUMAMAYORALPROMEDIO_METODOS_H
#define B3_PARESCONSUMAMAYORALPROMEDIO_METODOS_H

#include <vector>

void llenarVector(std::vector<int>& v, int n);
void imprimirVector(const std::vector<int>& v);
double calcularPromedio(const std::vector<int>& v);
std::vector<int> obtenerSinRepetidos(const std::vector<int>& v);
void imprimirParejasMayorPromedio(const std::vector<int>& sinRepetidos, double promedio);

#endif //B3_PARESCONSUMAMAYORALPROMEDIO_METODOS_H
