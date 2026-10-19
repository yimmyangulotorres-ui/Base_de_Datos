# 🛠️ Prácticas: PSeInt, Diagramas de Flujo y Programación en C

Esta sección contiene **ejemplos seleccionados** y análisis centrados exclusivamente en **pseudocódigo (PSeInt)**, **diagramas de flujo** y **ejemplos en lenguaje C**. Los archivos originales con las evidencias están enlazados al final —abra cada PDF para ver la implementación completa y capturas.

---

## 1) PSeInt (Pseudocódigo) — Ejemplo: Cálculo del IMC

**Descripción:** implementación en pseudocódigo para calcular el Índice de Masa Corporal (IMC). Este ejemplo muestra entrada, proceso y salida, y es ideal para practicar estructura [6]s secuenciales y validaciones sencillas.

**Pseudocódigo (PSeInt):**
```pseudocode
Algoritmo CalcularIMC
    Escribir "Ingrese su peso en kilogramos:"
    Leer peso
    Escribir "Ingrese su altura en metros:"
    Leer altura
    Si altura <= 0 Entonces
        Escribir "Altura inválida."
    Sino
        imc <- peso / (altura * altura)
        Escribir "Su IMC es: ", imc
        Si imc < 18.5 Entonces
            Escribir "Bajo peso"
        Sino Si imc < 25 Entonces
            Escribir "Normal"
        Sino Si imc < 30 Entonces
            Escribir "Sobrepeso"
        Sino
            Escribir "Obesidad"
        FinSi
    FinSi
FinAlgoritmo
```

**Análisis:**  
- La secuencia es directa: entrada → proceso → salida.  
- Se incluye validación básica para evitar división por cero (altura inválida).  
- Añadimos una clasificación del resultado para practicar condicionales anidados.  
- Fácil de trasladar a C o Python manteniendo la lógica (solo cambiar sintaxis).

---

## 2) Diagramas de Flujo — Ejemplo: Cálculo del área de un triángulo

**Descripción:** el diagrama de flujo representa gráficamente la misma lógica que un pseudocódigo; permite detectar errores lógicos antes de la implementación textual.

**Estructura del diagrama (descripción paso a paso):**  
1. Inicio (óvalo)  
2. Entrada: leer `base` y `altura` (paralelogramo)  
3. Proceso: `area = (base * altura) / 2` (rectángulo)  
4. Salida: mostrar `area` (paralelogramo)  
5. Fin (óvalo)

**Representación simplificada (ASCII):**
```
  (Inicio)
     |
  [Leer base, altura]
     |
  [area = (base * altura) / 2]
     |
  [Mostrar area]
     |
   (Fin)
```

**Análisis:**  
- El diagrama evidencia claramente flujo lineal (secuencial).  
- Al visualizar la entrada/proceso/salida se reduce la probabilidad de errores de traducción a código.  
- Útil para explicar el algoritmo [2] en clases y para documentar procedimientos en proyectos más grandes.

---

## 3) Lenguaje C — Ejemplo: IMC y Suma de dos números

### a) IMC (implementación en C)
```c
#include <stdio.h>

int main() {
    float peso, altura, imc;
    printf("Ingrese peso (kg): ");
    if (scanf("%f", &peso) != 1) return 1;
    printf("Ingrese altura (m): ");
    if (scanf("%f", &altura) != 1 || altura <= 0) {
        printf("Altura inválida.\n");
        return 1;
    }
    imc = peso / (altura * altura);
    printf("IMC = %.2f\n", imc);
    if (imc < 18.5) printf("Bajo peso\n");
    else if (imc < 25) printf("Normal\n");
    else if (imc < 30) printf("Sobrepeso\n");
    else printf("Obesidad\n");
    return 0;
}
```

**Análisis:**  
- Validaciones con `scanf` y comprobación de `altura <= 0` evitan fallos.  
- La estructura [6] condicional `if-else` replica la lógica del pseudocódigo.  
- Formato `%.2f` para imprimir con dos decimales mejora presentación de resultados.

### b) Suma de dos números (ejemplo sencillo en C)
```c
#include <stdio.h>

int main() {
    int a, b, suma;
    printf("Ingrese primer numero: ");
    scanf("%d", &a);
    printf("Ingrese segundo numero: ");
    scanf("%d", &b);
    suma = a + b;
    printf("La suma es: %d\n", suma);
    return 0;
}
```

**Análisis:**  
- Ejemplo básico para practicar entrada/salida y operaciones aritméticas.  
- Útil como primer programa antes de introducir estructura [6]s de control.

---

## Enlaces a evidencias y archivos originales
A continuación están los PDFs y recursos que contienen las implementaciones completas y capturas (abra cada archivo para ver código, diagramas y pruebas):

- [Taller 1 (Pseudocódigo y Diagramas)](../Evidencias/Taller1.pdf)  
- [Instalación y Guía (Aprendizaje Autónomo)](../Evidencias/Aprendizaje_Autonomo.pdf)  
- [Práctica Experimental - Implementación en C](../Evidencias/Aprendizaje_Practico_Experimental2.pdf)  
- [Primer Algoritmo Secuencial (IMC)](../Evidencias/Primer_Algoritmo_Secuencial.pdf)

---

 <div align="left">

[![⬅️ Volver al Inicio](https://img.shields.io/badge/⬅️_Volver_al_Inicio-blue?style=for-the-badge)](../index.md)

</div>


---

## 🗂️ Archivos de Código (para descargar y compilar)
Los siguientes archivos contienen las implementaciones listos para descargar. Abra el archivo, compílelo y ejecútelo en su entorno local.

- [imc.c](./Practicas_files/imc.c) — Implementación en C del cálculo del IMC.
- [suma.c](./Practicas_files/suma.c) — Programa en C que suma dos números.
- [imc.psc](./Practicas_files/imc.psc) — Pseudocódigo en formato PSeInt para IMC.
- [suma.psc](./Practicas_files/suma.psc) — Pseudocódigo en formato PSeInt para suma de dos números.

