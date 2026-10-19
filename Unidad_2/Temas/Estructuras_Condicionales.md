# 🧩 Estructuras Condicionales en C  

Las estructuras condicionales son uno de los pilares fundamentales de la programación estructurada. Permiten que un programa sea capaz de **analizar situaciones**, **evaluar condiciones lógicas** y **tomar decisiones** que alteren el flujo de ejecución. Gracias a ellas, un algoritmo deja de ser un conjunto rígido y lineal de instrucciones, para convertirse en un sistema flexible capaz de responder dinámicamente según las entradas del usuario o el estado interno del programa.

En palabras de *Martínez y Pineda (UNAM, 2025)*, estas estructuras “representan el momento en el que un programa adquiere la capacidad de reaccionar ante distintas posibilidades”, permitiendo implementar desde validaciones simples hasta procesos complejos basados en reglas. A su vez, plataformas como GeeksforGeeks, W3Schools y Newtum destacan que las estructuras condicionales son indispensables en áreas como el procesamiento de datos, la interacción con el usuario, los sistemas de control y prácticamente cualquier aplicación real.

En C, las estructuras condicionales más utilizadas son:  
- **if**  
- **if–else**  
- **if anidado (else if)**  
- **switch**  

Cada una responde a necesidades específicas y ofrece ventajas según el tipo de decisión que se necesita implementar. A continuación, se presenta una descripción ampliada de cada una, junto con sus usos, características y sintaxis.

---

## 📘 1. La estructura `if`

### 💡 Definición  
El `if` es la estructura condicional más básica y fundamental del lenguaje C. Permite evaluar una condición lógica y, en caso de que sea verdadera, ejecutar un bloque de instrucciones. Si la condición se evalúa como falsa, el bloque simplemente se omite.

De acuerdo con el libro *Introducción a la Programación* (2021), esta sentencia sigue el principio lógico universal:

> **“Si la condición se cumple, entonces ejecuta un conjunto de acciones.”**

Esto permite que un programa responda únicamente cuando realmente es necesario, evitando operaciones innecesarias y controlando el flujo con precisión.

### 🛠 Usos comunes  
El `if` suele utilizarse cuando se requiere verificar una condición puntual, tal como:
- Validar valores ingresados por el usuario (edad, calificaciones, contraseñas, etc.).  
- Comprobar si un valor se encuentra dentro de un rango permitido.  
- Determinar si una variable cumple con un requisito específico.  
- Activar mensajes, cálculos o funciones bajo una única condición.

### 🧱 Sintaxis  

```c
if (condición) {
    // instrucciones si la condición es verdadera
}
```

### 📌 Notas adicionales  
- Solo ejecuta código cuando la condición es verdadera.  
- Es la estructura más utilizada en algoritmos sencillos.  
- Suele representar la primera forma de toma de decisiones en la programación.

### Ejemplo De Uso del If:

El programa pide la edad de una persona y muestra:

* edad >= 18 → “Mayor de Edad"

### Diagrama de Flujo Del Ejercicio:

<img width="631" height="607" alt="Captura de pantalla 2025-12-07 191816" src="https://github.com/user-attachments/assets/d4bb0e75-ad71-4f52-b104-7e29f97afc96" />

### Codificación en C:

```c
#include <stdio.h>

int main() {
    int edad;
    printf("Ingrese su edad: \n");
    scanf("%d", &edad);
    getchar();

    if (edad >= 18) {
        printf("\nEs mayor de edad\n");
    }

    return 0;
}

```

Este programa lo que hace, es pedir al usuario que ingrese su edad y si la condicion que esta dentro del if se cumple, muestra un mensaje en la pantalla, el cual es "Es mayor de Edad", caso contrario, sigue con el resto del algoritmo, en esta ocasion, no hay un sino, en este ejercicio.

### Pruebas de Escritorio: 

<img width="532" height="179" alt="Captura de pantalla 2025-12-07 193113" src="https://github.com/user-attachments/assets/d1720deb-b390-4c13-a758-1e8199356de5" />

---

## 📘 2. La estructura `if–else`

### 💡 Definición  
La estructura `if–else` permite establecer **dos caminos alternativos** en un programa. Cuando la condición del `if` se cumple, se ejecuta un bloque de instrucciones; si no, se ejecuta un segundo bloque definido por `else`.

