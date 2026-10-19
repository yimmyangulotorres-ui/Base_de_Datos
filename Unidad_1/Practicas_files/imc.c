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
