# 📖 Contenidos de la Unidad 1

* En este documento se presenta un breve resumen de lo visto dentro de las 4 semanas de la Unidad 1 en la asignatura
  de Teoría de la Programación, si quiere profundizar más, en los diferentes temas, ejercicios, contenidos, algoritmos
  realizados o tratados dentro de esta Unidad, puede hacerlo dirigiendose al indice de contenido. En este apartado encontrara toda
  la información desglozada, desde el primer tema visto en la asignatura, hasta el ultimo, tratado en clase. Todo con una muy
  buena estructura, apta para la comprensión del lector. Ademas podra encontrar algunos temas no tratados en clase pero que tambien
  nos ayudaron a comprender como se pueden construir los algoritmos dentro de los diferentes lenguajes de programacion
  como lo serian Java, Python y el que utilizados el Lenguaje C * 
  
### 🔹 Temas Principales
- Algoritmos, pseudocódigo y diagramas de flujo
- Tipos de Algoritmos
- Caracteristicas de un Algoritmo
- Programación por bloques
- Ejemplos de algoritmos con estructuras lineales y secuenciales
- La Herramienta de programación PseInt
- Tipos de Datos: Variables Constantes
- Pruebas de Escritorio
- Lenguaje C: El primer paso en la programación de Alto Nivel

---
## 📘 **Temas de la Unidad**

| 📂 **Tema** | 🧾 **Descripción del Contenido** |
|:--------------------------------------------|:-------------------------------------------------------------|
| [🚀 Programacion por Bloques](./Programacion_por_Bloques.md) | ¿Qué es la progracion por bloques?, conceptos y ejemplos|
| [🧩 Características y Elementos de un Algoritmo](./Temas/Caracteristicas_y_elementos_de_un_algoritmo.md) | Conceptos esenciales sobre qué es un algoritmo, sus características y los elementos que lo componen. |
| [💾 Tipos de Datos: Variables y Constantes](./Temas/Tipos_de_datos_Variables_y_Constantes.md) | Explicación de los tipos de datos básicos, variables, constantes y sus reglas de declaración. |
| [🧠 PSeInt: El Inicio del Programador](./Temas/Pseint_El_inicio_del_Programador.md) | Introducción al uso del pseudocódigo y la herramienta PSeInt como base de la programación. |
| [💻 Lenguaje C](./Temas/Lenguaje_C.md) | Aplicación práctica de los conceptos aprendidos en el lenguaje de programación C. |

---

## 🧩 **Otros apartados de la unidad**

- [📂 Tareas Entregadas](./Tareas_Entregadas.md)  
- [📖 Contenidos de la Unidad](./Contenidos.md)  
- [💬 Reflexión Personal](./Reflexion.md)  
- [🧾 Evidencias](../Evidencias/)
---
### 🧠 Concepto General
La **Unidad 1** se enfoca en los principios básicos de la **programación estructurada**, introduciendo al estudiante en el pensamiento computacional, la resolución lógica de problemas y el diseño de algoritmos.  
En esta etapa se busca que el estudiante comprenda que **todo programa informático nace a partir de un algoritmo, y que dominar su estructura es esencial para garantizar un software eficiente y funcional.  

El objetivo principal es **transformar un problema del mundo real en una secuencia de pasos ordenados** que una máquina pueda ejecutar.  
Para lograrlo, se utilizan herramientas como el **pseudocódigo**, los **diagramas de flujo** y la **programación por bloques**, las cuales sirven como puente entre el razonamiento humano y la sintaxis formal de los lenguajes de programación [1].

---

### ⚙️ Algoritmos, Pseudocódigo y Diagramas de Flujo
Un **algoritmo** es un conjunto finito y ordenado de instrucciones que permiten resolver un problema o realizar una tarea específica.  
Su importancia radica en que define la lógica y el flujo del programa antes de su implementación, garantizando claridad, eficiencia y precisión.

Un **pseudocódigo** es la descripción textual del algoritmo utilizando un lenguaje informal pero estructurado. No depende de ningún lenguaje de programación, lo que permite centrarse en la lógica sin preocuparse por la sintaxis.  
Los **diagramas de flujo**, en cambio, son la representación **gráfica** del mismo algoritmo mediante símbolos estandarizados, lo cual facilita su análisis y comunicación visual.  

