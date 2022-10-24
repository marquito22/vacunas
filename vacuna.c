#include <stdio.h>
#include <stdlib.h>
#include "vacuna.h"
#include <string.h>
#include <time.h>


struct VacunaE{

    char nombre[20];
    char lote[10];
};

Vacuna cargarVacuna(){

    Vacuna v=malloc(sizeof(struct VacunaE));
    printf("Ingrese el nombre de la vacuna\n");
    fflush(stdin);
    gets(v->nombre);

    char lote[11];
    generarLote(lote);
    strcpy(v->lote,lote);

    return v;
};

void generarLote(char * lote){

    int aleatorio;
    char caracteres[]="qwertyuiopasdfghjklñzxcvbnm1234567890";

    for (int i=0;i<11-1;i++){
        aleatorio= rand()% (strlen(caracteres));
        lote[i]=caracteres[aleatorio];
    }
    lote[11-1]= '\0';

};

void mostarVacuna(Vacuna v){

    printf("\nNombre: %s\n",v->nombre);
    printf("Lote: %s \n",v->lote);
};







