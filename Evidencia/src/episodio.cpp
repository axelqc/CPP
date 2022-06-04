#include "episodio.h"

Episodio::Episodio() {
    titulo = "cap 1";
    temporada = 1;
    calificacion = 0;
}
Episodio::Episodio(string _titulo, int _temporada, double _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

// metodos modificadores
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}
void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}
void Episodio::seCalificacion(double _calificacion){
    calificacion = _calificacion;
}

//metodos de acceso
string Episodio::getTitulo(){
    return titulo;
}
int Episodio::getTemporada(){
    return temporada;
}
double Episodio::getCalificacion(){
    return calificacion;
}

// otros metodos
string Episodio::str() {
    return titulo + ", " + to_string(temporada) + ", " + to_string(calificacion);
}

