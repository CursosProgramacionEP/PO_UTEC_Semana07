//
// Created by Carlos Palomino Vidal on 20/09/26.
//

#ifndef B2_GESTORESTRELLAS_METODOS_H
#define B2_GESTORESTRELLAS_METODOS_H
#include <vector>
#include <string>

void agregarEstrella(std::vector<std::string>& nombres, std::vector<std::string>& tipos);
void borrarEstrella(std::vector<std::string>& nombres, std::vector<std::string>& tipos);
void buscarEstrella(const std::vector<std::string>& nombres, const std::vector<std::string>& tipos);
void ordenarEstrellas(std::vector<std::string>& nombres, std::vector<std::string>& tipos);
void imprimirEstrellas(const std::vector<std::string>& nombres, const std::vector<std::string>& tipos);




#endif //B2_GESTORESTRELLAS_METODOS_H
