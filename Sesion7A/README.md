# Sesión 7A — Vectores: Operaciones básicas (CRUD)

**Curso:** CS6003 Programación II — Laboratorio  
**Unidad 4:** Vectores en C++  
**Logro:** Crear programas utilizando vectores con operaciones básicas.

---

## Ejercicios

### [A1 — VectorInverso](./A1_VectorInverso/)

Escribir un programa que permita leer **N números**, los almacene en un vector y los muestre en **forma inversa**.

---

### [A2 — BorrarMultiplosDeTres](./A2_BorrarMultiplosDeTres/)

Escribir un programa que permita crear un vector con **N enteros con valores aleatorios entre el 1 y el 30**.

1. Imprima el vector original.
2. Borre todos aquellos que sean **múltiplos de 3**.
3. Muestre el vector modificado.

---

### [A3 — EstadisticasVector](./A3_EstadisticasVector/)

Escribir un programa que almacene **N números positivos (del 0 al 99) generados aleatoriamente** en un vector.  
Deberá crearse **3 funciones** que realicen los siguientes cálculos:

1. Imprimir el vector.
2. Calcular el **promedio** de todos los números del vector.
3. Calcular la **suma de todos los números menores a 70**.
4. Generar un **nuevo vector** que almacene para cada número la diferencia entre el promedio y el número.

---

### [A4 — OperacionesParesImpares](./A4_OperacionesParesImpares/)

Escribir un programa que almacene **N números positivos (del 1 al 10) generados aleatoriamente** en un vector.  
Deberán crearse **3 funciones** que realicen los siguientes cálculos:

1. La **multiplicación de todos los números impares**.
2. La **suma de todos los números pares**.
3. Generar un **nuevo vector** con los valores que se encuentren en **posiciones múltiplo de 3** (incluyendo la posición 0).

---

### [A5 — FrecuenciaASCII](./A5_FrecuenciaASCII/)

La tabla de caracteres ASCII asigna a cada carácter un código del 0 al 255 (código ASCII).  
Al realizar el *typecasting* de un `char` a `int` se puede verificar, por ejemplo, que `'A'` tiene código ASCII 65.

Escribir un programa que:
1. Lea un texto ingresado por el usuario.
2. Usando un vector, **cuente las veces que se repite cada carácter** del texto leído.

> **Pista:** Usa un vector de tamaño 256 indexado por el código ASCII de cada carácter.
