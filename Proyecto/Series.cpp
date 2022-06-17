#include "Series.h"

Series::Series(){
    *ArrPrtSeries = nullptr;
    int cantidad = 0;
}

void Series::leerArchivo() {
    // Declaración de variables para usarlas al leer cada línea del archivo
    string linea, dato, row[6];
    // Variable para llevar el contador de cantidad de series leídas del archivo
    int iRow{}, iS{}, cantEpisodios{};
    // Declaración de variable para el archivo
    fstream lectura;
    Episodio *episodio;
    // LEER LAS SERIES
    lectura.open("C:\\Users\\AxelC\\OneDrive\\Escritorio\\Semestre 2\\Periodo 3\\POO 2\\Proyecto_Axel_Quiroga\\TC1030_301_Axel_Quiroga\\Evidencia\\include\\Serie2021.csv", ios::in);
    // inicializar el atributo cantidad de Series con 0
    cantidad = 0;
    // ciclo para leer todo el archivo
    while ( getline(lectura, linea)) // lee una línea del archivo, corresponde a una serie
    {
        //Para que la mando desplegar ? para verificar que se esta leyendo correctamente el archivo
        std::stringstream registro(linea);
        iRow = 0;
        // Ciclo para separar los elementos de la serie (string)
        while (getline (registro, dato,',')) // separamos los elementos de la serie leída
        {
            row[iRow++] = dato;
        }
        // crear un objeto de la clase Serie, new retorna un pointer
        ArrPrtSeries[cantidad] = new Serie(row[0], row[1], stoi(row[2]), row[3],stod(row[4]));
        //cout << ArrPrtSeries[iS]->str() << endl;

        // vamos por la siguiente serie del archivo, se incrementa para la siguiente
        cantidad++;
    }
    lectura.close();

    // LEER LOS EPISODIOS DE LAS SERIES

    lectura.open("C:\\Users\\AxelC\\OneDrive\\Escritorio\\Semestre 2\\Periodo 3\\POO 2\\Proyecto_Axel_Quiroga\\TC1030_301_Axel_Quiroga\\Evidencia\\include\\Episodio2021.csv", ios::in);
    // ciclo para leer todo el archivo
    while ( getline(lectura, linea))
    {
        // Desplegar el episodio leído - solo para corroborar
        std::stringstream registro(linea);
        iRow = 0;
        while (getline(registro, dato, ',')) // separar los datos del episodio desde la línea registro
        {
            row[iRow++] = dato;
            // al salir de aqui ya se separo toda la línea
        }
        // iD- convertir int- sacar la posicion de la serie
        iS = stoi(row[0]) - 500; // posición del arrealo donde esta el ptr de la serie pertenece el episodio
        // Crear el Episodio
        episodio = new Episodio(row[1], stoi(row[2]), stod (row[3]));

        // Traer la cantidad de episodios de la serie iS - la la vez retorna 0
        cantEpisodios = ArrPrtSeries[iS]->getCantidad();
        if (cantEpisodios < 5){
            ArrPrtSeries[iS]->setEpisodio(cantEpisodios,*episodio);
            ArrPrtSeries[iS]->setCantidad(++cantEpisodios);
        }
        //cout << ArrPrtSeries[iS]->str() << endl;
    }
    lectura.close();
    // cierra leerArchivo
}

void Series::reporteTodasLasSeries(){
   double acum = 0;
   double av = 0;
   for(int iS=0; iS < cantidad; iS++) {
        av = ArrPrtSeries[iS] -> calculaCalPromedio();
        ArrPrtSeries[iS] -> setCalificacion(av);
        cout << ArrPrtSeries[iS]->str() << endl;
        //cout << *ArrPrtSeries[iS] << endl;
        acum = acum + ArrPrtSeries[iS]->getCalificacion();
    }
    cout << "Promedio calificaiones: " << acum/cantidad << endl;

}
void Series::reporteConCalificaciones(double _calificacion){
    for(int iR=0; iR < cantidad; iR++) {
        if(ArrPrtSeries[iR]->getCalificacion() == _calificacion)
            cout << ArrPrtSeries[iR]->str() << endl;
    }
}

void Series::reporteGenero(string _genero){
    for(int iR=0; iR < cantidad; iR++) {
        if(ArrPrtSeries[iR]->getGenero() == _genero)
            cout << ArrPrtSeries[iR]->str() << endl;
    }
}

void Series::calcularCalificacionSeries(){
    double av;
    for(int i = 0; i < cantidad; i++){
        av = ArrPrtSeries[i] -> calculaCalPromedio();
        ArrPrtSeries[i] -> setCalificacion(av);
    }

}

Serie* Series::getPtrSerie(string _iD){
   int cantidad = 50;
   for (int i = 0; i < cantidad; i++){
        if (ArrPrtSeries[i]->getId() == _iD)
            return ArrPrtSeries[i];
    }
    return nullptr;
}

int Series::getCantidadSeries(){
    return cantidad;
}

void Series::setPtrSerie(Serie *_ptrSerie){
   if (cantidad < 50){
        ArrPrtSeries[cantidad] = _ptrSerie;
    }
}

void Series::setCantidadSeries(int _cantidad){
    cantidad = _cantidad;
}

