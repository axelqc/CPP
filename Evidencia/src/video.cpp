#include "video.h"
// poner video:: antes de cada metodo
// remplazar ";" por { }

// inicializar atributos de la clase
video::video(){
    iD = "00";
    titulo = "Blue sky";
    duracion = 93;
    genero = "Drama";
    calificacionPromedio = 5.0;
}

// constructor con parametros
video::video (string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio){
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

// metodos modificadores
void video::setId(string _iD){}
void video::setTitulo(string _titulo){}
void video::setDuracion(int _duracion){}
void video::setGenero(string _genero){}
void video::setCalificacion(double _calificacionPromedio){}

// metodos acceso
// se le ponen return
string video::getId(){
    return iD;
}
string video::getTitulo(){
    return titulo;
}
int video::getDuracion(){
    return duracion;
}
string video::getGenero(){
    return genero;
}
double video::getCalificacion(){
    return calificacionPromedio;
}

//otros metodos
// return concatenanda todos los aributos
string video::str(){
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio);
}

