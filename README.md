---

### **Evaluación de Matrices en C++**

#### **Ejercicio 1: Declaración e inicialización de matrices**
**Instrucción:**  
Declara e inicializa una matriz de 3x3 con los números del 1 al 9. Utiliza un bucle para imprimir sus elementos en formato de tabla.

**Salida esperada:**
```
1 2 3
4 5 6
7 8 9
```

---

#### **Ejercicio 2: Lectura y escritura de una matriz**
**Instrucción:**  
Declara una matriz de 2x2. Solicita al usuario que ingrese los valores de la matriz y luego imprímela en formato de tabla.

**Entrada esperada:**
```
Introduce los elementos de la matriz:
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [1][0]: 3
Elemento [1][1]: 4
```

**Salida esperada:**
```
La matriz es:
1 2
3 4
```

---

#### **Ejercicio 3: Suma de dos matrices**
**Instrucción:**  
Crea dos matrices de 2x2 inicializadas en el código. Suma sus elementos y almacena el resultado en una tercera matriz. Imprime la matriz resultante.

**Matrices inicializadas:**
```cpp
int matrizA[2][2] = {{1, 2}, {3, 4}};
int matrizB[2][2] = {{5, 6}, {7, 8}};
```

**Salida esperada:**
```
La matriz suma es:
6 8
10 12
```

---

#### **Ejercicio 4: Multiplicación de matrices**
**Instrucción:**  
Dadas las matrices siguientes, calcula su producto y muestra la matriz resultante.

**Matrices inicializadas:**
```cpp
int matrizA[2][2] = {{1, 2}, {3, 4}};
int matrizB[2][2] = {{2, 0}, {1, 2}};
```

**Salida esperada:**
```
El producto de las matrices es:
4 4
10 8
```

---

#### **Ejercicio 5: Transposición de una matriz**
**Instrucción:**  
Solicita al usuario una matriz de 3x2. Transpón la matriz y muestra la transpuesta.

**Entrada esperada:**
```
Introduce los elementos de la matriz:
Elemento [0][0]: 1
Elemento [0][1]: 2
Elemento [1][0]: 3
Elemento [1][1]: 4
Elemento [2][0]: 5
Elemento [2][1]: 6
```

**Salida esperada:**
```
La matriz transpuesta es:
1 3 5
2 4 6
```

---

#### **Ejercicio 6: Determinante de una matriz 2x2**
**Instrucción:**  
Calcula el determinante de una matriz 2x2. Los valores serán ingresados por el usuario.

**Fórmula para el determinante:**  
\[
\text{det} = (a_{00} \cdot a_{11}) - (a_{01} \cdot a_{10})
\]

**Entrada esperada:**
```
Introduce los elementos de la matriz:
Elemento [0][0]: 4
Elemento [0][1]: 3
Elemento [1][0]: 2
Elemento [1][1]: 1
```

**Salida esperada:**
```
El determinante de la matriz es: -2
```

---

#### **Ejercicio 7: Matriz identidad**
**Instrucción:**  
Genera una matriz identidad de tamaño 3x3 y muéstrala.

**Salida esperada:**
```
Matriz Identidad:
1 0 0
0 1 0
0 0 1
```

---

#### **Criterios de Evaluación**
1. Uso adecuado de bucles anidados.
2. Implementación correcta de las operaciones.
3. Buena presentación de los resultados en formato de tabla.
4. Comentarios explicativos para describir el propósito del código.
