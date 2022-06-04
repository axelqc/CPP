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




    return 0;
}
