# 💻 Lenguaje C

> “El lenguaje C es uno de los más utilizados en la historia de la programación [1] por su eficiencia, flexibilidad y control sobre el hardware.”
> — *Goin, 2022; Guerra Salazar et al., 2023*

---

## ⚙️ Codificación

La **codificación** consiste en traducir un algoritmo [2] escrito en pseudocódigo a un **lenguaje de programación [1]** formal.
Esto implica reemplazar las palabras en español por sus equivalentes en inglés y **agregar detalles técnicos** como la declaración de variables [4], constantes [4] y librerías.

📁 El código fuente en C se guarda con la extensión `.c`, por ejemplo:

```bash
nombre_archivo.c
```

---

## 🧰 Librerías o Bibliotecas

Las **librerías** son archivos con código reutilizable que permiten realizar operaciones comunes.
Siempre se incluyen al inicio del programa mediante la directiva `#include`.

```c
#include <stdio.h>   // Entrada y salida estándar
#include <stdlib.h>  // Funciones del sistema
#include <string.h>  // Manejo de cadenas
#include <math.h>    // Operaciones matemáticas
#include <time.h>    // Control del tiempo
```

📘 La extensión de los archivos de librería es `.h`.
Ejemplo: `#include <libreria.h>`

---

## 🚀 Estructura básica del programa en C

En pseudocódigo usamos **Inicio** y **Fin**; en C, todo comienza dentro de la función `main()`:

```c
#include <stdio.h>

int main() {
    printf("Hola, mundo!\n");
    return 0;
}
```

🔹 El programa se **compila** con:

```bash
gcc hola_mundo.c -o hola_mundo
```

🔹 Y se **ejecuta** con:

```bash
./hola_mundo
```

---

## 🧮 Tipos de datos [5] en C

Los **tipos de datos [5]** determinan qué tipo de información puede almacenar una variable.

| Tipo de dato | Descripción                          | Ejemplo                    |
| ------------ | ------------------------------------ | -------------------------- |
| `int`        | Números enteros                      | `int edad = 25;`           |
| `float`      | Números decimales                    | `float nota = 8.5;`        |
| `double`     | Números decimales de mayor precisión | `double pi = 3.141592;`    |
| `char`       | Caracter individual                  | `char letra = 'A';`        |
| `char[]`     | Cadena de caracteres                 | `char nombre[] = "Maria";` |
| `bool`       | Valores lógicos (verdadero/falso)    | `bool activo = true;`      |

📗 *Fuente: Guerra Salazar et al., 2023*

---

## 🧾 Declaración de variables [4]

En C, una **declaración de variable** indica al compilador el *tipo de dato* que tendrá la variable y su *nombre*. Cada declaración termina con un punto y coma (`;`).

### 🔣 Símbolos y su significado

* `;` → Finaliza una sentencia.
* `,` → Permite declarar varias variables [4] del mismo tipo en una sola línea (`int a, b;`).
* `[]` → Define un arreglo (por ejemplo, `char nombre[20]` es una cadena de 20 caracteres).
* `&` → Operador de dirección; obtiene la dirección de memoria de una variable (usado por `scanf`).
* `*` → Operador de puntero o desreferenciación (apunta a memoria).
* `=` → Asignación de valor.

### 🧾 Declarar variables [4]: formas comunes

```c
int a;                // declarar sin inicializar
int b = 5;            // declarar e inicializar
float x, y = 2.5;     // declarar varias variables [4]
char c = 'A';         // carácter
```

### 📚 Cadena de caracteres (strings) en C — explicación profunda

En C, las cadenas **no** son un tipo nativo de primer nivel; se representan como **arrays de `char`** que terminan con el carácter nulo `\0` (NULL). Ese carácter marca el fin de la cadena en memoria.

```c
char nombre[20];            // reserva 20 bytes; la cadena puede almacenar hasta 19 caracteres + '\0'
char saludo[] = "Hola";    // el compilador asigna 5 bytes: 'H','o','l','a','\0'
char *msg = "Bienvenido";  // puntero a un literal constante en segmento de datos [5]
```

