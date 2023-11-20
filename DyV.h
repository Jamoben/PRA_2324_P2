#include <vector>
#include <iostream>

template <typename T>
int BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin){
        if(ini > fin){
                throw ("No se encuentra en el array");
        }

        int medio = (ini + fin) / 2;

        if(v[medio] == x){
                return medio;
        }

        else if(v[medio] > x){
                return BusquedaBinaria(x, v, ini, medio -1);
        }
        else{
                return BusquedaBinaria(x, v, medio +1, fin);
        }
}

int BusquedaBinaria_INV(T x, vector<T>& v,int ini, int fin){
        if(ini > fin){
                throw ("No se encuentra en el array");
        }
        
        int medio = (ini + fin) / 2;
        
        if(v[medio] == x){
                return medio;
        }
        
        else if(v[medio] < x){
                return BusquedaBinaria_INV(x, v, ini,medio -1);
        }else{
		return BusquedaBinaria_INV(x, v, medio +1, fin);
        }
}
