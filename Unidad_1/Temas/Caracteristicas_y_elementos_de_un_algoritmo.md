# 🧩 **Características y Proceso de un Algoritmo**

---

## 🧠 **¿Qué es un algoritmo?**

Un **algoritmo ** es una serie de pasos definidos, los cuales nos ayudan a llegar a la solución de un determinado problema.  
Estos algoritmos pueden ser de **dos tipos**: **cualitativos** o **cuantitativos**. [2]

---

## ✏️ **Los Algoritmos Cualitativos**

Los **algoritmos cualitativos** se caracterizan por el uso de **palabras y frases**, sin tener en cuenta los cálculos matemáticos.  
El objetivo de estos algoritmos es **guiar al usuario** para llegar a la solución de un problema determinado o representar rutinas que seguimos en la vida cotidiana. [2]

📘 **Ejemplo:**  
A continuación se presenta un sencillo algoritmo para realizar el correcto **lavado de los dientes**.  
Con este ejemplo se puede entender cómo se estructura un algoritmo cualitativo, su propósito y su aplicación práctica en la vida diaria.

<img width="594" height="416" alt="organizar_los_pasos_para_solucionar_un_problema_03" src="https://github.com/user-attachments/assets/6dda59c6-1e27-4cac-a854-8f5773be6edd" />

---

## 🔢 **Los Algoritmos Cuantitativos**

A diferencia de los cualitativos, los **algoritmos cuantitativos** son aquellos que involucran **cálculos matemáticos**, ayudándonos a resolver problemas mediante operaciones numéricas.  
Este tipo de algoritmo es la **base fundamental de la programación **, ya que todo programa depende de operaciones y cálculos lógicos. [2]

📘 **Ejemplo explicado:**  
Este algoritmo corresponde a la **suma de dos números**.  
1️⃣ Los valores son ingresados por teclado y almacenados en las variables `a` y `b`.  
2️⃣ El resultado se guarda en la variable `c`.  
3️⃣ Finalmente, se muestra el resultado por pantalla.

<img width="456" height="208" alt="ejemplo5" src="https://github.com/user-attachments/assets/931093b6-91bf-41b6-b999-a215fc74afc9" />

---

## ⚙️ **Características de un Algoritmo**

- 🧩 **Debe ser finito:**  
  Un algoritmo debe tener un **inicio y un fin bien definidos**.  
  Si un algoritmo no cumple con esta característica, podría provocar errores o sobrecarga en la memoria del computador.

- 🧭 **Debe ser preciso:**  
  Debe definir su estructura de manera clara y ordenada.  
  Los **comentarios** en el código permiten comprender qué acción realiza cada línea.

- 🔁 **Debe ser definido:**  
  Si se ejecuta varias veces con los mismos datos, debe arrojar **los mismos resultados** en cada prueba.  
  Si no es así, el algoritmo no cumple con esta característica.

---

## 🧱 **Elementos de un Algoritmo**

- 🧮 **Análisis del Problema:**  
  Se identifican los tres elementos principales de todo algoritmo: **entrada, proceso y salida**.

- 🧠 **Diseño del Algoritmo:**  
  Se puede representar de dos formas: **pseudocódigo** o **diagrama de flujo**.  
  *(Estos temas se profundizan más adelante).*

- 💻 **Codificación:**  
  Consiste en **traducir** el algoritmo a un **lenguaje de programación **, obteniendo el **código fuente** que la computadora puede entender y ejecutar.

- 🧾 **Pruebas:**  
  Las **pruebas de escritorio** permiten comprobar si el algoritmo diseñado funciona correctamente.  
  Se representan en forma de tabla, como el siguiente ejemplo basado en la **suma de dos números**:

| 🟢 **Entrada** | ⚙️ **Proceso** | 🔵 **Salida** |
|:--------------:|:--------------:|:-------------:|
| Valor de a: 4; Valor de b: 5; | c = a + b | valor de c = 9 |
| Valor de a: 7; Valor de b: 8; | c = a + b | valor de c = 15 |
| Valor de a: 9; Valor de b: 3; | c = a + b | valor de c = 12 |

📊 **Nota:**  
Las pruebas de escritorio normalmente no incluyen texto como “valor de a” o “valor de c”.  
En este caso se mantienen solo con fines académicos y de comprensión.