**Importante:** `char nombre[4] = "hola";` puede provocar sobrescritura de memoria porque necesita 5 bytes (`h`,`o`,`l`,`a`,`\0`).

### 🛡️ Lectura segura de cadenas desde teclado

Usar `scanf("%s", nombre);` puede ser peligroso si no se controla la longitud de entrada. Una opción más segura es limitar el ancho de lectura con especificador de formato:

```c
char nombre[20];
scanf("%19s", nombre); // lee hasta 19 caracteres y agrega '\0'
```

---

### 🔍 Ejemplo detallado y explicado (declaración, lectura y uso)

```c
#include <stdio.h>

int main() {
    char nombre[30];           // arreglo para cadena (hasta 29 caracteres + '�')
    int edad = 20;             // ejemplo de otra variable

    printf("Ingrese su nombre: ");
    scanf("%29s", nombre);   // lee hasta 29 caracteres (sin espacios)

    printf("Hola %s, bienvenido al programa.
", nombre);
    return 0;
}
```

**Qué hace el ejemplo (explicación):**

1. Declara una cadena `nombre` y una variable `edad` (en este ejemplo `edad` se define solo como demostración de declaración).
2. Solicita al usuario que ingrese su nombre y lo lee con `scanf` usando un límite de ancho para evitar desbordamientos.
3. Muestra en pantalla un saludo que incluye el nombre ingresado.

---

## 🔢 Constantes

Las **constantes [4]** son valores que no cambian durante la ejecución del programa.
Pueden declararse de dos maneras:

```c
// Opción 1: Constante tipada
const float PI = 3.1416;
const char UNIVERSIDAD[] = "UNL";

// Opción 2: Directiva de preprocesador
#define MAX 100
#define IVA15 0.15
```

---

## 🔄 Asignación de valores

Se usa el símbolo `=` para asignar valores:

```c
a = a + 5;
sueldo = 450;
estadoCivil = 'D';
```

También se usan **operadores [8] compuestos** y **de incremento/decremento**:

```c
b++;
++b;
b--;
--b;
```

---

## 💬 Entrada y salida de datos [5]

### Entrada → `scanf()`

```c
scanf("%d", &edad);
scanf("%f", &promedio);
scanf("%s", nombre);
```

### Salida → `printf()`

```c
printf("La edad es %d\n", edad);
printf("El promedio es %.2f\n", promedio);
printf("Nombre: %s\n", nombre);
```

---

## 🧮 Ejemplo práctico (pseudocódigo → C)

### 🧾 Pseudocódigo

```pseint [3]
Algoritmo Calculo_Area_Rectangulo
  Definir base, altura, area Como Real
  Escribir "Ingrese la base y la altura:"
  Leer base, altura
  area <- base * altura
  Escribir "El área es: ", area
FinAlgoritmo
```

### 💻 Código en C

```c
#include <stdio.h>

int main() {
    float base, altura, area;

    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);

    area = base * altura;
    printf("El área del rectángulo es: %.2f\n", area);

    return 0;
}
```

---

## 🧠 Prueba de escritorio

| Entrada    | Proceso              | Salida                           |
| ---------- | -------------------- | -------------------------------- |
| base = 5   | area = base * altura | El área del rectángulo es: 15.00 |
| altura = 3 | 5 * 3 = 15           |                                  |

---

## 🧩 Palabras reservadas

`int`, `for`, `while`, `return`, `printf`, `scanf`, `if`, `else`, `switch`, `break`, `continue`

---

## 🗒️ Comentarios

```c
// Este es un comentario de una línea

/*
   Este es un comentario
   de varias líneas
*/
```

---

## 📘 Conclusión

El **lenguaje C** es un pilar de la programación [1] estructura [6]da.
Permite escribir código eficiente, cercano al hardware y con gran control sobre los recursos del sistema.
Su aprendizaje brinda una base sólida para otros lenguajes como C++, Java o Python.

---

