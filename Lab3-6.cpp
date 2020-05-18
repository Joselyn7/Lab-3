//PROBLEMA 6
#include <iostream>
using namespace std;
void copiar(char *a,char *b,int t)
{
	if(t>0){
		*b=*a;
		return copiar(++a,++b,--t);
	}
}
int main()
{
	char a[]={"hola"};
	char b[]={"como estas"};
	copiar(a,b,4);
	for(int i=0;i<10;i++)
		cout<<b[i];
	
}
