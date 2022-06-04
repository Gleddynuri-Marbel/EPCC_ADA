#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

void every_other(vector<int>& arreglo){ // en el peor caso n^2 (todos los elementos pares)
	tuple<int, int> aux; //2 +  numero de enteros en el arreglo * n
	for(int i=0;i<arreglo.size();i++){
		aux=make_tuple(arreglo[i],i); //1 +  numero de enteros en el arreglo * n
		if(get<1>(aux)%2==0){  //numero de enteros en el arreglo * n
			for(int j=0;j<arreglo.size();j++){  //n
				cout<<get<0>(aux)+arreglo[j]<<endl;  //1
			}
		}

	}
}

void print(vector<int>& arreglo){
	for(int i=0;i<arreglo.size();i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

int main(){

	vector<int> arreglo;

	for(int i=0;i<10;i++){
		arreglo.push_back(i);
	}
	print(arreglo);

	every_other(arreglo);

	return 0;
}
