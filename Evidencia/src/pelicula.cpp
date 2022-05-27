#include "pelicula.h"



pelicula::pelicula(): video(){
    oscares = 1;
}
pelicula::pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares): video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
    oscares = _oscares;
}

// modiciadores - set
void pelicula::setOscares(int _oscares){
    oscares = _oscares;
}
// metodos de acceso - get
int pelicula::getOscares() {
    return oscares;
}

string pelicula::str() // overriding
{
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio) + "," + to_string(oscares);
}
