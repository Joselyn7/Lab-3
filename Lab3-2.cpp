//PROBLEMA 2
#include <iostream>
using namespace std;
void invertir(int *ptr,int tam,int pos,int *ptr1,int *ptr2)
{ 	
	for(int i=0;i<tam-1;i++)
		ptr2++;
	if(pos<=tam/2+2){
		int a=*ptr;
		*ptr=*ptr2;
		*ptr2=a;
		invertir(++ptr,--tam,++pos,ptr1,ptr1);
	}			
}
void mostrar(int *ptr,int tam)
{
	while(tam>0){
		cout<<*ptr<<" ";
		tam--;
		ptr++;
	}
	cout<<endl;
}
void invertir_i(int *ptr,int tam,int *ptr2)
{
	int tam1=tam;
	for(int i=0;i<tam/2;i++){
		for(int j=0;j<tam1-1;j++)
			ptr2++;
		int a=*ptr;
		*ptr=*ptr2;
		*ptr2=a;
		ptr++;
		for(int j=0;j<tam1-1;j++)
			ptr2--;
		tam1--;
	}
}
int main()
{
	int arreglo[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
	invertir(arreglo,13,0,arreglo,arreglo);	
	mostrar(arreglo,13);	
	invertir_i(arreglo,13,arreglo);
	mostrar(arreglo,13);
}
