#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "equipo.h"
#include "jugador.h"

struct EquipoEstructura
{
  char nombreEquipo[20];
  int cantidadJugadores;
  char nombreEstadio[50];
  Jugador jugadores[23];
};

/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:

Equipo crearEquipo (char nombreEquipo[20], char nombreEstadio[50])
{
  Equipo e = malloc(sizeof(struct EquipoEstructura));
  printf("%s\n", nombreEquipo);
  printf("%s\n", nombreEstadio);
  strcpy (e->nombreEquipo, nombreEquipo);
  strcpy (e->nombreEstadio, nombreEstadio);
  printf("%s\n", e->nombreEstadio);
  e->cantidadJugadores = 0;
  return e;
};
///////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:
Equipo agregarJugador(Equipo e)
{
    char nombre[20], apellido[20];
    int dni;
    //Jugador nuevoJugador;
    printf("Ingrese un dni\n");
    scanf(" %d", &dni);
    printf("Ingrese un nombre\n");
    fflush(stdin);
    gets(nombre);
    printf("Ingrese un apellido\n");
    fflush(stdin);
    gets(apellido);
    // y asignarlo al vector de jugadores, una vez hecho, cantidadJugadores mas uno
    //int dni, char nombre[20], char apellido[20]
    //nuevoJugador = crearJugador(dni, nombre, apellido);
    e->jugadores[e->cantidadJugadores] = crearJugador(dni, nombre, apellido);
    e->cantidadJugadores += 1;
    return e;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:
void mostrarEquipo(Equipo e)
{
    int i;
    Jugador p;
    printf("--------------Esto debe mostrar al Equipo------------\n");
    printf("Nombre equipo: %s\n", e->nombreEquipo);
    printf("Cantidad de jugadores: %d\n", e->cantidadJugadores);
    printf("Nombre estadio: %s\n", e->nombreEstadio);
    //EquipoEstructura ee = *e;
    //JugadorEstructura je = *ee->jugadores;
    //printf("nombre de jugador: %s \n", je.nombre);
    //    for (i = 0; i < e->cantidadJugadores; i++){
    //        printf("%s \n", e->jugadores[i]->nombre);
    //    }
    mostrarJugadores(e);
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:
void mostrarJugadores(Equipo e){


    printf("--------------Jugadores del equipo------------\n");

    int cantJug, i;
    Jugador ptr_jug;

    cantJug = getCantidadJugadores(e);

    for(i = 0; i < cantJug; i++) {
      printf("Jugador %d: ", i );
      mostrarJugador(e->jugadores[i]);
    }

}

char * getNombreEquipo(Equipo e){
    return e->nombreEquipo;
}
char * getNombreEstadio(Equipo e){
    return e->nombreEstadio;
}
int getCantidadJugadores(Equipo e) {
    return e->cantidadJugadores;
}
Jugador * getJugadores(Equipo e) {
    return e->jugadores;
}
