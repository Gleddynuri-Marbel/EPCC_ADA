#include <iostream>
#include <vector>

using namespace std;

float greatestNumber(vector<float>& arreglo){   // costo n^2
	bool aux; //1+n^2
	for(int i=0;i<arreglo.size();i++){  //n^2 veces
		aux=true;  //n veces
		for(int j=0;j<arreglo.size();j++){    //n veces
			if(j>i){  
				aux=false;   //1
			}
		}
		if(aux){ // de ejecutarse reduce el n en una proporcion
			return i;
		}

	}
	return -1; //
}

void print(vector<float>& arreglo){
	for(int i=0;i<arreglo.size();i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}

int main(){

	vector<float> arreglo;

	for(int i=0;i<10;i++){
		arreglo.push_back(i);
	}
	print(arreglo);

	cout<<greatestNumber(arreglo)<<endl;

	return 0;
}
