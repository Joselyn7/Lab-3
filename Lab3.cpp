// PROBLEMA 1
#include <iostream>
using namespace std;
int suma(int *ptr,int tam)
{
	if(tam==1)
		return *ptr;
	else     
		return *ptr+suma(++ptr,--tam);
}
void suma_i(int *ptr,int tam)
{
	cout<<endl;
	int cont=0;
	while(tam>0)
	{
		cont+=*ptr;
		tam--;
		ptr++;
	}		
	cout<<"suma iterativa:"<<cont;
}
int main()
{
	int arreglo[]={1,8,3,4,5};
	int tam=5;
	cout<<"suma recursiva:"<<suma(arreglo,5);
	suma_i(arreglo,tam);
}
