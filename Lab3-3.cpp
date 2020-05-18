//PROBLEMA 3
#include <iostream>
using namespace std;
void ascendente(int *ptr,int tam,int *ptr2,int *ptr3)
{
	int may=0,j=0,i=0;
	while(i<tam){
		if(*ptr2>=may){
			may=*ptr2;
			j=i;	
		} 
		i++;
		ptr2++;			
	}
	for(int i=0;i<tam;i++)
		ptr2--;
	for(int i=0;i<j;i++)
		ptr2++;
	for(int i=0;i<tam-1;i++)
		ptr3++;
	int aux=*ptr3;
	*ptr3=*ptr2;
	*ptr2=aux;
	if(tam>1)
		ascendente(ptr,--tam,ptr,ptr);
}
int main()
{				// 0 1 2 3 4 5
	int arreglo[]={4,2,2,3,9,5};
	ascendente(arreglo,6,arreglo,arreglo);
	for(int i=0;i<6;i++)
		cout<<arreglo[i]<<" ";
}
