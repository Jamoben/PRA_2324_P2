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

template <typename T>
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

template <typename T>
int Partition(vector<T>& v, int ini, int fin){
        T x = v[fin];
        int i = ini;

        for(int j = ini; j < fin ; j++){
                if(v[j] <= x){
                        T aux = v[j];
                        v[j] = v[i];
                        v[i] = aux;
			i= i + 1;
                }
        }
        T aux = v[i];
        v[i] = v[fin];
        v[fin] = aux;
        return i;
}

template <typename T>

void QuickSort(vector<T>& v, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(v, ini, fin);
		QuickSort(v, ini, pivot -1);
		quickSort(v, pivot +1, fin);

	}
}

template<typename T>
int Partition_FIRST(vector<T>& v, int ini, int fin){
    T x = v[ini];
    int i = ini;
	
    for(int j = ini + 1; j <= fin; j++) {
        if(v[j] < x) {
             i++;
             T aux = v[j];
             v[j] = v[i];
             v[i] = aux;
        }
     }
     T aux = v[j];
     v[j] = v[i];
     v[i] = aux;
     return i;
}


template<typename T>
void QuickSort_FIRST(vector<T>& v, int ini, int fin){
        if(ini < fin){
                int pivot = Partition_FIRST(v, ini, fin);
                QuickSort_FIRST(v, ini, pivot -1);
                QuickSort_FIRST(v, pivot +1, fin);

        }
}
