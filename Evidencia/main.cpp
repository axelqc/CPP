#include <iostream>
#include "video.h"
#include "pelicula.h"
#include "serie.h"
#include "episodio.h"


using namespace std;

int main()
{
    //peliculas directorioPeliculas{};
    //directorioPeliculas.leerArchivo();

    Video lunes;
    cout << lunes.str() << endl;

    Video martes("001", "Grown ups", 40, "Comedia", 100);
    cout << martes.str() << endl;

    Pelicula jueves;
    cout << jueves.str() << endl;

    Pelicula miercoles("002", "Cafe", 120, "Documental", 90, 1);
    cout << miercoles.str() << endl;

    //
    Serie stranger("003", "Stranger things", 500, "Sobrenatural", 50);
    cout << stranger.str() << endl;

    Episodio episodio1("Episodio Bien fumado", 1, 0);
    cout << episodio1.str() << endl;

    stranger.setEpisodio(0, episodio1);
    stranger.setCantidad(stranger.getCantidad() + 1);
    stranger.setEpisodio(1, episodio1);
    stranger.setCantidad(stranger.getCantidad() + 1);

    cout << stranger.str() << endl;

    // Declaracion arreglo de la clase video
    // se pone el asterisco
    // & ponerselo para indicar que son un arreglo de apuntadores
    Video *arrPtrVideo[] = {&martes, &jueves, &stranger};

    // Desplegar los prt (direcciones de memoria)
    // cout PTRs de video
    // no se pone flechita
    cout << "PTRs del arreglo video\n";
    for(int index=0; index < 3; index++) {
        cout << arrPtrVideo[index] << endl;
    }

    // aqui si va con flechas
    cout << "arreglo video\n";
    for(int index=0; index < 3; index++) {
        // a que str() se esta ejecutandose
        // aqui si va ocn flecha
        cout << arrPtrVideo[index]->str() << endl;
    }

    return 0;
}
