#include <iostream>
#include "video.h"
#include "pelicula.h"

using namespace std;

int main()
{
    video lunes;
    cout << lunes.str() << endl;

    video martes("001", "Grown ups", 40, "Comedia", 100);
    cout << martes.str() << endl;

    pelicula jueves;
    cout << jueves.str() << endl;

    pelicula miercoles("002", "Cafe", 120, "Documental", 90, 1);
    cout << miercoles.str() << endl;

    return 0;
}
