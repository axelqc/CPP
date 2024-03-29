#ifndef PELICULAS_H
#define PELICULAS_H
using namespace std;
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>

// composicion con peliculas
#include "pelicula.h"
const int MAX_PEL = 50;

class Peliculas
{
    private:
        Pelicula *arrPrtPeliculas[MAX_PEL];
        int cantidad;
    public:
        Peliculas();

    // otros metodos
    void leerArchivo();
    void reporteTodasLasPeliculas();
    void reporteConCalificaciones(double _calificacion);
    void reporteGenero(string _genero);

    // metodos de acceso (GETS)
    Pelicula* getPtrPelicula(string _iD);
    int getCantidadPeliculas();

    // metodos modificadores SETS
    void setPtrPelicula(Pelicula *_ptrPelicula);
    void setCantidadPeliculas(int _cantidad);


};

#endif // PELICULAS_H
