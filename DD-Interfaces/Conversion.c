#include "Conversion.h"
#include <stdio.h>

const double tolerancia = 0.1;

double celsius(double grado) {
    return (5.0 / 9.0) * grado - 17.7;
}  

double fahrenheit (double grado) {
    return (9.0 / 5.0) * grado + 32;
}

double areNear(double grado1, double grado2) {
    return grado1 - grado2 < tolerancia && grado2 - grado1 < tolerancia;
}