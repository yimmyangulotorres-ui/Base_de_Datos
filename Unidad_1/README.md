# 📗 Unidad 1 — Fundamentos de Bases de Datos

[![🔷 MODELO ER](https://img.shields.io/badge/%F0%9F%94%B7_MODELO_ER-2da44e?style=for-the-badge)](#-modelo-entidad-relación-ejemplos-y-contexto) [![🧮 MODELO RELACIONAL](https://img.shields.io/badge/%F0%9F%A7%AE_MODELO_RELACIONAL-8957e5?style=for-the-badge)](Modelo_Relacional/README.md) [![💻 CÓDIGO SQL](https://img.shields.io/badge/%F0%9F%92%BB_C%C3%93DIGO_SQL-d97706?style=for-the-badge)](Codigo_SQL/README.md)

[![🏠 VOLVER AL INICIO](https://img.shields.io/badge/%F0%9F%8F%A0_VOLVER_AL_INICIO-0969da?style=for-the-badge)](../README.md)

## 🎯 Introducción

En esta unidad se estudian los conceptos esenciales de las bases de datos y su representación mediante el modelo entidad-relación (ER). El objetivo es comprender cómo organizar información, identificar entidades y definir relaciones antes de implementar una base de datos.

## 🗃️ ¿Qué es una base de datos?

Una **base de datos** es un conjunto organizado de datos relacionados que se almacenan para facilitar su consulta, actualización y administración. Por ejemplo, una biblioteca puede guardar información sobre libros, socios y préstamos en una misma base de datos.

## ⚙️ ¿Qué es un sistema gestor de bases de datos (SGBD)?

Un **SGBD** es un software que permite crear, consultar, modificar, proteger y administrar bases de datos. También ayuda a controlar el acceso de los usuarios y a mantener la integridad de la información. Algunos ejemplos son **PostgreSQL, MySQL, SQLite y Microsoft SQL Server**.

| Base de datos | Sistema gestor de bases de datos |
|---|---|
| Es la información organizada y almacenada. | Es el programa que administra esa información. |
| Ejemplo: registros de pacientes y citas. | Ejemplo: PostgreSQL para gestionar esos registros. |

## 🔷 ¿Qué es el modelo entidad-relación?

El **modelo entidad-relación (ER)** es una herramienta conceptual que representa gráficamente los elementos de un sistema de información y sus vínculos. Se utiliza durante el diseño de bases de datos para identificar **entidades, atributos, relaciones y cardinalidades**.

- **Entidad:** objeto o concepto del que se almacena información, como *Estudiante* o *Libro*.
- **Atributo:** característica de una entidad, como *nombre* o *código*.
- **Relación:** asociación entre entidades, como *Estudiante se inscribe en Curso*.
- **Cardinalidad:** cantidad de instancias que pueden asociarse (1:1, 1:N o N:M).

---

## 🧭 Temas de la Unidad 1

| Sección | Descripción | Acceso |
|:---|:---|:---|
| 🔷 **Modelo entidad-relación** | Conceptos, ejemplos y 9 ejercicios | [![🔷 VER MODELO ER](https://img.shields.io/badge/%F0%9F%94%B7_VER_MODELO_ER-2da44e?style=for-the-badge)](#-modelo-entidad-relación-ejemplos-y-contexto) |
| 🧮 **Modelo relacional** | Sección en preparación | [![⏳ PRÓXIMAMENTE](https://img.shields.io/badge/%E2%8F%B3_PR%C3%93XIMAMENTE-8957e5?style=for-the-badge)](Modelo_Relacional/README.md) |
| 💻 **Código SQL** | Sección en preparación | [![⏳ PRÓXIMAMENTE](https://img.shields.io/badge/%E2%8F%B3_PR%C3%93XIMAMENTE-d97706?style=for-the-badge)](Codigo_SQL/README.md) |

---

## 🔷 Modelo entidad-relación: ejemplos y contexto

**Ejemplo sencillo — Biblioteca:** un socio puede realizar varios préstamos y cada préstamo registra el libro prestado y las fechas correspondientes. Este contexto permite reconocer entidades y relaciones antes de dibujar el diagrama.

**Ejemplo sencillo — Tienda:** un cliente puede comprar diferentes productos; para representar una compra con varios productos se necesita registrar los detalles, como cantidad y precio.

### 📋 Ejemplos y ejercicios desarrollados

Los **ejemplos 1 a 4** y los **ejercicios propuestos 5 a 9** están organizados en páginas individuales, con contexto, elementos del modelo, material gráfico de referencia y botones para regresar.

> **Imágenes:** se muestran las capturas originales aportadas, sin recortes y ampliadas proporcionalmente a 3840 píxeles de ancho. Hay dos versiones de biblioteca y ninguna captura de restaurante.

| N.º | Tema | Acceso |
|:--:|---|---|
| 1 | **Ejemplo: Sistema de Biblioteca** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-2ea44f?style=for-the-badge)](Ejercicios/01-biblioteca.md) |
| 2 | **Ejemplo: Pedidos de Restaurante** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-0969da?style=for-the-badge)](Ejercicios/02-restaurante.md) |
| 3 | **Ejemplo: Clínica Médica** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-8250df?style=for-the-badge)](Ejercicios/03-clinica-medica.md) |
| 4 | **Ejemplo: Sistema de Aerolínea** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-bf8700?style=for-the-badge)](Ejercicios/04-aerolinea.md) |
| 5 | **Ejercicio: Empresa Discográfica** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-d1242f?style=for-the-badge)](Ejercicios/05-discografica.md) |
| 6 | **Ejercicio: Tienda Informática** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-0a7c86?style=for-the-badge)](Ejercicios/06-tienda-informatica.md) |
| 7 | **Ejercicio: Discos Musicales** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-a04cc2?style=for-the-badge)](Ejercicios/07-discos-musicales.md) |
| 8 | **Ejercicio: Camiones** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-bc4c00?style=for-the-badge)](Ejercicios/08-camiones.md) |
| 9 | **Ejercicio: Veterinaria** | [![Ver ejercicio](https://img.shields.io/badge/Ver_ejercicio-57606a?style=for-the-badge)](Ejercicios/09-veterinaria.md) |

---

## 🧠 Conclusiones

El modelo entidad-relación permite traducir situaciones reales a estructuras conceptuales organizadas. La identificación de entidades, atributos y cardinalidades facilita la construcción posterior de una base de datos relacional.

<div align="center">

[![🏠 VOLVER AL INICIO](https://img.shields.io/badge/%F0%9F%8F%A0_VOLVER_AL_INICIO-0969da?style=for-the-badge)](../README.md)

</div>
