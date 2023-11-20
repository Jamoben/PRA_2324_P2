#include <stdlib.h>
#include <iostream>
#include "DyV.h"

int main(){

        vector<char> c = {'a','b','c','d','e','f','g','h'};
        vector<int> v = {1,2,3,4,5,6,7,8,9};
        vector<double> d = {1.0,2.0,3.0,4.0,5.0};

        char prim = BusquedaBinaria("b", c, 0, 7);
        int  sec = BusquedaBinaria(7, v, 0, 8);
        double ter = BusquedaBinaria(3.0, d, 0, 4);

        std:: cout << "%c %d %f" << prim, sec, ter << std::endl;   

        vector<char> ic = {'h','g','f','e','d','c','b','a',};
        vector<int> iv = {9,8,7,6,5,4,3,2,1};
        vector<double> id = {5.0,4.0,3.0,2.0,1.0};

        char iprim = BusquedaBinaria("b", ic, 0, 7);
        int  isec = BusquedaBinaria(7, iv, 0, 8);
        double iter = BusquedaBinaria(3.0, id, 0, 4);
}
