#include "serie.h"

// se copia desde public hasta el final (endif)
Serie::Serie():Video() {
    cantidad=0;
} //poner serie::


Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio): Video(_iD, _titulo, _duracion, _genero, 0) {
    cantidad=0;
}

// metodos modificadores SETS
// quitar ; y poner {}
void Serie::setEpisodio(int _index, Episodio _episodio) {
    // validar que el index sea correcto (cantidad >= 0 and index < cantidad)
    // si no cumple el index no se cambia el episodio

    if ((cantidad >= 0) && (_index < cantidad))
        episodios[_index] = _episodio;
}

void Serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}

// metodos de acceso GETS
Episodio Serie::getEpisodio(int _index){
    Episodio ep;
    // valida que el index sea correcto
    // si no cumple el index no se cambia

    return episodios[_index];
    return Episodio();

    // else return episodio de prueba se declara un episodio de prueba

}

int Serie::getCantidad(){
    return cantidad;
}

// otros metodos
double Serie::calculaCalPromedio(){
    // cilco for que recorra
    double acum = 0;
    for(int index=0; index < cantidad; index ++)
        acum = acum + episodios[index].getCalificacion();

    if (cantidad > 0)
        return acum/cantidad;

    else
        return 0;
}

string Serie::str(){

    // concatenar todos los episodios de le serie
    string acum = "\n";

    for(int index=0; index < cantidad; index ++)
        acum = acum + episodios[index].str() + "\n";


    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio) + acum;
}

