#include "peliculas.h"


peliculas::peliculas(){

}

    // otros metodos
void peliculas::leerArchivo()
// Método que lee de un archivo csv la información de cada película,
// crea un objeto de la clase Pelicula con la información leída del archivo
// usando el operador new,para que ese apuntador que retorna el new
// sea el que se se almacene en el arreglo de apuntadore-arrPtrpeliculas
//ylas va dande de alta en la siguiente posición disponible en el
// arreglo

void peliculas :: leerArchivo()
{
    // fin file input
    fstream fin;
    // Para almacenar los datos leídos del archivo:arreglo de strings
    string rowl6];
    // line almacena la linea leida,yword la palabra que se saca de line
    string line,word;
    // Abrir archivo de entrada
    fin.open("C:\Users\AxelC\OneDrive\Escritorio/Pelicula-1.csv",ios :: in);
    // inicializar el atributo cantidad cone
    cantidad=0;
    // lee una linea del archivoyla almacena en line
    while(getline(fin,line)){
        // despliega en consola la linea-BORRARaCOMENTAR cout's
        cout << cantidad << line << endl;
        // usado para separar las palabras split()
        stringstreams(line);
        // read every column data ofarow and
        // store it inastring variable,'word'
        int iR=0;
        // extrae caracteres desylos almacena en word hasta que encuentra el delimitador','
        while(getline(s,word,',')){
            // añade la word al arreglo roweincrementa iRp/la proxima palabra
            row[iR ++]=word;
        }
    //[0]100,[1]Pulp Fiction,[2]178,[3]accion,[4]9.2,[5]1
    // Operador new crear un objeto del tipo Pelicula-mem dinamica-HEAP
    // stoi-funcion que convierte un stringaint
    // stod-funcion que convierte un stringadouble
     arrPtrPeliculas[cantidad]=new pelicula(row[01,row[11,stoi(row[21),
         row[3],stod(row[4]),stoi(row[5]));
     // Se muestra en consola la separación BORRARoCOMENTAR cout's
     // cout <<"iD: "<< row[8]<< "\n";
     // cout <<"Titulo: " << row[1] << "\n";
     // cout <<"Duracion: " << row[2] << "\n";
     // cout <<"Genero: "<< row[3] << "\n";
     // cout <<"Calificacion: "<< row[4] <<"\n";
     // cout <<"Oscares: "<< row[5] <<"\n";
    // desplegamos en consola la pelicula con el método str()de pelicula BORRAROCOMENTAR cout's
    cout <<"Dentro del objeto:<< arrPtr peliculas[cantidad]->str()<< endl;
     // Incrementar el atributo cantidad para la siguiente pelicula
     cantidad=cantidad+1;
    }
    fin.close();
    // sale del ciclo cuando ya no existen más lineas en el archivo
    // Desplegar todas las películas leídas-BORRAR COMENTAR ciclo con cout's
    for(inti=0;iR<cantidad;i++){
     cout << iR <<<< arrPtr peliculas[iR]->str()<< endl;
    }
}

void peliculas::reporteTodasLasPeliculas(){

}
void peliculas::reporteConCalificaciones(double _calificacion){

}
void peliculas::reporteGenero(string _genero){

}

// metodos de acceso (GETS)
pellicula* peliculas::getPtrPelicula(string _iD){

}
int peliculas::getCantidadPeliculas(){

}

// metodos modificadores SETS
void peliculas::setPtrPelicula(Pelicula *_ptrPelicula){

}
void peliculas::setCantidadPeliculas(int _cantidad){

}
