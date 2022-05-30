#include "serie.h"

// se copia desde public hasta el final (endif)
serie::serie():video() {
    cantidad=0;
} //poner serie::


serie::serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio): video(_iD, _titulo, _duracion, _genero, 0) {
    cantidad=0;
}

// metodos modificadores SETS
// quitar ; y poner {}
void serie::setEpisodio(int _index, episodio _episodio) {
    // validar que el index sea correcto (cantidad >= 0 and index < cantidad)
    // si no cumple el index no se cambia el episodio

    if ((cantidad >= 0) && (_index < cantidad))
        episodios[_index] = _episodio;
}

void serie::setCantidad(int _cantidad){
    cantidad = _cantidad;
}

// metodos de acceso GETS
episodio serie::getEpisodio(int _index){
    episodio ep;
    // valida que el index sea correcto
    // si no cumple el index no se cambia

    return episodios[_index];
    return episodio();

    // else return episodio de prueba se declara un episodio de prueba

}

int serie::getCantidad(){
    return cantidad;
}

// otros metodos
double serie::calculaCalPromedio(){
    // cilco for que recorra
    double acum = 0;
    for(int index=0; index < cantidad; index ++)
        acum = acum + episodios[index].getCalificacion();

    if (cantidad > 0)
        return acum/cantidad;

    else
        return 0;
}

string serie::str(){

    // concatenar todos los episodios de le serie
    string acum = "\n";

    for(int index=0; index < cantidad; index ++)
        acum = acum + episodios[index].str() + "\n";


    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio) + acum;
}

