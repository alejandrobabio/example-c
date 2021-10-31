#ifndef JUGADOR_H_INCLUDED
#define JUGADOR_H_INCLUDED
#include "titulo.h"
struct JugadorEstructura;
typedef struct JugadorEstructura * Jugador;
//Pre:
//Post:
//Axiomas:
Jugador crearJugador(int dni, char nombre[20], char apellido[20]);
//Pre:
//Post:
//Axiomas:
void mostrarJugador(Jugador j);
//Pre:
//Post:
//Axiomas:
void mostrarTitulos(Jugador j);
//Pre:
//Post:
//Axiomas:
Jugador agregarTitulo(Jugador j);
//deben agregar los get y set
int getDni(Jugador j);

char *getNombreJugador(Jugador j);

char *getApellidoJugador(Jugador j);

int getCantidadTitulos(Jugador j);

Titulo *getTitulos(Jugador j);

#endif // JUGADOR_H_INCLUDED
