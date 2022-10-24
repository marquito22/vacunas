#ifndef VACUNA_H_INCLUDED
#define VACUNA_H_INCLUDED

struct VacunaE;

typedef struct VacunaE * Vacuna;

Vacuna cargarVacuna();
void mostarVacuna(Vacuna  v);
void generarLote(char * lote);

#endif // VACUNA_H_INCLUDED
