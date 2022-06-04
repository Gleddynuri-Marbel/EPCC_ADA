#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

bool twoSum(vector<int>& arreglo){ // pero de los casos n^2
	for(int i=0;i<arreglo.size();i++){ //n * (veces que sumando dan 10 < n)
		for(int j=0;j<arreglo.size();j++){ // veces que sumando dan 10 < n
			if(i != j && (arreglo[i]+arreglo[j]==10)){  //  1
				return true;
			}
		}
	}
	return false;
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

	cout<<twoSum(arreglo)<<endl;

	return 0;
}