La UNAM (2025) resalta que esta estructura garantiza que el programa siempre produzca una respuesta ante la condición evaluada, lo cual resulta fundamental en procesos donde se requiere tomar decisiones excluyentes.

### 🛠 Usos comunes  
Se utiliza especialmente en situaciones con dos alternativas posibles:
- Aprobación o reprobación según una nota mínima.  
- Validación de acceso (correcto / incorrecto).  
- Detección de valores positivos o negativos.  
- Verificación de estados lógicos binarios.

### 🧱 Sintaxis  

```c
if (condición) {
    // instrucciones si verdadera
} else {
    // instrucciones si falsa
}
```

### 📌 Ventajas  
- Permite manejar tanto el caso verdadero como el falso.  
- Reduce la ambigüedad en la ejecución del programa.  
- Hace posible implementar sistemas binarios de decisión.

### Ejemplo de Uso del If-Else:

El programa pide la edad de una persona y muestra:

* edad >= 18 → “Mayor de Edad”
* edad < 18 → “Menor de Edad”

### Diagrama de Flujo:

<img width="706" height="608" alt="Captura de pantalla 2025-12-07 191842" src="https://github.com/user-attachments/assets/f8e8ae95-c73f-493c-a7f2-a30f670fe94b" />

### Codificación en C: 

```c
#include <stdio.h>

int main() {
    int edad;
    printf("Ingrese su edad: \n");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("\n Mayor de edad \n");
    } else {
        printf("\n Menor de edad \n");
    }

    return 0;
}

```
Este programa es el mismo que el anterior, pero adaptado a la estructura condicional If-Else, en esta ocasión, el programa, pide al usuario ingresar su edad, luego el programa lee esa edad, y la almacena en una variable de nombre edad, seguidamente, entra a la condición y evalua, si es verdadero, presenta el mensaje, "Es Mayor de Edad" , caso contrario, presenta el mensaje "Es Menor de Edad".


### Pruebas de Escritorio

<img width="532" height="143" alt="imagen" src="https://github.com/user-attachments/assets/cb274ee3-e8d0-487f-b68d-d2f0ef1aff9e" />

---

## 📘 3. If anidado (múltiples decisiones)

### 💡 Definición  
El **if anidado**, también llamado *cadena de if–else if*, permite evaluar múltiples condiciones en secuencia, ejecutando distintos bloques según el valor de la expresión evaluada. Esto resulta útil en situaciones donde existen varias posibilidades mutuamente excluyentes o jerarquías de decisiones.

El uso de estructuras anidadas es común en árboles de decisión, clasificaciones por niveles, selección de opciones o validaciones progresivas.

### 🛠 Usos comunes  
- Clasificar notas (A, B, C, D, F).  
- Determinar rangos de valores.  
- Menús interactivos con varias opciones numéricas.  
- Validaciones que requieren filtros sucesivos.

### 🧱 Sintaxis  

```c
if (condición1) {
    // bloque 1
} else if (condición2) {
    // bloque 2
} else if (condición3) {
    // bloque 3
} else {
    // bloque alternativo final
}
```

### 📌 Consideraciones  
- Aumenta la capacidad de decisión del programa.  
- Demasiadas condiciones anidadas pueden complicar la lectura del código.  
- En casos con muchas comparaciones directas, se prefiere usar `switch`.

### Ejemplo de Uso de la Estructura If-Anidada:

El programa pide la edad de una persona y muestra: 
* 0–11 → “Muchacho”
* 12–17 → “Adolescente”
* 18–59 → “Adulto”
* 60 o más → “Adulto mayor"

### Diagrama de Flujo:

<img width="816" height="612" alt="imagen" src="https://github.com/user-attachments/assets/60c09d43-6fab-4988-9297-7c19cbbceb68" />

### Codificación en C:

```c
#include <stdio.h>

int main() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad <= 11) {
        printf("Muchacho\n");
    } else {
        if (edad <= 17) {
            printf("Adolescente\n");
        } else {
            if (edad <= 59) {
                printf("Adulto\n");
            } else {
                printf("Adulto mayor\n");
            }
        }
    }

    return 0;
}

```
Para este algoritmo, se utilizo la estructura condicional, If-Anidada, y gracias a una lista de condiciones se pudo, realizar este algoritmo que funciona de la siguiente manera: primero el usuario ingresa su edad, y despues esa misma edad, almacenada en una variable, es evaluada en las diferentes condiciones que se encuentran en el codigo, si se cumple la primera comdición, muestra la palabra "Muchacho", caso contrario, pasa a la siguiente condición y si se cumple, muestra el mensaje "Adolescente", caso contrario, pasa a la otra condición y si se cumple muestra la palabra "Adulto", y por ultimo si no se cumple esa condición, el programa solo muestra el mensaje "Adulto mayor".

