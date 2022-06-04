#include <iostream>
using namespace std;
void imprimir(int arreglo[],int longitud){
	for(int i=0;i<longitud;i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}
//ordenamos por el metodo de insrtionsort
void InsertionSort(int arreglo[],int longitud){
	for(int j=1;j<longitud;j++){
		int clave=arreglo[j];
		int i=j-1;
		while(i>=0 && arreglo[i]>clave){
			arreglo[i+1]=arreglo[i];
			i=i-1;
		}
		arreglo[i+1]=clave;
	}

}

int main()
{
    int arreglo[] = {21, 41, 59, 26, 41, 58};
    int longitud = sizeof(arreglo)/sizeof(arreglo[0]);

    cout << "Antes :" << endl;
    //se imprime
    imprimir(arreglo, longitud);
    //se arregla
    InsertionSort(arreglo, longitud);
    //se vuelve a imprimir
    cout << "Despues:" << endl;
    imprimir(arreglo, longitud);
    return (0);
}
