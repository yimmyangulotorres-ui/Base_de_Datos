# Tipos de datos [5]: Variables y Constantes

# Clasificación de los tipos de datos [5]
## Simples

- Enteros (int): valores que no tienen punto decimal o flotante, pueden ser positivos o negativos y se incluye el cero: 10, 120, 1200, etc.

- Reales (float o double): valores que tienen punto decimal o flotante, pueden ser positivos o negativos y se incluye el cero: 4.5, 3.1416, 0.83, etc.

- Lógicos (boolean): tipo de dato especial que solo puede almacenar uno de dos valores, falso o verdadero.

- Carácter (char): conformados por un solo carácter, van entre comillas dobles, y pueden ser letras, números, signos o sı́mbolos; por ejemplo: “a”, “x”, “3”, “#”.
- Cadena (también conocidas como alfanuméricos): La combinación de los caracteres forma una cadena. Ejemplo: “Calle 107 # 125-48A”, “Hola mundo”.


## Compuestos

  Estos tipos de dato no vimos dentro de la Unidad pero, esto nos servira para tener mas conocimientos para ciclos posteriorres
- Arreglos (vectores y matrices): Conjunto de elementos del mismo tipo almacenados de forma contigua; permiten acceder por índices.

- Registros (struct): Agrupan distintos tipos de datos [5] bajo un mismo nombre; cada campo representa un atributo.

- Listas: Colección dinámica de elementos enlazados que permiten inserciones y eliminaciones flexibles.

- Pilas: Estructura tipo LIFO (último en entrar, primero en salir), usada para manejar operaciones anidadas.

- Colas: Estructura tipo FIFO (primero en entrar, primero en salir), ideal para procesar tareas en orden.

- Conjuntos: Agrupan elementos únicos sin orden específico; permiten operaciones como unión o intersección.

- Archivos: Estructuras que permiten almacenar y recuperar datos [5] de manera permanente en dispositivos externos.

# Identificadores y Variables

## Identificadores: 
Un identificador es el nombre que se le asigna a una determinada variable, constante, funcion o cualquier elemento dentro de un lenguaje de programación [1] que sirva para almacenar datos [5] o realizar alguna operación matemática, este nombre no debe ser de una palabra reservada del mismo sistema, casi contrario no funcionara, para almacenar datos [5] dentro de ella. Todo identificador si va a utilizar dos palabras como nombre debe utilizar la practica Lower Camel Case(o convención con guion bajo), de que se trata esta practica, bueno consiste en que, si se va a escribir el nombre de la variable un poco extenso, que la primera palabra antes del primer guion se escriba con minuscula, y las demas palabras despues del guion todas deben empezar con la primera letra en Mayuscula. Un ejemplo practico para facilitar la comprensión: "nombres_Apellido1_Apellido2".

En este ejemplo se puede ver claramente lo explicado anteriormente, la primera palabra que en este caso es nombres se escribe en minuscula, y las demas palabras que van despues de los guiones, todas tienen la primera letra en Mayusculas, puede que no se la haya aplicado mucho en esta unidad, pero, en ciclos posteriores en todos los algoritmo [2]s que realizemos la vamos a necesitar.

Algunas de las reglas primordiales para un identificador son las siguiente:
-Siempre debe comenzar por una letra o subguión. No debe empezar con número.
-No debe tener Espacios en Blanco.
-No debe tener caracteres especiales (#, $, %, -,...).
-No debe tener letras como la Ñ o ñ, Acento agudo (Á, é, í...), Diéresis (ü, ë, ...), etc.
 A continuación algunos ejemplos para mayor comprension:

- 1nombre: Incorrecto comienza con un numero el identificador el programa no permite eso

- nombre apellido: Incorrecto cuenta con un espacio en blanco, puede causar una falla en el programa

- edad-usuario: Incorrecto no puede usar el guion normal, debe utilizar el guion bajo

- año_actual: Incorrecto no puede llevar letras que no correspondan ene le idioma ingles como la ñ por ejemplo

 


## Variables:
Las variables [4] son espacios en memoria que permiten almacenar datos [5], los cuales pueden ir cambiando mendiante el transcurso del programa, dentro de un rango de valores, dependiendo del tipo de dato que se quiera almacenar, como lo podria ser una variable de tipo entero, solo puede almacenar valores enteros, y si intentamos almacenar algun otro tipo de dato dentro de esta no va a ser posible.

En este pequeño algoritmo [2] podemos observar como funciona una variable, primero x y z son declaradas, despues se les asigna un valor a las 2 variables [4], despues se presenta el valor en pantalla de x y z en ese momento, luego a x se le suma a su valor anterior 2 y a z en cambio se le resta el valor anterior, y por ultimo se presenta el valor de x y z despues de su respectiva operación, con este programa vimos como funciona una variable en un lenguaje de programación [1].

<img width="463" height="268" alt="Captura de pantalla 2025-10-31 051620" src="https://github.com/user-attachments/assets/72ebfedc-0240-4d8f-a638-8caf92d68f4e" />

## Asignacion:
La asignación de datos [5] consiste en darle el valor a una variable o una constante mediante un signo en especifico que en algunos casos es el igual = y en otros casos es este <- pero los dos son lo mismo, en los ejemplos anteriores y posteriores se ve esto con bastante claridad.
Y por ultimo el valor que se quiera agregar mediante la asignacion debe ser compatible con el tipo de dato al que pertenece dicha variable o constante eso seria todo por la asignación

## Constantes:
Las constantes [4] son valores que no cambian durante la ejecución del programa, ademas al contrario de las variables [4] para poder identificar las constantes [4], las podemos escribir en todo el nombre en Mayusculas, a continuacion un ejemplo para mayor comprensión.

Este ejemplo es para calcular el area de un circulo con su radio ingresado desde teclado, pero lo que nos interesa es la constante VALOR_PI que como ya explique se debe escribir ne mayusculas para poderla identificar, gracias a esto este algoritmo [2] no cuenta con errores gramaticales ni semanticos.

<img width="553" height="266" alt="Captura de pantalla 2025-10-31 052408" src="https://github.com/user-attachments/assets/46e29b40-13e2-49e0-b203-b8c17b1ac01d" />

## Tablas de Operadores

<img width="897" height="142" alt="Captura de pantalla 2025-10-31 053746" src="https://github.com/user-attachments/assets/9a53ca9c-bf0e-4b00-a94c-85478f7e4532" />
<img width="832" height="255" alt="Captura de pantalla 2025-10-31 053740" src="https://github.com/user-attachments/assets/77e5e718-4fb3-44bc-af81-33988573e0e7" />
<img width="817" height="288" alt="Captura de pantalla 2025-10-31 053732" src="https://github.com/user-attachments/assets/02436ce5-d60b-4f7f-bf42-74f044e35410" />
<img width="701" height="323" alt="Captura de pantalla 2025-10-31 053757" src="https://github.com/user-attachments/assets/98c64fa6-9736-45cc-9544-be74bcbc93da" />


## Ejemplo de la prioridad de los operadores [8] en accion

<img width="402" height="218" alt="Captura de pantalla 2025-10-31 054421" src="https://github.com/user-attachments/assets/1cf59ce7-11d0-46f7-98e0-3088e7696a6e" />

Eso seria todo por esta seccion por favor vuelva al contenido de la Unidad para pasar a otra sección:

