#include <vector>

template <typename T>
T BusquedaBinaria(T x, std::vector<T>& v, int ini, int fin){
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
