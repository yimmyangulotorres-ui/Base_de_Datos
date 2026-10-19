# 🧩 Programación Modular

La **programación modular** es una metodología de diseño que permite organizar un programa dividiéndolo en partes más pequeñas y manejables denominadas *módulos*. Cada módulo representa una unidad lógica del sistema, encargada de resolver una tarea específica dentro del problema general. Este enfoque es fundamental en la programación estructurada, ya que reduce la complejidad, mejora la claridad del código y facilita su mantenimiento y reutilización.

A medida que los programas crecen en tamaño y funcionalidad, se vuelve imprescindible adoptar estrategias que permitan controlar dicha complejidad. La programación modular responde a esta necesidad al promover la separación de responsabilidades, evitando que todo el código se concentre en un único bloque difícil de entender y depurar.

---

## 🎯 Concepto de Programación Modular

La programación modular consiste en **descomponer un problema grande en subproblemas más pequeños**, los cuales pueden resolverse de manera independiente. Cada uno de estos subproblemas se implementa como un módulo, y la integración de todos ellos permite obtener la solución completa.

Desde un punto de vista académico, este enfoque fomenta el pensamiento analítico y estructurado, ya que obliga al programador a identificar claramente las tareas que debe realizar el programa y a definir cómo se relacionan entre sí.

En el lenguaje C, la modularidad se implementa principalmente mediante **funciones**, las cuales encapsulan instrucciones específicas que pueden ser invocadas desde distintas partes del programa.

---

## 🧠 Importancia de la Modularidad

La programación modular es esencial porque:

- Permite **comprender mejor el programa**, al dividirlo en secciones lógicas.
- Facilita la **detección y corrección de errores**, ya que cada módulo puede probarse por separado.
- Promueve la **reutilización de código**, evitando duplicar instrucciones.
- Mejora la **organización del software**, haciendo el código más legible y ordenado.
- Favorece el **trabajo colaborativo**, permitiendo que diferentes personas desarrollen distintos módulos.

Este enfoque es ampliamente utilizado tanto en el ámbito académico como en el desarrollo profesional de software.

---

## 📦 Concepto de Módulo

Un **módulo** es una unidad funcional del programa que realiza una tarea bien definida. En C, un módulo suele representarse mediante una función, aunque también puede incluir archivos separados (`.h` y `.c`) en proyectos de mayor escala.

Cada módulo debe cumplir con las siguientes características:

- Tener una **responsabilidad única**.
- Poseer **entradas claramente definidas** (parámetros).
- Producir una **salida específica** (valor de retorno o efecto controlado).
- Ser **independiente** del resto del programa, en la medida de lo posible.

---

## 🔧 Funciones como Base de la Programación Modular

Una **función** es un bloque de código que encapsula un conjunto de instrucciones bajo un nombre específico. Las funciones permiten dividir el programa en partes reutilizables y estructuradas.

Una función en C puede:

- Recibir **parámetros** (datos de entrada).
- Ejecutar un conjunto de instrucciones.
- Retornar un **valor** al programa que la invocó (opcional).

---

## 🛠 Estructura General de un Programa Modular en C

Un programa modular en C se compone de:

1. **Prototipos de funciones**
2. **Función principal `main()`**
3. **Definición de las funciones**

### 📌 Ejemplo de estructura general

```c
#include <stdio.h>

// Prototipo de la función
int sumar(int a, int b);

int main() {
    int resultado;

    // Llamada a la función
    resultado = sumar(5, 3);

    printf("El resultado es: %d", resultado);

    return 0;
}

// Definición de la función
int sumar(int a, int b) {
    int suma;
    suma = a + b;
    return suma;
}

```
## 🔬 Ejemplo de Programación Modular  
### Paso de Parámetros por Valor y por Referencia

Para comprender de manera práctica la diferencia entre el **paso de parámetros por valor** y el **paso de parámetros por referencia**, se presenta a continuación un ejemplo aplicado a un contexto realista:  
el **control y ajuste de la temperatura de un sistema**.

---

### 📌 Descripción del problema

