#include "serie.h"

// se copia desde public hasta el final (endif)
Serie::Serie():Video() {
    cantidad=0;
} //poner serie::


Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio): Video(_iD, _titulo, _duracion, _genero, 0) {
    cantidad= cantidad;
}

// metodos modificadores SETS
// quitar ; y poner {}

void Serie::setEpisodio(int _index, Episodio _episodio) {
    // validar que el _index sea >= 0 and  _index < cantidad
    // si no cumple el _index no se cambia
    if ( _index >= 0 && _index <= cantidad)
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
    if ( _index >= 0 && _index <= cantidad)
        return episodios[_index];
    else
        // else return episodio de prueba se declara un episodio de prueba
        return ep;
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


    return "S" + iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio) + acum;
}
// sobre carga funcon amiga
ostream & operator << (ostream &out, const Serie &s) {
    string acumulador = "\n";
    for(int indice = 0; indice < s.cantidad; indice++)
        acumulador = acumulador +  to_string(indice) + ':' + s.episodios[indice].str() + '\n';
    out << 'S' << s.iD << ',' << s.titulo << ',' << s.duracion << ',' << s.genero << ',' << s.calificacionPromedio << ',' << s.cantidad << acumulador << endl;
    return out;
}



