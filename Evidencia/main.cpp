#include <iostream>
#include "video.h"
#include "pelicula.h"
#include "serie.h"
#include "episodio.h"
#include "peliculas.h"

using namespace std;

int main()
{
    Peliculas directorioPeliculas{};
    directorioPeliculas.leerArchivo();
    cout << " " << endl;
    directorioPeliculas.reporteTodasLasPeliculas();

    directorioPeliculas.reporteGenero("comedia");

    directorioPeliculas.reporteConCalificaciones(6.5);




    return 0;
}
