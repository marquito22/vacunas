#include <stdio.h>
#include <stdlib.h>
#include "ciudadano.h"
#include <string.h>
#include <time.h>


int main()
{
    srand(time(0));
    Ciudadano c1=cargarCiudadano();
    mostrarCiudadano(c1);
    buscar(c1);
    return 0;
}
