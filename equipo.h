#ifndef EQUIPO_H_INCLUDED
#define EQUIPO_H_INCLUDED
#include "jugador.h"
struct EquipoEstructura;
typedef struct EquipoEstructura * Equipo;
//Pre: nombre del equipo y nombre del estadio (hasta 20 char)
//Post: estructura tipo equipo
//Axiomas:
Equipo crearEquipo(char nombreEquipo[20], char nombreEstadio[20]);
//Pre:
//Post:
//Axiomas:
Equipo agregarJugador(Equipo e);
//Pre:
//Post:
//Axiomas:
void mostrarEquipo(Equipo e);
//Pre:
//Post:
//Axiomas:
void mostrarJugadores(Equipo e);

//getters
char * getNombreEquipo(Equipo e);

char * getNombreEstadio(Equipo e);

int getCantidadJugadores(Equipo e);

//setters
Jugador * getJugadores(Equipo e);


#endif // EQUIPO_H_INCLUDED
