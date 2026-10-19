# 💡 **PSeInt: El Inicio del Programador**

> 🧠 *“PSeInt es la puerta de entrada al mundo de la programación: una herramienta que enseña a pensar como un programador antes de escribir código.”*

---

## ⚙️ **Entrada, Proceso y Salida de Datos en PSeInt**

---

### 🟢 **Entrada de Datos**

La **entrada de datos** es el proceso mediante el cual el usuario proporciona información al algoritmo para que este pueda realizar sus operaciones.
En **PSeInt**, se utiliza la instrucción **`Leer`** para capturar los valores ingresados desde el teclado. [5]

```pseint
Leer nombre, edad
```

🧠 **Ejemplo explicado:**
➡️ El programa solicita al usuario su **nombre** y **edad**, almacenándolos en las variables correspondientes para su uso posterior.

---

### 🟡 **Proceso de Datos**

El **proceso** comprende todas las operaciones, transformaciones o cálculos que el algoritmo realiza utilizando los datos de entrada.
Aquí es donde se aplica la lógica del programa para obtener los resultados deseados. [5]

```pseint
suma <- numero1 + numero2
promedio <- suma / 2
```

⚙️ **Ejemplo explicado:**
➡️ El algoritmo **procesa** los valores sumando dos números y luego dividiéndolos para obtener su promedio.

---

### 🔵 **Salida de Datos**

La **salida de datos** muestra al usuario los resultados del proceso.
En **PSeInt**, se emplea la instrucción **`Escribir`** para visualizar información en pantalla. [5]

```pseint
Escribir "El promedio es: ", promedio
```

💬 **Ejemplo explicado:**
➡️ El programa **muestra** en pantalla el resultado final del cálculo, en este caso el valor del promedio.

---

### ✨ **Resumen visual**

| 🧩 Fase        | 🧾 Instrucción en PSeInt   | 💡 Descripción breve              |
| -------------- | -------------------------- | --------------------------------- |
| 🟢 **Entrada** | `Leer`                     | Captura los datos del usuario.    |
| 🟡 **Proceso** | Operaciones y asignaciones | Calcula o transforma los datos.   |
| 🔵 **Salida**  | `Escribir`                 | Muestra el resultado en pantalla. |

---

## 💻 **¿Qué es PSeInt?**

**PSeInt (Pseudo Intérprete)** es una herramienta educativa diseñada para enseñar los fundamentos de la programación mediante el uso de pseudocódigo.
Permite escribir algoritmos en lenguaje natural, ejecutarlos paso a paso y visualizar su funcionamiento antes de traducirlos a un lenguaje formal como **C, Java o Python**. [3]

🎓 **Ventajas principales:**

* Favorece la comprensión de la **lógica algorítmica**.
* Usa una **sintaxis simple, clara y en español**.
* Permite **simular la ejecución** de los algoritmos.
* Es ideal para quienes se inician en la programación. [3]

---

## 🧾 **Pseudocódigo**

El **pseudocódigo** es una forma intermedia entre el lenguaje natural y los lenguajes de programación.
Permite representar los pasos lógicos de un algoritmo de manera **estructurada, clara y comprensible**.

🧩 **Características del pseudocódigo:**

* Utiliza un lenguaje sencillo y cercano al español.
* Es independiente de cualquier lenguaje de programación [1].
* Debe ser preciso, legible y lógico.
* Permite probar y analizar algoritmos antes de codificarlos.
* Emplea estructuras básicas como **Inicio**, **Fin**, **Si**, **Mientras**, **Repetir**, etc.

---

### 📘 **Ejemplo de Pseudocódigo**

<img width="1056" height="467" alt="Ejemplo de pseudocódigo" src="https://github.com/user-attachments/assets/dd0d81ff-3446-4ca2-be5a-1394d2f4a668" />

🧠 **Análisis del ejemplo:**
Este algoritmo permite calcular el **área de un círculo**.

1️⃣ El programa pide al usuario que ingrese el valor del **radio**.

2️⃣ Ese valor se almacena en la variable `radio`.

3️⃣ Se define una constante `VALOR_PI = 3.1415`.

4️⃣ El proceso realiza la operación `VALOR_PI * radio^2` y guarda el resultado en `area`.

5️⃣ Finalmente, el programa **muestra el área calculada** en pantalla.

---

## 🔁 **Diagrama de Flujo**

El **diagrama de flujo** es una representación gráfica que muestra los pasos lógicos que sigue un algoritmo para resolver un problema.
Cada acción se representa con **símbolos geométricos estandarizados** conectados por flechas que indican la secuencia de ejecución. [6]

📍 **Objetivo:**
Facilitar la comprensión visual del algoritmo, identificar errores y comunicar la lógica de manera clara.

---

### 🧩 **Principales símbolos utilizados**

* 🔸 **Óvalo:** Representa el **inicio o fin** del algoritmo.
  
* 🟦 **Rectángulo:** Indica un **proceso u operación** (como un cálculo o asignación).
  
* 🔷 **Rombo:** Representa una **decisión o condición** (flujo dividido en verdadero/falso).

* ⬛ **Paralelogramo:** Entrada o salida de datos (`Leer` o `Escribir`).

* 🔺 **Flechas:** Conectan los símbolos y muestran la **dirección del flujo**.

---

### 📊 **Ejemplo visual de diagrama de flujo**

<img width="1365" height="717" alt="Diagrama de flujo ejemplo" src="https://github.com/user-attachments/assets/5f5fc27a-14cf-4090-90df-5ab97d221208" />

---



### 🧩 **Prueba de Escritorio del anterior programa**
<img width="532" height="340" alt="Captura de pantalla 2025-11-05 165933" src="https://github.com/user-attachments/assets/208d7dcb-37c2-4cf6-9b54-f6f10cfd27a1" />




| Entrada    | Proceso              | Salida                           |
| ---------- | -------------------- | -------------------------------- |
| area = 5   | area = VALOR_PI * radio ^ 2 | El área del círculo es:  78.54 |

> 💬 **Conclusión:**
> PSeInt es una herramienta esencial para aprender a pensar de forma lógica y estructurada.
> Permite desarrollar la capacidad de **analizar problemas, diseñar algoritmos y comprender la base de la programación estructurada**, antes de pasar a un lenguaje real.

<div align="center">

[![📊 Lenguaje C](https://img.shields.io/badge/📊_Lenguaje.C-blue?style=for-the-badge)](./Lenguaje_C.md)

</div> 

<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-blue?style=for-the-badge)](../Contenidos.md)

</div>



