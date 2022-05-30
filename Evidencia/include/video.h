#ifndef VIDEO_H
#define VIDEO_H

#include <stdio.h>
#include <iostream>
using namespace std;

class video
{

// atributos de la classe
    protected:
        string iD;
        string titulo;
        int duracion;
        string genero;
        double calificacionPromedio;
// metodos
    public:
        // metodos contructores
        video();
        video (string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

        // metodos modificadores
        void setId(string _iD);
        void setTitulo(string _titulo);
        void setDuracion(int _duracion);
        void setGenero(string _genero);
        void setCalificacion(double _calificacionPromedio);

        // metodos acceso
        string getId();
        string getTitulo();
        int getDuracion();
        string getGenero();
        double getCalificacion();

        // otros metodos
        string str();

};

#endif // VIDEO_H
