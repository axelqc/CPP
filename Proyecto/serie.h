#ifndef SERIE_H
#define SERIE_H

#include <stdio.h>
#include <iostream>
#include "video.h"
//indicando composicion
#include "episodio.h"
#include <ostream>
using namespace std;


class Serie: public Video
{
    private:
        Episodio episodios[5];
        // cantidad de episodios
        int cantidad;
    public:
        Serie();
        Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

        // metodos modificadores SETS
        void setEpisodio(int _index, Episodio _episodio);
        void setCantidad(int _cantidad);

        // metodos de acceso GETS
        Episodio getEpisodio(int _index);
        int getCantidad();

        // otros metodos
        double calculaCalPromedio();
        string str();

        friend ostream & operator << (ostream &out, const Serie &s);
};

#endif // SERIE_H
