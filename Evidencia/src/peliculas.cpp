#include "peliculas.h"


Peliculas::Peliculas(){

}

// otros metodos
// Método que lee de un archivo csv la información de cada película,
// crea un objeto de la clase Pelicula con la información leída del archivo
// usando el operador new,para que ese apuntador que retorna el new
// sea el que se se almacene en el arreglo de apuntadore-arrPtrpeliculas
//ylas va dande de alta en la siguiente posición disponible en el
// arreglo

void Peliculas::leerArchivo()
{
    fstream fin;
    string row[6];
    string line, word;

    // abrir archivo
    fin.open("C:\\Users\\AxelC\\OneDrive\\Escritorio\\Semestre 2\\Periodo 3\\POO 2\\Proyecto_Axel_Quiroga\\TC1030_301_Axel_Quiroga\\Evidencia\\include\\Pelicula.csv", ios::in);

    cantidad = 0;
    while(getline(fin, line)) {
        cout << cantidad << line << endl;
        stringstream s(line);
        int iR = 0;
        while (getline(s, word, ',')) {
            row[iR++]=word;
        }
    arrPrtPeliculas[cantidad] = new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5]));

    //cout  << arrPrtPeliculas[cantidad]->str() << endl;

    cantidad = cantidad + 1;
    }
    fin.close();

    //for(int iR=0; iR << cantidad; iR++) {
    //    cout << iR << "-" << arrPrtPeliculas[iR]->str() << endl;
    //}
}

void Peliculas::reporteTodasLasPeliculas(){

}
void Peliculas::reporteConCalificaciones(double _calificacion){

}
void Peliculas::reporteGenero(string _genero){

}

// metodos de acceso (GETS)
Pelicula* Peliculas::getPtrPelicula(string _iD){

}
int Peliculas::getCantidadPeliculas(){

}

// metodos modificadores SETS
void Peliculas::setPtrPelicula(Pelicula *_ptrPelicula){

}
void Peliculas::setCantidadPeliculas(int _cantidad){

}
