#include <assert.h>
#include "Conversion.h"
#include <math.h>
#include <stdio.h>

double main(){
    assert(areNear(celsius(0), -17.7));
    assert(areNear(fahrenheit(0), 32));

    assert(areNear(celsius(-40), fahrenheit(-40)));
    return 0;
}