### Prueba de Escritorio: 

<img width="453" height="237" alt="imagen" src="https://github.com/user-attachments/assets/71993a4e-b259-4115-92d8-50f1aeeb17ee" />

---

## 📘 4. Estructura múltiple `switch`

### 💡 Definición  
El `switch` es una estructura condicional diseñada para manejar **múltiples alternativas**, evaluando el valor de una variable o expresión y seleccionando un bloque de código asociado a cada caso. Es especialmente útil cuando se deben comparar valores exactos (enteros o caracteres) y se desea evitar una secuencia extensa de `else if`.

Recursos como JDoodle y GeeksforGeeks destacan que el `switch` permite escribir código más limpio, ordenado y legible cuando se trabaja con menús o estructuras de selección directa.

### 🛠 Usos comunes  
- Menús interactivos de selección.  
- Sistemas de control basados en números (1, 2, 3...).  
- Conversión de valores:  
  - número → día de la semana  
  - letra → opción específica  
- Procesos independientes según el valor de la variable.

### 🧱 Sintaxis  

```c
switch (variable) {
    case valor1:
        // instrucciones
        break;

    case valor2:
        // instrucciones
        break;

    case valor3:
        // instrucciones
        break;

    default:
        // instrucciones si no coincide ningún caso
        break;
}
```

### 📌 Ventajas  
- Código más legible para decisiones múltiples.  
- Elimina largos bloques de if–else.  
- Facilita la implementación de menús y opciones fijas.

### Ejemplo de Uso de la Estructura Switch:

El programa pide la edad de una persona y muestra: 
* 0–11 → “Muchacho”
* 12–17 → “Adolescente”
* 18–59 → “Adulto”
* 60 o más → “Adulto mayor"

### Diagrama de Flujo:

<img width="1248" height="581" alt="imagen" src="https://github.com/user-attachments/assets/cf827841-1b4b-4131-84f9-6abd9407768c" />

### Codificación en C:

```c
#include <stdio.h>

int main() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    switch (edad) {
        case 0 ... 11:
            printf("Muchacho\n");
            break;
        case 12 ... 17:
            printf("Adolescente\n");
            break;
        case 18 ... 59:
            printf("Adulto\n");
            break;
        default:
            printf("Adulto mayor\n");
    }

    return 0;
}
```
Este Programa funciona igual que el anterior, solo que la diferencia es que, se utilizó la estructura condicional Switch, en donde si la edad se encuentra dentro del rango de valores que se establecio en cada caso, muestra su mensaje correspondiente, y un extra que añade esta estructura, es que muestra un mensaje default, es decir, ese mensaje solo se muestra si no se cumplieron, todos los casos posibles para las edades ingresadas, siendo una buena alternativa para realizar este algoritmo.

### Prueba de Escritorio:

<img width="530" height="254" alt="Captura de pantalla 2025-12-07 200857" src="https://github.com/user-attachments/assets/e35419fd-6e4b-4487-b41e-349c2636a476" />

---

## 🧠 Importancia General de las Estructuras Condicionales  

Las estructuras condicionales son indispensables en cualquier programa porque permiten:

- **Modificar el flujo** según circunstancias específicas.  
- Responder a la interacción del usuario.  
- Implementar reglas lógicas complejas.  
- Automatizar procesos de decisión.  
- Generar resultados diferentes según los datos ingresados.  
- Construir sistemas funcionales, escalables y realistas.

Sin estructuras condicionales, un programa sería completamente lineal y no tendría la capacidad de responder a distintas situaciones, lo que lo haría inútil para la mayoría de las aplicaciones reales.

---
<div align="center">

[![📊 Estructuras Repetitivas](https://img.shields.io/badge/📊Estructuras_Repetitivas_en_C_-green?style=for-the-badge)](./Estructuras_Repetitivas.md)

</div> 

<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-red?style=for-the-badge)](../Contenidos.md)

</div>

