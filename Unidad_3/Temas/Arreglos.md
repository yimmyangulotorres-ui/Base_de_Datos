# 📊 Arreglos en Programación en C

Los **arreglos** constituyen una de las estructuras de datos más importantes dentro de la programación estructurada. Permiten almacenar **conjuntos de datos homogéneos** bajo un mismo identificador, facilitando la organización, el acceso y el procesamiento eficiente de grandes cantidades de información.

En el lenguaje **C**, los arreglos se almacenan en posiciones consecutivas de memoria, lo que permite acceder a cada elemento mediante un **índice numérico**, comenzando siempre desde la posición **0**. Esta característica los hace especialmente útiles cuando se combinan con **estructuras repetitivas**, ya que permiten recorrer y manipular los datos de forma sistemática.

---

## 🎯 Concepto General de Arreglo

Un **arreglo** es una estructura de datos que agrupa múltiples valores del mismo tipo en una sola variable. Cada valor ocupa una posición específica dentro del arreglo y puede ser consultado o modificado utilizando su índice correspondiente.

Las principales ventajas del uso de arreglos son:

- Reducción del número de variables en un programa.
- Organización lógica de la información.
- Facilidad para aplicar ciclos repetitivos.
- Optimización del uso de memoria y del código.
- Mayor claridad y orden en la estructura del programa.

---

## 🧩 Arreglos Unidimensionales

### 📖 Definición

Un **arreglo unidimensional** es una estructura lineal que almacena datos en una sola dimensión. Es decir, los elementos se organizan uno tras otro, formando una lista o secuencia.

Este tipo de arreglo es el más sencillo y el más utilizado, especialmente cuando se trabaja con conjuntos simples de datos relacionados entre sí.

---

### 📌 Usos comunes

- Almacenar calificaciones de estudiantes.
- Guardar edades, precios o cantidades.
- Registrar resultados de operaciones repetitivas.
- Manejar listas de datos ingresados por el usuario.

---

### 📄 Sintaxis general en C

```c
tipo_dato nombreArreglo[tamaño];
```
## 🧪 Ejemplo Práctico: Registro de Calificaciones

## 📖 Problema
Un docente necesita registrar las calificaciones de 5 estudiantes en una evaluación.
El programa debe permitir ingresar cada nota, almacenarlas en un arreglo unidimensional y luego mostrarlas en pantalla una por una

---

Ejemplo
```c
#include <stdio.h>

int main() {
    int notas[5];
    int i;

    // Entrada de datos
    for (i = 0; i < 5; i++) {
        printf("Ingrese la nota %d: ", i + 1);
        scanf("%d", &notas[i]);
    }

    // Salida de datos
    printf("\nNotas ingresadas:\n");
    for (i = 0; i < 5; i++) {
        printf("Nota %d: %d\n", i + 1, notas[i]);
    }

    return 0;
}
```
---

### ⚙ Funcionamiento ⚙
El programa utiliza un arreglo unidimensional, también llamado vector, para almacenar una lista de valores del mismo tipo.
Mediante una estructura repetitiva for, se solicita al usuario ingresar cada nota y se guarda en una posición específica del arreglo.
Posteriormente, otro ciclo permite recorrer el arreglo para mostrar las calificaciones almacenadas.

Este tipo de estructura es ideal para manejar listas simples de datos, como notas, edades, precios o cantidades.

---

# 📊 Arreglos Bidimensionales en Programación

Los **arreglos bidimensionales** permiten organizar información en dos dimensiones, generalmente interpretadas como **filas** y **columnas**, formando estructuras similares a tablas o matrices. Son una extensión directa de los arreglos unidimensionales.

En el lenguaje C, los datos se almacenan en memoria de forma contigua por filas y se accede a cada elemento mediante dos índices.

---

## 🎯 Concepto

Un arreglo bidimensional es una colección de datos del mismo tipo organizada en una estructura de filas y columnas. Cada elemento se identifica mediante dos posiciones: una fila y una columna.

Este tipo de estructura fortalece el uso de **ciclos anidados** y el pensamiento lógico del programador.

---

## 📌 Usos Comunes

- Tablas de calificaciones.
- Matrices matemáticas.
- Registros organizados por categorías.
- Estadísticas.
- Coordenadas cartesianas.

---

## 🧾 Sintaxis General en C

```c
tipo_dato nombreArreglo[filas][columnas];
```

## 🧪 Ejemplo Práctico: Registro de Calificaciones

## 📖 Problema

