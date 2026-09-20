# PO_UTEC_Semana07

Semana 07 — **Unidad 4: Vectores en C++**  
Cada carpeta representa un ejercicio independiente.

---

## 📚 Sesiones de Laboratorio

| Sesión | Descripción | Ejercicios |
|--------|-------------|------------|
| [**7A** — Operaciones básicas (CRUD)](./Sesion7A/README.md) | Crear, leer, actualizar y borrar elementos en vectores. Uso de funciones y tabla ASCII. | A1 · A2 · A3 · A4 · A5 |
| [**7B** — Strings, búsqueda y ordenamiento](./Sesion7B/README.md) | Vectores de strings, palíndromos, vectores paralelos, `pair` y ordenamiento por frecuencia. | B1 · B2 · B3 · B4 |

---

## Vectores en C++ (`std::vector`)

`std::vector` es un contenedor dinámico de la STL que permite almacenar elementos del mismo tipo en memoria contigua.

### Conceptos clave

- **Tamaño dinámico**: crece o disminuye durante la ejecución.
- **Acceso rápido por índice**: `O(1)` con `vector[i]`.
- **Inserción al final eficiente**: `push_back` suele ser `O(1)` amortizado.
- **Integración con algoritmos STL**: `sort`, `find`, `count`, etc.

### Operaciones base

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> notas;          // Vector vacío
    notas.push_back(15);        // Agregar al final
    notas.push_back(18);
    notas.push_back(20);

    cout << "Primer elemento: " << notas[0] << "\n";
    cout << "Cantidad: " << notas.size() << "\n";

    notas.pop_back();           // Elimina el último elemento
    return 0;
}
```

### Recorrer un vector

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // 1) Con índices
    for (size_t i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // 2) Rango for (recomendado)
    for (int x : v) {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}
```

### Ejemplo con algoritmo STL (`sort`)

```cpp
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> datos = {7, 2, 9, 1, 5};
    sort(datos.begin(), datos.end());

    for (int n : datos) {
        cout << n << " ";
    }
    // Salida: 1 2 5 7 9
    return 0;
}
```

### Buenas prácticas

- Validar índices antes de acceder (`at()` lanza excepción si hay error de rango).
- Usar `const vector<T>&` en funciones para evitar copias innecesarias.
- Preferir `emplace_back` cuando se construyen objetos complejos en el vector.