Un sistema registra una temperatura inicial.  
Primero, se desea **calcular un ajuste teórico** de la temperatura (sin modificar el valor original).  
Posteriormente, se requiere **ajustar realmente la temperatura del sistema**, modificando el valor almacenado en memoria.

Este escenario permite observar claramente cuándo un valor se modifica solo de forma local y cuándo se altera directamente la variable original.

---

## 🧩 Función con paso de parámetro por valor

### 📖 Explicación conceptual

En el paso por valor, la función recibe **una copia del dato original**.  
Cualquier modificación realizada dentro de la función **no afecta** a la variable original declarada en `main()`.

---

### 📄 Código en C

```c
#include <stdio.h>

// Paso por valor
float calcularAjuste(float temperatura) {
    temperatura = temperatura + 5.0;
    return temperatura;
}

int main() {
    float temperaturaSistema = 25.0;
    float temperaturaCalculada;

    temperaturaCalculada = calcularAjuste(temperaturaSistema);

    printf("Temperatura original del sistema: %.2f\n", temperaturaSistema);
    printf("Temperatura calculada (ajuste teórico): %.2f\n", temperaturaCalculada);

    return 0;
}
```
Este ejercicio ejemplifica el **paso de parámetros por valor** en la programación modular. La función recibe una **copia del valor original** de la variable, por lo que cualquier modificación realizada dentro de la función no afecta al dato almacenado en la función principal.

En el programa, la temperatura inicial es enviada a la función únicamente para realizar un **cálculo teórico**, devolviendo un nuevo valor ajustado sin alterar la temperatura original. Al finalizar la ejecución, se comprueba que la variable inicial mantiene su valor, lo que confirma que el paso por valor es adecuado para simulaciones, validaciones y cálculos temporales donde no se requiere modificar los datos originales.

---
## 🔁 Paso de Parámetro por Referencia

### 📖 Explicación

En el paso por referencia se envía la **dirección de memoria** de la variable, permitiendo que la función modifique directamente el valor original. En el lenguaje C, este mecanismo se implementa mediante el uso de **punteros**, los cuales permiten acceder y manipular directamente los datos almacenados en memoria.

Este tipo de paso resulta especialmente útil cuando se requiere que una función actualice valores que deben conservarse después de su ejecución, optimizando además el uso de memoria al evitar copias innecesarias de datos.

---

### 📄 Código en C

```c
#include <stdio.h>

void ajustarTemperatura(float *temperatura) {
    *temperatura = *temperatura + 5.0;
}

int main() {
    float temperaturaSistema = 25.0;

    ajustarTemperatura(&temperaturaSistema);

    printf("Temperatura ajustada: %.2f\n", temperaturaSistema);

    return 0;
}
```
Este ejercicio demuestra el uso del **paso de parámetros por referencia** en la programación modular utilizando el lenguaje C. Su objetivo principal es mostrar cómo una función puede **modificar directamente el valor de una variable definida en la función principal**, a través del envío de su dirección de memoria.

El programa inicia declarando una variable denominada `temperaturaSistema`, la cual almacena un valor inicial que representa la temperatura registrada por el sistema. Posteriormente, esta variable es enviada a la función `ajustarTemperatura`, no como un valor común, sino como una **dirección de memoria**, utilizando el operador `&`.

Dentro de la función, el parámetro recibido es un **puntero**, lo que permite acceder directamente al contenido de la variable original mediante el operador de indirección (`*`). Al incrementar el valor apuntado por el puntero, el cambio se refleja inmediatamente en la variable `temperaturaSistema`, ya que ambas hacen referencia al mismo espacio en memoria.

Finalmente, al regresar a la función `main`, se muestra en pantalla la temperatura ajustada, comprobando que el valor original fue efectivamente modificado. Este comportamiento confirma el funcionamiento correcto del paso por referencia y evidencia su utilidad en situaciones donde se requiere actualizar datos reales del sistema.

---

<div align="center">

[![📊 Programación Modular](https://img.shields.io/badge/📊Arreglos_en_C-green?style=for-the-badge)](./Arreglos.md)

</div> 

<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-red?style=for-the-badge)](../contenidos.md)

</div>


