#include <iostream>
#include <vector>
#include <string>

//falta

using namespace std;

bool pick_resume(vector<int>& resumes){ //log_n
	string eliminate="top";  //1
	int inicio=0;  //1
	int longitud=resumes.size(); //1

	while(longitud>1){ //va dividiendo n/2 (log_n)
		if(eliminate=="top"){
			inicio=longitud/2;
			eliminate="bottom";
		}else{
			if(eliminate=="bottom"){
				longitud=longitud/2; 
				eliminate="top";
			}
		}
	}
	return resumes[longitud];
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

	cout<<pick_resume(arreglo)<<endl;

	return 0;
}
