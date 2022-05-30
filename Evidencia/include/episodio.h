#ifndef EPISODIO_H
#define EPISODIO_H

#include <stdio.h>
#include <iostream>
using namespace std;


class episodio
{
    protected:
        string titulo;
        int temporada;
        int calificacion;

    public:
        // metodos contrctures
        episodio();
        episodio(string _titulo, int _temporada, double _calificacion);

        // metodos modificadores
        void setTitulo(string _titulo);
        void setTemporada(int _temporada);
        void seCalificacion(double _calificacion);

        // metodos de acceso
        string getTitulo();
        int getTemporada();
        double getCalificacion();

        // otros metodos
        string str();


};

#endif // EPISODIO_H
