# 🔁 Estructuras Repetitivas en C  

Las estructuras repetitivas, también llamadas **bucles o ciclos**, permiten que un bloque de instrucciones se ejecute múltiples veces mientras se cumpla una condición determinada. Constituyen una de las herramientas más importantes en la programación estructurada, ya que permiten automatizar tareas, procesar grandes volúmenes de datos, realizar cálculos iterativos y optimizar el tiempo de ejecución de un programa.

De acuerdo con *Martínez y Pineda (UNAM, 2025)*, las estructuras repetitivas representan un mecanismo esencial para resolver problemas en los cuales se necesita repetir acciones de forma controlada. Sitios como *GeeksforGeeks*, *Newtum*, *JDoodle* y *W3Schools* explican que los bucles permiten implementar procesos eficientes, reduciendo código innecesario y facilitando operaciones complejas que de otro modo serían inviables mediante instrucciones secuenciales.

En C existen tres estructuras repetitivas principales:

- **while**
- **for**
- **do–while**

Cada una de ellas tiene un propósito particular, una sintaxis propia y una forma distinta de controlar la repetición del bloque de instrucciones.

---

# 📘 1. Estructura `while`

## 💡 Definición  

El ciclo `while` es una estructura repetitiva que ejecuta un conjunto de instrucciones **mientras una condición lógica sea verdadera**. Antes de iniciar cada iteración, el programa evalúa la condición; si esta se cumple, se ejecuta el cuerpo del bucle, y el proceso continúa hasta que la condición resulte falsa.

Según *W3Schools* y *GeeksforGeeks*, este tipo de bucle se conoce como **bucle de condición inicial**, pues verifica la condición *antes* de ejecutar las instrucciones. Esto garantiza un control riguroso, ya que es posible que el ciclo nunca se ejecute si la condición es falsa desde el principio.

## 🛠 Usos comunes  

El ciclo `while` se utiliza cuando:
- Se desconoce la cantidad exacta de repeticiones.  
- La repetición depende del valor de una variable que cambia en cada iteración.  
- Se espera que el usuario ingrese un dato válido y se pregunta repetidamente hasta lograrlo.  
- Se deben procesar datos mientras exista un criterio lógico que lo permita.  

Es ideal para operaciones dependientes de condiciones dinámicas, como lecturas desde archivos, menús interactivos o cálculos que requieren validar un estado antes de continuar.

## 🧱 Sintaxis  

```c
while (condición) {
    // instrucciones mientras la condición sea verdadera
}
```

## 📌 Características importantes  

- Puede ejecutar **cero o más** iteraciones.  
- Si la condición nunca cambia, puede provocar un **bucle infinito**.  
- Es una opción flexible para condiciones complejas.  

## Ejemplo del Uso del Bucle While

#### Realizar un programa que presente los 10 primeros numero naturales, en orden ascendente de (1-10).

## Diagrama de Flujo

<img width="727" height="626" alt="Captura de pantalla 2025-12-07 203737" src="https://github.com/user-attachments/assets/889f627d-1e4e-4798-a4d8-1fa3c38978ab" />

## Codificación en C:

```c
#include <stdio.h>
int main()
{
    int i;
    i = 1;
    while (i <= 10)
    {
        printf("%i \n", i);
        i++;
    }
} 
```

Este programa es muy simple, solo presenta por pantalla los 10 primeros numeros naturales, del 1 al 10, mediante el bucle repetitivo while, si la condicion se cumple, el bucle se sigue repitiendo, pero si en algun momento es falsa, solo salta fuera del bucle a continuar con el algoritmo, que en este caso, es el final del codigo.

## Prueba de Escritorio:

<img width="474" height="235" alt="Captura de pantalla 2025-12-07 203145" src="https://github.com/user-attachments/assets/c4254925-fbbf-4138-a320-9e94f6f5fe55" />

---

# 📘 2. Estructura `for`

## 💡 Definición  

El ciclo `for` es una estructura repetitiva diseñada para realizar iteraciones controladas que requieren un número determinado de repeticiones. Está formado por tres expresiones fundamentales:

1. **Inicialización**  
2. **Condición de continuación**  
3. **Actualización del contador**

Como explican *Newtum* y *JDoodle*, esta estructura es muy útil cuando se conoce por adelantado el número de veces que el ciclo debe repetirse. Además, agrupa sus tres componentes en una sola línea, lo cual permite un código más compacto y legible.

## 🛠 Usos comunes  

Se utiliza en situaciones como:
- Recorrer un rango numérico.  
- Iterar sobre arreglos o listas.  
- Realizar operaciones repetitivas con un contador.  
- Ejecutar procesos de forma predecible y estructurada.  
- Algoritmos matemáticos y computacionales (sumatorias, factoriales, secuencias, etc.).  

## 🧱 Sintaxis  

```c
for (inicialización; condición; actualización) {
    // instrucciones que se repiten
}
```

## 📌 Características importantes  

- Es ideal cuando se conoce la cantidad exacta de repeticiones.  
- Su estructura compacta mejora la lectura del código.  
- Evita errores de actualización del contador, ya que lo incluye en su sintaxis.  
- Es más eficiente al recorrer estructuras de datos.

