#ifndef SERIE_H
#define SERIE_H

#include <stdio.h>
#include <iostream>
#include "video.h"
//indicando composicion
#include "episodio.h"
using namespace std;


class serie: public video
{
    private:
        episodio episodios[5];
        // cantidad de episodios
        int cantidad;
    public:
        serie();
        serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

        // metodos modificadores SETS
        void setEpisodio(int _index, episodio _episodio);
        void setCantidad(int _cantidad);

        // metodos de acceso GETS
        episodio getEpisodio(int _index);
        int getCantidad();

        // otros metodos
        double calculaCalPromedio();
        string str();
};

#endif // SERIE_H
