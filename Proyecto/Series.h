#ifndef SERIES_H
#define SERIES_H
using namespace std;
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <fstream>

// composicion con serie
#include "serie.h"
#include "episodio.h"

const int MAX_SERIES = 50;

class Series
{
    private:
         Serie *ArrPrtSeries[MAX_SERIES];
         int cantidad{};

    public:
        Series();
    // otros metodos
    void leerArchivo();
    void reporteTodasLasSeries();
    void reporteConCalificaciones(double _calificacion);
    void reporteGenero(string _genero);
    void calcularCalificacionSeries();

    // metodos de acceso gets
    Serie *getPtrSerie(string _iD);
    int getCantidadSeries();

    // metodos modificadores
    void setPtrSerie(Serie *_ptrSerie);
    void setCantidadSeries(int _cantidad);
};

#endif // SERIES_H
