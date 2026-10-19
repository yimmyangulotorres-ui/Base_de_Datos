# 🧮 Tipos de datos: Variables y Constantes

---

## 📘 Clasificación de los tipos de datos

### 🔹 Simples

- **Enteros (int):** valores que no tienen punto decimal o flotante, pueden ser positivos o negativos e incluyen el cero.  
  Ejemplo: `10`, `120`, `1200`, etc. [5]

- **Reales (float o double):** valores con punto decimal o flotante, pueden ser positivos o negativos e incluyen el cero.  
  Ejemplo: `4.5`, `3.1416`, `0.83`, etc. [5]

- **Lógicos (boolean):** tipo especial que solo puede almacenar dos valores: `verdadero` o `falso`. [5]

- **Carácter (char):** un solo carácter entre comillas dobles; puede ser letra, número, signo o símbolo.  
  Ejemplo: `"a"`, `"x"`, `"3"`, `"#"`. [5]

- **Cadena (string o alfanumérico):** combinación de caracteres.  
  Ejemplo: `"Calle 107 # 125-48A"`, `"Hola mundo"`. [5]

---

### 🔹 Compuestos

> Estos tipos de datos no se vieron en esta unidad, pero servirán para ciclos posteriores.

- **Arreglos (vectores y matrices):** conjunto de elementos del mismo tipo almacenados de forma contigua; permiten acceder por índices.
- **Registros (struct):** agrupan distintos tipos de datos bajo un mismo nombre; cada campo representa un atributo.
- **Listas:** colección dinámica de elementos enlazados que permiten inserciones y eliminaciones flexibles.
- **Pilas:** estructura tipo **LIFO** (último en entrar, primero en salir), usada para operaciones anidadas.
- **Colas:** estructura tipo **FIFO** (primero en entrar, primero en salir), ideal para procesar tareas en orden.
- **Conjuntos:** agrupan elementos únicos sin orden específico; permiten operaciones como unión o intersección.
- **Archivos:** estructuras que permiten almacenar y recuperar datos de manera permanente.
  [9]
---

## 🧱 Identificadores y Variables

### 🏷️ Identificadores

Un **identificador** es el nombre asignado a una variable, constante, función o cualquier elemento dentro de un lenguaje de programación [1].  
No debe ser una palabra reservada del lenguaje.

Para nombres con más de una palabra, se recomienda el uso de la práctica **Lower Camel Case** o el **guion bajo** `_`.

📌 **Ejemplo:** `nombres_Apellido1_Apellido2`

En este caso:
- La primera palabra se escribe en minúscula.
- Las palabras posteriores inician con mayúscula.
- Se usa guion bajo `_` para separar palabras.

Aunque esta convención puede no haberse aplicado en esta unidad, será muy útil en ciclos posteriores.

---

#### ✅ Reglas para identificadores

- Debe comenzar por una **letra o subguion (_)**, no con un número.  
- **No debe tener espacios en blanco.**  
- **No puede contener caracteres especiales** como `#`, `$`, `%`, `-`, etc.  
- **No debe incluir letras no estándar** como `Ñ` o con acentos (`á`, `é`, `í`, etc.).

📋 **Ejemplos:**

| Ejemplo | Estado | Motivo |
|----------|---------|--------|
| `1nombre` | ❌ Incorrecto | Empieza con un número |
| `nombre apellido` | ❌ Incorrecto | Tiene un espacio en blanco |
| `edad-usuario` | ❌ Incorrecto | Usa guion normal, debe ser `_` |
| `año_actual` | ❌ Incorrecto | Usa una letra no válida (`ñ`) |

---

### 🔢 Variables

Las **variables ** son espacios en memoria que permiten almacenar datos que pueden **cambiar durante la ejecución** del programa.  
El tipo de dato determina qué clase de valores puede guardar (entero, real, carácter, etc.).

📘 **Ejemplo visual:**

<img width="463" height="268" alt="Ejemplo de variables [4]" src="https://github.com/user-attachments/assets/72ebfedc-0240-4d8f-a638-8caf92d68f4e" />

En este algoritmo:
1. Se declaran `x` y `z`.  
2. Se les asignan valores.  
3. Se muestran en pantalla.  
4. Luego `x` aumenta en 2 y `z` disminuye su valor.  
5. Se vuelve a mostrar el resultado.

Esto demuestra cómo una variable puede **cambiar su valor** durante la ejecución.

---

### 🧩 Asignación

La **asignación** consiste en dar un valor a una variable o constante mediante el signo:

- `=`  (en C, Python, Java, etc.)
- `<-` (en PSeInt)

Ambos significan lo mismo.

📌 El valor asignado debe ser **compatible con el tipo de dato** de la variable o constante.

---

### 🔒 Constantes

Las **constantes** son valores **que no cambian** durante la ejecución del programa.  
Por convención, su nombre se escribe **en mayúsculas**.

📘 **Ejemplo:** cálculo del área de un círculo con una constante `VALOR_PI`.

<img width="553" height="266" alt="Constantes en acción" src="https://github.com/user-attachments/assets/46e29b40-13e2-49e0-b203-b8c17b1ac01d" />

Gracias a esta convención, el programa evita errores gramaticales y semánticos.

---

## 🧮 Tablas de Operadores

<img width="897" height="142" alt="Tabla operadores [8] 1" src="https://github.com/user-attachments/assets/9a53ca9c-bf0e-4b00-a94c-85478f7e4532" />
<img width="832" height="255" alt="Tabla operadores [8] 2" src="https://github.com/user-attachments/assets/77e5e718-4fb3-44bc-af81-33988573e0e7" />
<img width="817" height="288" alt="Tabla operadores [8] 3" src="https://github.com/user-attachments/assets/02436ce5-d60b-4f7f-bf42-74f044e35410" />
<img width="701" height="323" alt="Tabla operadores [8] 4" src="https://github.com/user-attachments/assets/98c64fa6-9736-45cc-9544-be74bcbc93da" />

---

## ⚙️ Ejemplo de prioridad de operadores en acción

<img width="402" height="218" alt="Prioridad de operadores [8]" src="https://github.com/user-attachments/assets/1cf59ce7-11d0-46f7-98e0-3088e7696a6e" />

---

## ✅ Conclusión

> Eso sería todo por esta sección.  
> Por favor, vuelva al contenido de la unidad para pasar a otra sección.

---

<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-blue?style=for-the-badge)](../Contenidos.md)

</div>

