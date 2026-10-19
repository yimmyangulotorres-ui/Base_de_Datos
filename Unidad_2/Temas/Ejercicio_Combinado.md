# 🔄 Ejercicio Combinado: Estructuras Condicionales + Repetitivas  

## 📝 Enunciado del Problema  

En un parqueadero se necesita un programa que controle la entrada de vehículos.  
El sistema debe solicitar cuántos vehículos van a registrarse y, uno por uno, pedir el tipo de vehículo ingresado por el usuario:

- **1 = Moto**  
- **2 = Auto**  
- **3 = Camión**

Utilizando **estructuras repetitivas**, el programa debe repetir el proceso de registro hasta completar la cantidad total de vehículos ingresada inicialmente.  

Con **estructuras condicionales**, el sistema debe identificar el tipo de vehículo ingresado y aumentar el contador correspondiente.  

---

## 🎯 Objetivo del programa

El sistema debe:

1. Registrar varios vehículos utilizando un ciclo.  
2. Determinar el tipo de vehículo ingresado mediante condicionales.  
3. Llevar un conteo separado de:
   - Motos
   - Autos
   - Camiones  
4. Mostrar el total registrado al finalizar todo el proceso.  

---

## 📌 Pasos para completar el ejercicio

- Diseñar el diagrama de flujo simplificado    
- Elaborar el programa en Java / Python, con el apoyo del IDE Visual Studio Code  
- Las pruebas de escritorio  
- La verificación final del código  

## Diagrama de Flujo:

<img width="749" height="623" alt="imagen" src="https://github.com/user-attachments/assets/23f42b87-0f10-42fe-9ab1-04f3befef84f" />

## Codificación en Java:

```java
import java.util.Scanner;

public class deber {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int i, vehi, aut;
        int cantidad1 = 0, cantidad2 = 0, cantidad3 = 0;

        System.out.println("Ingrese el numero de vehiculos que van a ingresar");
        vehi = sc.nextInt();

        for (i = 1; i <= vehi; i++) {
            System.out.println("\n============ VEHICULO " + i + " ============");
            System.out.println("Ingrese el tipo de vehiculo " + i + " (1 = moto, 2 = auto, 3 = camion)");
            aut = sc.nextInt();

            switch (aut) {
                case 1:
                    cantidad1++;
                    break;
                case 2:
                    cantidad2++;
                    break;
                case 3:
                    cantidad3++;
                    break;
                default:
                    System.out.println("Tipo de Vehiculo Invalido");
                    break;
            }
        }

        System.out.println("\nLa cantidad de vehiculos ingresados es: " + vehi);
        System.out.println("La cantidad de motos ingresadas es: " + cantidad1);
        System.out.println("La cantidad de autos ingresados es: " + cantidad2);
        System.out.println("La cantidad de camiones ingresados es: " + cantidad3);

        sc.close();
    }
}
```
## Pruebas de Escritorio:

<img width="497" height="370" alt="Captura de pantalla 2025-12-07 212337" src="https://github.com/user-attachments/assets/82ac6b21-b078-49de-91f6-6e42364faacc" />

---

<div align="center">

[![📊 Dificultades de la Unidad 2](https://img.shields.io/badge/📊Dificultades_de_la_Unidad_2_-green?style=for-the-badge)](./Dificultades_Unidad2.md)

</div> 

<div align="center">

[![🔙 Regresar a Contenidos](https://img.shields.io/badge/🔙_Regresar_a_Contenidos-red?style=for-the-badge)](../Contenidos.md)

</div>


