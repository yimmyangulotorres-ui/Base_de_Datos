; PSeInt - Cálculo del IMC
Proceso CalcularIMC
    escribir "Ingrese su peso en kilogramos:"
    leer peso
    escribir "Ingrese su altura en metros:"
    leer altura
    si altura <= 0 entonces
        escribir "Altura inválida."
    sino
        imc <- peso / (altura * altura)
        escribir "Su IMC es: ", imc
        si imc < 18.5 entonces
            escribir "Bajo peso"
        sino
            si imc < 25 entonces
                escribir "Normal"
            sino
                si imc < 30 entonces
                    escribir "Sobrepeso"
                sino
                    escribir "Obesidad"
                finSi
            finSi
        finSi
    finSi
FinProceso
