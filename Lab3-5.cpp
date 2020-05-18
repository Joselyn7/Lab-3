//PROBLEMA 5
#include <iostream>
using namespace std;
void con(char *ptr,char *ptr2,char *ptrB,int t2,int t,char *ptrA)
{
	if(t2>0){
		for(int i=0;i<t2+t-1;i++)
			ptrB++;
		for(int i=0;i<t2-1;i++)
			ptr2++;
		*ptrB=*ptr2;
		return con(ptr,ptr,ptr,--t2,t,ptrA);
	}
	for(int i=0;i<t;i++){
		*ptrB=*ptrA;
		ptrB++;
		ptrA++;
	}			
}
void mostrar(char *ptrB,int l)
{
	for(int i=0;i<l;i++){
		cout<<*ptrB;
		ptrB++;
	}
}
int main()
{
	char b[]={"flores"};
	char a[]={"gatos"};
	con(b,b,b,6,5,a);
	mostrar(b,11);
}
