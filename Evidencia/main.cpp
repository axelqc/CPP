#include <iostream>
#include "video.h"

using namespace std;

int main()
{
    video lunes;
    cout << lunes.str() << endl;

    video martes("001", "Grown ups", 40, "Comedia", 100);
    cout << martes.str() << endl;

    return 0;
}
