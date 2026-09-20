# Sesión 7B — Vectores: Strings, búsqueda y ordenamiento

**Curso:** CS6003 Programación II — Laboratorio  
**Unidad 4:** Vectores en C++  
**Logro:** Crear programas utilizando vectores con lógica avanzada sobre strings y ordenamiento.

---

## Ejercicios

### [B1 — PalindromoMayorLongitud](./B1_PalindromoMayorLongitud/)

Leer **N strings** en un vector, **eliminar las cadenas en las posiciones pares** y encontrar la **cadena palíndroma con la mayor longitud** entre las restantes.

**Ejemplo:**
```
N = 4
Entrada: casa, abcba, juauj, aaaa
Vector después de eliminar posiciones pares: abcba, aaaa
Respuesta: abcba
```

> **Nota:** Se considera posición par: 0, 2, 4, ...

---

### [B2 — GestorEstrellas](./B2_GestorEstrellas/)

Las estrellas se clasifican según su **tipo/clase espectral** en: `O, B, A, F, G, K, M`.

Escribir un programa que genere un **vector de nombres de estrellas** y otro **vector de tipos de estrella** (vectores paralelos). El programa debe implementar un **menú** con las siguientes operaciones:

1. **Borrar** una estrella y su correspondiente tipo (en ambos vectores).
2. **Añadir** una estrella y su tipo (en ambos vectores).
3. **Buscar** una estrella e imprimir su nombre y tipo.
4. **Ordenar** alfabéticamente el vector de nombres de estrellas, actualizando también el vector de tipos en el mismo orden para no perder la correspondencia.

> Utilizar la tabla de estrellas/tipos provista en la sesión.

---

### [B3 — ParesConSumaMayorAlPromedio](./B3_ParesConSumaMayorAlPromedio/)

Leer **N números** y almacenarlos en un vector.  
Crear un **nuevo vector sin elementos repetidos** e imprimir todas las **parejas de números cuya suma sea mayor al promedio** del vector inicial.

**Ejemplo:**
```
N = 6, números: 1 2 3 3 5 5
Promedio: 3.16
Números sin repetidos: 1 2 3 5
Pares con suma > promedio: 1-3, 1-5, 2-3, 2-5, 3-5
```

---

### [B4 — OrdenarPorFrecuencia](./B4_OrdenarPorFrecuencia/)

Dado **N caracteres**, imprimir los caracteres en **orden ascendente según su frecuencia** en el vector (el que menos se repite va primero).

**Ejemplo:**
```
Entrada: a, a, b, a, c, c, c, d
Letras no repetidas: c, a, b
Su orden original: a, a, a, b, c, c, d
Respuesta: a, c, b, d
```

> **Nota:** Se puede emplear `pair` de la STL para asociar cada carácter con su frecuencia.
