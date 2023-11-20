#include <stdlib.h>
#include <iostream>
#include "DyV.h"

int main(){

        /*PRUEBAS BUSQUEDA BINARIA*/
        
        vector<char> c = {'a','b','c','d','e','f','g','h'};
        vector<int> v = {1,2,3,4,5,6,7,8,9};
        vector<double> d = {1.0,2.0,3.0,4.0,5.0};

        char prim = BusquedaBinaria("b", c, 0, 7);
        int  sec = BusquedaBinaria(7, v, 0, 8);
        double ter = BusquedaBinaria(3.0, d, 0, 4);

        std:: cout << "%c %d %f" << prim, sec, ter << std:: endl;   

        vector<char> ic = {'h','g','f','e','d','c','b','a'};
        vector<int> iv = {9,8,7,6,5,4,3,2,1};
        vector<double> id = {5.0,4.0,3.0,2.0,1.0};

        char iprim = BusquedaBinaria("b", ic, 0, 7);
        int  isec = BusquedaBinaria(7, iv, 0, 8);
        double iter = BusquedaBinaria(3.0, id, 0, 4);

        std:: cout << "%c %d %f" << iprim, isec, iter << std:: endl;
        
        /* PRUEBAS QUICKSORT*/

        vector<char> QSc = {'c','b','e','h','a','f','d','g'};
        vector<int> QSv = {2,5,3,1,8,7,4,6,9};
        vector<double> QSd = {4.0,1.0,5.0,2.0,3.0};

        QuickSort(QSc, 0, 7);
        for(int i = 0; i < 8; i++){
		cout << i  << QSc[i] << endl;
        }
        
        QuickSort(QSv, 0, 8);
        for(int i = 0; i < 9; i++){
		cout << i  << QSc[i] << endl;
        }

        QuickSort(QSd, 0, 4);
        for(int i = 0; i < 5; i++){
		cout << i  << QSc[i] << endl;
        }

        auto start = std::chrono::system_clock::now();
	vector<char> QSFc = {'c','b','e','h','a','f','d','g'};
        QuickSort_FIRST(QSFc, 0, 7);
        for(int i = 0; i < 7; i++){
		cout << i  << QSFc[i] << endl;
        }
        auto end = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration = end - start;
	cout << "Time: " << duration.count() << "s" << std::endl;

        auto start = std::chrono::system_clock::now();
	vector<int> QSFv = {2,5,3,1,8,7,4,6,9};
        QuickSort_FIRST(QSFv, 0, 8);
        for(int i = 0; i < 9; i++){
		cout << i  << QSFv[i] << endl;
        }
        auto end = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration = end - start;
	cout << "Time: " << duration.count() << "s" << std::endl;

        auto start = std::chrono::system_clock::now();
	vector<int> QSFd = {4.0,1.0,5.0,2.0,3.0};
        QuickSort_FIRST(QSFd, 0, 4);
        for(int i = 0; i < 5; i++){
		cout << i  << QSFd[i] << endl;
        }
        auto end = std::chrono::system_clock::now();
	std::chrono::duration<float, std::milli> duration = end - start;
	cout << "Time: " << duration.count() << "s" << std::endl;
        
}
