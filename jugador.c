#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "jugador.h"
#include "titulo.h"
struct JugadorEstructura{
  int dni;
  char nombre[20];
  char apellido[20];
  int cantidadTitulos;
  Titulo titulos[30];
};
/////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:
Jugador crearJugador(int dni, char nombre[20], char apellido[20]){
  Jugador j = malloc(sizeof(struct JugadorEstructura));
  strcpy(j->nombre, nombre);
  strcpy(j->apellido, apellido);
  j->dni = dni;
  printf("a");
  j->cantidadTitulos = 0;
  return j;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:
void mostrarJugador(Jugador j){
  printf("-----Esto debe mostrar al jugador-----\n");
// int dni;
// char nombre[20];
// char apellido[20];
// int cantidadTitulos;
};
///////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:
void mostrarTitulos(Jugador j){
  printf("-----Esto debe mostrar los titulos del jugador-----\n");
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
//Pre:
//Post:
//Axiomas:
Jugador agregarTitulo(Jugador j){
  printf("-----Esto debe pedir los datos del titulo\n y agregarlo al Jugador-----\n");
  return j;
};
//deben agregar los get y set
int getDni(Jugador j){
    return j->dni;
}

char *getNombreJugador(Jugador j){
    return j->nombre;
}

char *getApellidoJugador(Jugador j){
    return j->apellido;
}

int getCantidadTitulos(Jugador j){
    return j->cantidadTitulos;
}

Titulo *getTitulos(Jugador j){
    return j->titulos;
}
