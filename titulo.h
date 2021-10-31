#ifndef TITULO_H_INCLUDED
#define TITULO_H_INCLUDED
struct TituloEstructura;
typedef struct TituloEstructura * Titulo;
//pre:
//Post:
//Axiomas:
Titulo crearTitulo(char nombreT[20], int anio);
//pre:
//Post:
//Axiomas:
void mostrarTitulo(Titulo t);
//agregar los get y set;
char *getNombreTitulo(Titulo t);
int getAnioTitulo(Titulo t);
#endif // TITULO_H_INCLUDED
