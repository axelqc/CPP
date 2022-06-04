#include "video.h"
// poner video:: antes de cada metodo
// remplazar ";" por { }

// inicializar atributos de la clase
Video::Video(){
    iD = "00";
    titulo = "Blue sky";
    duracion = 93;
    genero = "Drama";
    calificacionPromedio = 5.0;
}

// constructor con parametros
Video::Video (string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

// metodos modificadores
void Video::setId(string _iD){
    iD = _iD;
}
void Video::setTitulo(string _titulo){
    titulo = _titulo;
}
void Video::setDuracion(int _duracion){
    duracion = _duracion;
}
void Video::setGenero(string _genero){
    genero = _genero;
}
void Video::setCalificacion(double _calificacionPromedio){
    calificacionPromedio = _calificacionPromedio;
}

// metodos acceso
// se le ponen return
string Video::getId(){
    return iD;
}
string Video::getTitulo(){
    return titulo;
}
int Video::getDuracion(){
    return duracion;
}
string Video::getGenero(){
    return genero;
}
double Video::getCalificacion(){
    return calificacionPromedio;
}

//otros metodos
// return concatenanda todos los aributos
string Video::str(){
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio);
}

