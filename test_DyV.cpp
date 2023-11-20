#include <stdlib.h>
#include <iostream>
#include "DyV.h"

int main(){

        char c[8] = {"a","b","c","d","e","f","g","i"};
        int v[9] = {1,2,3,4,5,6,7,8,9};
        float f[5] = {1.0,2.0,3.0,4.0,5.0};

        char prim = BusquedaBinaria("b", c, 0, 7);
        int  sec = BusquedaBinaria(7, v, 0, 8);
        float ter = BusquedaBinaria(3.0, f, 0, 4);

        std:: cout << "%c %d %f", prim, sec, ter;
        std::endl;
}
