/* Producto maximo de dos numeros en una secuencia
    . Dada una secuencia de n numeros no negativos y mayores que cero
    .El objetivo es encontrar el mayor numero que se pueda obtener multiplicando dos numeros de esta secuencia
    .Tiempo es lineal*/

#include <iostream>
#include <vector>
#define MAX_INT 1<< 30
#include "stdio.h"
#include "stdlib.h"
#define MIN_INT 1 << 31

using namespace std;

int maxProduct(vector<int>& A) {
  int max = MIN_INT, segundoMax = MIN_INT;
  int min = MAX_INT, segundoMin = MAX_INT;
    int n=A.size();
    for (int i = 0; i < n; i++) {
    // Computando el maximo y segundo maximo valor
    if (max < A[i]) {

      segundoMax = max;
      max = A[i];
    }
    else if (segundoMax < A[i]) {
      segundoMax = A[i];
    }

    // Computando min y el segundo min
    if (min > A[i]) {
      segundoMin = min;
      min = A[i];
    }
    else if (segundoMin > A[i])
      segundoMin = A[i];
  }


  if (max * segundoMax > max * min ) {
    printf("Dupla que tiene el maximo producto es: %d %d\n",
      max, segundoMax);
    printf("Producto maximo: %d\n", max * segundoMax );
  }
  else {
    printf("Dupla que tiene el maximo producto es: %d %d\n", max, min);
    printf("Producto maximo: %d\n", max * min);
  }
}
int main()
{
    vector<int>A;
    int n;
    while (cin>>n){
       A.push_back(n);
    }
    cout << maxProduct(A)<< endl;
    return 0;
}

