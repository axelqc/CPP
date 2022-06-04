#include "pelicula.h"



Pelicula::Pelicula(): Video(){
    oscares = 1;
}
Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares): Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio){
    oscares = _oscares;
}

Pelicula::~Pelicula() {
    cout << "Se destruyo un objeto pelicula" << endl;
}

// modiciadores - set
void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}
// metodos de acceso - get
int Pelicula::getOscares() {
    return oscares;
}

string Pelicula::str() // overriding
{
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio) + "," + to_string(oscares);
}
