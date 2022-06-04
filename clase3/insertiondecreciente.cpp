#include <iostream>
using namespace std;
void imprimir(int arreglo[],int longitud){
	for(int i=0;i<longitud;i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}
//ordenamos por el metodo de insertionsort
void InsertionSort(int arreglo[],int longitud){
	for(int j=1;j<longitud;j++){
		int clave=arreglo[j];
		int i=j-1;
		while(i>=0 && arreglo[i]<clave){
			arreglo[i+1]=arreglo[i];
			i=i-1;
		}
		arreglo[i+1]=clave;
	}

}

int main()
{
    //agregando casos de prueba, CASO1
    int arreglo1[] = {21, 41, 59, 26, 41, 58};
    int longitud = sizeof(arreglo1)/sizeof(arreglo1[0]);

    cout << "CASO 1 \n Antes :" << endl;
    //se imprime
    imprimir(arreglo1, longitud);
    //se arregla
    InsertionSort(arreglo1, longitud);
    //se vuelve a imprimir
    cout << "Despues:" << endl;
    imprimir(arreglo1, longitud);


    //CASO2
    int arreglo2[] = {34, 4, 9, 27, 410, 8};
    int longitud2 = sizeof(arreglo2)/sizeof(arreglo2[0]);

    cout << "CASO 2 \n Antes :" << endl;
    //se imprime
    imprimir(arreglo2, longitud2);
    //se arregla
    InsertionSort(arreglo2, longitud2);
    //se vuelve a imprimir
    cout << "Despues:" << endl;
    imprimir(arreglo2, longitud2);

    //CASO3
    int arreglo3[] = {210, -49, 0, 4, 5};
    int longitud3 = sizeof(arreglo3)/sizeof(arreglo3[0]);

    cout << "CASO 3 \n Antes :" << endl;
    //se imprime
    imprimir(arreglo3, longitud3);
    //se arregla
    InsertionSort(arreglo3, longitud3);
    //se vuelve a imprimir
    cout << "Despues:" << endl;
    imprimir(arreglo3, longitud3);


    return (0);
}
