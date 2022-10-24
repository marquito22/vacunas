#ifndef CIUDADANO_H_INCLUDED
#define CIUDADANO_H_INCLUDED



struct CiudadanoE ;

typedef struct CiudadanoE * Ciudadano;

Ciudadano cargarCiudadano();
void mostrarCiudadano(Ciudadano  c);
int buscar(Ciudadano c);



#endif // CIUDADANO_H_INCLUDED
