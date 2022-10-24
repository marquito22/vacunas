#include <stdio.h>
#include <stdlib.h>
#include "ciudadano.h"
#include "vacuna.h"
#include <string.h>
#include <time.h>

struct CiudadanoE{
    char nombreYApellido[30];
    int nroCiudadano;
    Vacuna vacunas[5];
};


Ciudadano cargarCiudadano(){

    Ciudadano c = malloc(sizeof(struct CiudadanoE));
    printf("\n Por favor ingrese el nombre del ciudadano\n");
    fflush(stdin);
    gets(c->nombreYApellido);

    c->nroCiudadano = 100000 + rand()%(1000000-100000);

    for(int i=0;i<5;i++){
        c->vacunas[i]=cargarVacuna();
    }
    return c;
};

void mostrarCiudadano(Ciudadano  c){

    printf("---DATOS DEL CIUDADANO---\n");
    printf("Nombre:%s\n", c->nombreYApellido);
    printf("Nro de ciudadano:%d\n",c->nroCiudadano);

    printf("\n---DOSIS APLICADAS---\n");

    for(int i=0;i<5;i++){
        printf("Dosis %d\n",i+1),
        mostarVacuna(c->vacunas[i]);
    }

};

int buscar(Ciudadano c){
    int resul=-1;
    char aux[20];
    printf("ingrese el nombre de la vacuna que quiera buscar\n");
    fflush(stdin);
    gets(aux);

    for (int i=0;i<5;i++){
        if (strcmp(aux,c->vacunas[i])== 0){
            resul=i+1;
            printf("Vacuna---%s---Dosis--%d\n",aux,resul);
            i=100;
        }
    }

    return resul;
};






