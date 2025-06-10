#include "Conversion.h"
#include <stdio.h>

void printfila(double valor, double gradoConvertido){
    printf("%.2f \t %.2f\n", valor, gradoConvertido);
}

void prdoubleTablaFahrenheit(double menorGrado, double mayorGrado, double escala){
    printf("Celsius\t Fahrenheit\n");
    for (double i = menorGrado; i <= mayorGrado ; i+=escala){
        printfila(i, fahrenheit(i));
    }
}

void prdoubleTablaCelsius(double menorGrado, double mayorGrado, double escala){
    printf("Fahrenheit\tCelsius\n");
    for (double i = menorGrado; i <= mayorGrado ; i+=escala){
        printfila(i, celsius(i));
    }
}

double main() {
    prdoubleTablaFahrenheit(0, 50, 10);
    prdoubleTablaCelsius(32, 122, 10);

    return 0;
}