Registrar las calificaciones de **3 estudiantes** en **2 materias** y mostrarlas en forma de tabla utilizando un **arreglo bidimensional** en lenguaje C.

---

## 📄 Código en C

```c
#include <stdio.h>

int main() {
    int calificaciones[3][2];
    int i, j;

    // Entrada de datos
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Ingrese la calificacion del estudiante %d en la materia %d: ",
                   i + 1, j + 1);
            scanf("%d", &calificaciones[i][j]);
        }
    }

    // Salida de datos
    printf("\nTabla de calificaciones:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", calificaciones[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
### ⚙ Funcionamiento ⚙
El programa emplea un arreglo bidimensional, que funciona como una tabla de filas y columnas.
Cada fila representa a un estudiante y cada columna corresponde a una materia.
Mediante dos ciclos anidados, se ingresan los datos y posteriormente se recorren para su visualización.

Este tipo de arreglo es muy utilizado en registros tabulares, como notas, inventarios o reportes académicos.

---

# 📦 Arreglos Tridimensionales en Programación

Los **arreglos tridimensionales** amplían el concepto de los arreglos bidimensionales al incorporar una **tercera dimensión**, lo que permite organizar la información en **capas**, además de filas y columnas.

Este tipo de estructura es útil cuando los datos dependen de **tres variables diferentes**, por ejemplo: ciudad, día y hora; producto, mes y sucursal; o experimento, prueba y medición.

En el lenguaje C, los arreglos tridimensionales también se almacenan en memoria de forma contigua y se accede a cada elemento mediante **tres índices**.

---

## 🎯 Concepto

Un arreglo tridimensional es una estructura de datos que almacena información en tres dimensiones. Cada elemento se identifica mediante tres posiciones:  
- Primera dimensión  
- Segunda dimensión  
- Tercera dimensión  

Esto permite representar datos organizados por niveles o capas, fortaleciendo el uso de **ciclos anidados múltiples** y el pensamiento lógico avanzado.

---

## 📌 Usos Comunes

- Registro de datos por periodos de tiempo.
- Simulación de fenómenos físicos.
- Procesamiento de imágenes.
- Análisis estadístico multidimensional.
- Sistemas de monitoreo y control.
- Almacenamiento de información por ubicación, fecha y categoría.

---

## 🧾 Sintaxis General en C

```c
tipo_dato nombreArreglo[dimension1][dimension2][dimension3];
```
## 🧪 Ejemplo Práctico: Registro de Calificaciones

## 📖 Problema

Registrar las temperaturas de 2 ciudades durante 3 días, en 2 horarios distintos, utilizando un arreglo tridimensional en lenguaje C.
El programa debe permitir ingresar los datos y luego mostrarlos en pantalla

---

## 📄 Código en C

```c
#include <stdio.h>

int main() {
    float temperaturas[2][3][2];
    int ciudad, dia, horario;

    // Entrada de datos
    for (ciudad = 0; ciudad < 2; ciudad++) {
        for (dia = 0; dia < 3; dia++) {
            for (horario = 0; horario < 2; horario++) {
                printf("Ciudad %d, Dia %d, Horario %d: ",
                       ciudad + 1, dia + 1, horario + 1);
                scanf("%f", &temperaturas[ciudad][dia][horario]);
            }
        }
    }

    // Salida de datos
    printf("\nRegistro de temperaturas:\n");
    for (ciudad = 0; ciudad < 2; ciudad++) {
        for (dia = 0; dia < 3; dia++) {
            for (horario = 0; horario < 2; horario++) {
                printf("Ciudad %d - Dia %d - Horario %d: %.2f\n",
                       ciudad + 1, dia + 1, horario + 1,
                       temperaturas[ciudad][dia][horario]);
            }
        }
    }

    return 0;
}
```
### ⚙ Funcionamiento ⚙
El programa utiliza un arreglo tridimensional, el cual permite manejar datos organizados en tres niveles.
En este caso:

- Primer nivel: ciudades

- Segundo nivel: días

- Tercer nivel: horarios

Mediante tres ciclos anidados, se ingresan las temperaturas y luego se recorren para mostrarlas.
Este tipo de estructura se aplica en sistemas más complejos, como estadísticas, simulaciones o registros históricos.

---
<div align="center">

[![📊 Programación Modular](https://img.shields.io/badge/📊Difilcutades_Principales-green?style=for-the-badge)](../Difilcultades.md)

</div> 

---
<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-red?style=for-the-badge)](../contenidos.md)

</div>

