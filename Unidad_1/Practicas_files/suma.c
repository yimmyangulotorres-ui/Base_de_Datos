#include <stdio.h>

int main() {
    int a, b, suma;
    printf("Ingrese primer numero: ");
    if (scanf("%d", &a) != 1) return 1;
    printf("Ingrese segundo numero: ");
    if (scanf("%d", &b) != 1) return 1;
    suma = a + b;
    printf("La suma es: %d\n", suma);
    return 0;
}