## Ejemplo de Uso del Bucle Repetitivo For:

#### Realizar un programa que presente los 10 primeros numero naturales, en orden ascendente de (1-10).

## Diagrama de Flujo:

<img width="535" height="536" alt="Captura de pantalla 2025-12-07 203821" src="https://github.com/user-attachments/assets/b361ecb1-89fa-4520-b7fa-1744cb4c8e93" />

## Codificación en C:

```c
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%i \n", i);
    }
}
```
Este programa es muy simple, solo presenta por pantalla los 10 primeros numeros naturales, del 1 al 10, mediante el bucle repetitivo for, pero tiene una pequeña, gran diferencia, con la estructura while, la cual es, que tanto la inicializacion, la condicion y el incremento, se encuentran ubicados en la misma linea, lo que ayuda un montón, a la estructura del algoritmo. Ademas, el codigo funciona de la misma manera que en el bucle while.

## Prueba de Escritorio:

<img width="474" height="235" alt="Captura de pantalla 2025-12-07 203145" src="https://github.com/user-attachments/assets/4be4e8a6-bf48-4619-b906-cad5a2cbb68a" />

---

# 📘 3. Estructura `do–while`

## 💡 Definición  

El ciclo `do–while` es similar al `while`, pero con una diferencia fundamental:  
**primero ejecuta el bloque de instrucciones y luego evalúa la condición.**

Esto garantiza que el cuerpo del ciclo se ejecute **al menos una vez**, independientemente del valor inicial de la condición. *W3Schools* destaca que este bucle se usa cuando se necesita una ejecución mínima garantizada, como en menús, validaciones iniciales o procesos interactivos con el usuario.

## 🛠 Usos comunes  

Se utiliza cuando:
- Se necesita ejecutar el ciclo al menos una vez.  
- El usuario debe ingresar un dato y se debe validar posteriormente.  
- Se implementan menús que se repiten hasta que el usuario elija salir.  
- Se debe realizar una acción antes de comprobar la condición.  

## 🧱 Sintaxis  

```c
do {
    // instrucciones que se ejecutan al menos una vez
} while (condición);
```

## 📌 Características importantes  

- Garantiza **una ejecución inicial obligatoria**.  
- Es útil en estructuras de interacción con el usuario.  
- Puede provocar bucles infinitos si no se controla adecuadamente.  
- Representa un bucle de condición **final**, no inicial.

## Ejemplo de Uso del Bucle Repetitivo Do-While:

#### Realizar un programa que presente los 10 primeros numero naturales, en orden ascendente de (1-10).

## Diagrama de Flujo:

<img width="682" height="658" alt="Captura de pantalla 2025-12-07 203755" src="https://github.com/user-attachments/assets/26e1a953-bdd1-4d60-b1aa-10ea90f65609" />

## Codificación en C:
```c
#include <stdio.h>
int main()
{
    int i;
    i = 1;
    do
    {
        printf("%i \n", i);
        i++;
    } while (i <= 10);
}
```
Este programa es muy simple, solo presenta por pantalla los 10 primeros numeros naturales, del 1 al 10, mediante el bucle repetitivo do-while, siendo ua variante, muy utilizada del while, debido a que su sintaxis, obliga al programa a ejecutarse, por lo menos una vez, siendo muy aplicada, al momento de realizar calculos de notas o de diferentes ejercicios que necesiten un bucle repetitivo.

## Prueba de Escritorio:

<img width="474" height="235" alt="Captura de pantalla 2025-12-07 203145" src="https://github.com/user-attachments/assets/4be4e8a6-bf48-4619-b906-cad5a2cbb68a" />

---

# 🧠 Comparación general de los tres bucles

| Estructura | Evalúa antes o después | ¿Puede ejecutarse 0 veces? | ¿Cuándo usarla? |
|-----------|------------------------|----------------------------|------------------|
| **while** | Evalúa **antes** | Sí | Cuando no se conoce cuántas veces se repetirá |
| **for** | Evalúa **antes** | Sí | Cuando se conoce el número exacto de iteraciones |
| **do–while** | Evalúa **después** | No (mínimo 1 vez) | Menús, validaciones o procesos que requieren ejecución inicial |

---

# 🧩 Importancia de las estructuras repetitivas  

Las estructuras repetitivas permiten:

- Automatizar procesos repetitivos.  
- Reducir el código redundante.  
- Implementar cálculos iterativos complejos.  
- Trabajar con grandes volúmenes de datos.  
- Crear menús, bucles interactivos y simulaciones.  
- Optimizar el rendimiento del programa.  

Sin los bucles, los programas serían extremadamente largos, rígidos e incapaces de manejar tareas repetidas de manera eficiente.

---
<div align="center">

[![📊 Ejercicio Combinado en Java](https://img.shields.io/badge/📊Ejercicio_Combinado_en_Java_-green?style=for-the-badge)](./Ejercicio_Combinado.md)

</div> 

<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-red?style=for-the-badge)](../Contenidos.md)

</div>

