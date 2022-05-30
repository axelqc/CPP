#include "episodio.h"

episodio::episodio() {
    titulo = "cap 1";
    temporada = 1;
    calificacion = 0;
}
episodio::episodio(string _titulo, int _temporada, double _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

// metodos modificadores
void episodio::setTitulo(string _titulo){}
void episodio::setTemporada(int _temporada){}
void episodio::seCalificacion(double _calificacion){}

//metodos de acceso
string episodio::getTitulo(){
    return titulo;
}
int episodio::getTemporada(){
    return temporada;
}
double episodio::getCalificacion(){
    return calificacion;
}

// otros metodos
string episodio::str() {
    return titulo + ", " + to_string(temporada) + ", " + to_string(calificacion);
}

