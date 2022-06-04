#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

bool find_needle(vector<int>& needle, vector<int>& haystack){  //costo n
	int needle_index=0;  //1
	int haystack_index=0;  //
	bool found_needle; //1 

	while(haystack_index<haystack.size()){  //n veces, menor a n si encuentra antes
		if(needle[needle_index]==haystack[haystack_index]){ // si encontro
			found_needle=true; //1
			while(needle_index<needle.size()){  //1 vez
				if(needle[needle_index]!=haystack[haystack_index+needle_index]){ 
					found_needle=false;
				}
				break; //rompe al while 1 corrida
			}
			needle_index+=1;
			if(found_needle){
				return true;
			}
			needle_index=0;
		}
		haystack_index+=1;
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
	vector<int> arreglo2;

	for(int i=0;i<10;i++){
		arreglo.push_back(i);
		arreglo2.push_back(14-i);
	}
	print(arreglo);

	cout<<find_needle(arreglo,arreglo2)<<endl;

	return 0;
}