<img width="531" height="340" alt="Captura de pantalla 2025-10-31 025358" src="https://github.com/user-attachments/assets/522f1a18-2837-44c4-a9b4-29f7859bb534" />

---

- 🧾 **Documentación y Mantenimiento:**  
  Este apartado se utiliza principalmente en **proyectos grandes o profesionales**, donde se redacta un informe técnico del algoritmo
  implementado.

---

# ⚙️ Principales Dificultades en la Aplicación de los Contenidos



Durante el desarrollo de esta unidad se identificaron diversas dificultades al aplicar los conceptos teóricos y prácticos de la programación, principalmente en el uso de **PSeInt**, la **lógica algorítmica**, y el **lenguaje C**.  
A continuación, se describen las principales problemáticas encontradas junto con las **soluciones implementadas** para mejorar la comprensión y el desempeño en la materia.

---

## 🧩 1. Dificultad: Comprensión de la lógica algorítmica

**Descripción:**  
Al inicio, resultó complejo estructurar los pasos lógicos que componen un algoritmo, especialmente al distinguir entre instrucciones secuenciales, condicionales y cíclicas.

**Solución aplicada:**  
Se realizaron **diagramas de flujo** antes de cada algoritmo, lo que permitió visualizar mejor el proceso y entender el orden lógico de ejecución. Además, se reforzó la práctica con ejemplos en PSeInt y su traducción a lenguaje C.

---

## 🧮 2. Dificultad: Declaración y uso correcto de variables y constantes 

**Descripción:**  
Muchos errores provinieron del mal uso de variable: nombres no válidos, errores en los tipos de datos o confusión entre variables y constantes.

**Solución aplicada:**  
Se creó una **guía de buenas prácticas** para el nombrado y declaración de variables, aplicando convenciones como *lowerCamelCase* y evitando palabras reservadas. También se incluyeron ejemplos prácticos de asignación en PSeInt y C.

---

## 🧠 3. Dificultad: Comprender la diferencia entre algoritmos cualitativos y cuantitativos

**Descripción:**  
Existía confusión entre los algoritmos que describen procesos con pasos lógicos (cualitativos) y los que involucran operaciones numéricas (cuantitativos).

**Solución aplicada:**  
Se diseñaron ejercicios comparativos donde un mismo problema se resolvía con ambos tipos de algoritmos. Esto facilitó visualizar cómo cambia la representación según el tipo de datos y operaciones involucradas.

---

## 💻 4. Dificultad: Transición del pseudocódigo al lenguaje C

**Descripción:**  
Los estudiantes presentaron errores al traducir programas de PSeInt a C, especialmente por las diferencias de sintaxis (declaración de variables, impresión, entrada de datos, etc.).

**Solución aplicada:**  
Se implementó una **tabla comparativa de equivalencias** entre PSeInt y C. Además, se desarrollaron ejemplos paso a paso con análisis de errores comunes y su corrección.

---

## 🔄 5. Dificultad: Comprender la prioridad de los operadores y su efecto en expresiones

**Descripción:**  
En cálculos matemáticos, muchos resultados no eran los esperados debido a la falta de dominio de las reglas de prioridad de los operadores.

**Solución aplicada:**  
Se reforzó el aprendizaje con **tablas de operadores** y ejemplos ejecutados en PSeInt para observar los resultados reales. También se propuso realizar pequeñas pruebas variando el orden de las operaciones para verificar los cambios.

---

# 🧭 Conclusión

Las dificultades mencionadas forman parte del proceso natural de aprendizaje en la lógica de programación.  
Gracias a las estrategias aplicadas —diagramas, guías, comparaciones, y práctica constante— se logró mejorar la comprensión, reducir errores y afianzar las bases de la programación estructurada.

---

📘 Con esto, los **elementos y características de los algoritmos** quedan claros.  
A continuación, se explorarán temas complementarios como **PSeInt**, **entradas, procesos, salidas** y **tipos de datos**.

---

<div align="center">

[![📊 PSeInt: El inicio del Programador](https://img.shields.io/badge/📊_PSeint_El_inicio_del_Programador-green?style=for-the-badge)](./Pseint_El_inicio_del_Programador.md)

</div>

<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-blue?style=for-the-badge)](../Contenidos.md)

</div>


  
  