#### 🔸 Características de un algoritmo:
- Debe ser **preciso**: cada paso claramente definido.  
- Debe ser **finito**: debe terminar tras un número determinado de pasos.  
- Debe ser **eficaz**: las instrucciones deben ser comprensibles y realizables.  
- Debe tener **entrada y salida definidas**.  

#### 🧮 Ejemplo básico:
**Problema:** Calcular el área de un triángulo.  

**Pseudocódigo:**
```plaintext
Inicio
   Leer base, altura
   area ← (base * altura) / 2
   Escribir "El área del triángulo es:", area
Fin
```

**Diagrama de flujo:** Representa gráficamente el mismo proceso usando óvalos (inicio/fin), rectángulos (proceso), y paralelogramos (entrada/salida).

#### 🔹 Aplicaciones reales:
- Cálculo de nómina de empleados.  
- Control de inventarios.  
- Procesamiento de datos científicos.  
- Lógica de navegación GPS.  
- Cálculos de sistemas financieros y bancarios.

> 💬 *Cada algoritmo es una solución expresada con lógica pura: el corazón de toda programación.*

---

### 🧩 Programación por Bloques
La **programación por bloques** introduce al estudiante a los conceptos básicos de programación mediante bloques visuales que representan instrucciones.  
Su principal ventaja es eliminar la complejidad de la sintaxis, permitiendo concentrarse en el desarrollo lógico y estructura.

Plataformas como **Scratch**, **Blockly**, **Code.org** o **App Inventor** son herramientas educativas que facilitan este aprendizaje visual e interactivo.  
En ellas, las estructuras condicionales, bucles y variables se arrastran y conectan como piezas de rompecabezas, representando flujos lógicos reales de un programa.  

#### 🔸 Beneficios de la programación por bloques:
- Facilita la comprensión de la lógica antes del código.  
- Disminuye errores sintácticos.  
- Fomenta la creatividad y la experimentación.  
- Introduce conceptos de programación orientada a eventos.  

#### 🔸 Aplicaciones:
- Desarrollo de videojuegos educativos.  
- Robótica con LEGO Mindstorms o Arduino visual.  
- Simuladores de fenómenos físicos.  
- Introducción a la inteligencia artificial mediante flujos visuales.  

> 🌱 *Es el primer paso hacia la programación textual: enseña a pensar como un programador.*

---

### 💻 Ejemplos de Algoritmos Secuenciales
Los **algoritmos secuenciales** ejecutan sus pasos uno tras otro, sin condiciones ni repeticiones.  
Se aplican en tareas donde la solución sigue un único camino lógico.

**Ejemplo 1: Calcular el promedio de tres notas**
```plaintext
Inicio
   Leer nota1, nota2, nota3
   promedio ← (nota1 + nota2 + nota3) / 3
   Escribir "El promedio es:", promedio
Fin
```
---

### 📽️ Recursos de Presentaciones

<div align="center">

[![Presentación 1](https://img.shields.io/badge/🎞️_Presentación_1-blue?style=for-the-badge)](https://docs.google.com/presentation/d/15x-_uSMvtnJZ5LVls6jq9MgNIIHt-Jzk/edit?usp=sharing&ouid=103500463077710805140&rtpof=true&sd=true)  
[![Presentación 2](https://img.shields.io/badge/📊_Presentación_2-green?style=for-the-badge)](https://docs.google.com/presentation/d/1pko741mali6orqm9QMUmXEaSiDf92Qcc/edit?usp=sharing&ouid=103500463077710805140&rtpof=true&sd=true)  
[![Presentación 3](https://img.shields.io/badge/📘_Presentación_3-purple?style=for-the-badge)](https://docs.google.com/presentation/d/14b3xwO87_64AZcFfP4zhrQYh2o5QYAjU/edit?usp=sharing&ouid=103500463077710805140&rtpof=true&sd=true)  
[![Presentación 4](https://img.shields.io/badge/🖥️_Presentación_4-orange?style=for-the-badge)](https://docs.google.com/presentation/d/1diDOqgiZcybY4RhGTRGTjPU8TyhqUMWf/edit?usp=sharing&ouid=103500463077710805140&rtpof=true&sd=true)

</div>

---

> 💡 *Esta unidad representa el inicio del pensamiento computacional, donde el estudiante pasa de la lógica cotidiana a la lógica formal necesaria para programar.*


 <div align="left">

[![⬅️ Volver al Inicio](https://img.shields.io/badge/⬅️_Volver_al_Inicio-blue?style=for-the-badge)](../index.md)

</div>


---


