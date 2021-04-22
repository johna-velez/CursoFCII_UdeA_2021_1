#include<iostream>

using namespace std;



float calc_prom(const int [],const int);
float varianza(const int [],const int);




int main()
{
  int sizeValoresPrueba=14; // tamaño del arreglo valores prueba
  int valores_prueba[sizeValoresPrueba]={89,95,72,83,99,54,86,75,92,73,79,75,82,73};
  
  float p=calc_prom(valores_prueba, sizeValoresPrueba); // promedio del arreglo
  float v=varianza(valores_prueba, sizeValoresPrueba); // varianza del arreglo
  
  cout<<"El valor promedio del arreglo es: "<<p<<endl;
  cout<<"La varianza del arreglo es: "<<v<<endl;

  return 0;
}






float calc_prom(const int A[],const int sizeA)
{
  float s=0;
  for(int i=0;i<sizeA;i++)
    {
      s=s+A[i]; // suma de los valores dentro del arreglo
    }
  return s/sizeA;  
}



float varianza(const int A[], const int sizeA)
{
  float med=calc_prom(A,sizeA); // valor medio de los elementos del arreglo
  float s=0;
  
  for(int i=0;i<sizeA;i++)
    {
      s= s + ((A[i]-med)*(A[i]-med));
    }
  
  return s/sizeA;
}
