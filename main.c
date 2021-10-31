#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "titulo.h"
#include "jugador.h"
#include "equipo.h"


int main()
{

    printf("---------- Equipo Version 1 --------\n");
    Equipo e = crearEquipo("Velez Sarsfield", "Jose Amalfitani");
    mostrarEquipo(e);
    Equipo e1 = agregarJugador(e);

    mostrarEquipo(e1);
    Jugador j = crearJugador(3332, "Nico", "Perez");
    //printf("%d", j->dni);
    mostrarJugador(j);
    //Titulo t = crearTitulo("Libertadores", 2011);
    //mostrarTitulo(t);
    //mostrarTitulo(t);
return 0;
}

//pre:
//Post:
//Axiomas:
//////////////////////////////////
