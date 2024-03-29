#ifndef PELICULA_H
#define PELICULA_H

#include "video.h"
#include <stdio.h>
#include <iostream>
using namespace std;


class Pelicula : public Video
{
    protected:
        // atributos
        int oscares;

    public:
        // metodos contructores
        Pelicula();
        Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);
        ~Pelicula();


        // modiciadores - set
        void setOscares(int _oscares);

        // metodos de acceso - get
        int getOscares();

        // otros metodos
        string str();

};

#endif // PELICULA_H
