//PROBLEMA 4
#include <iostream>
using namespace std;
int tamano(char *ptr,int pos)
{
	if(*ptr!='\0')
		return tamano(++ptr,++pos);
	return pos;
}
void tamano_i(char *ptr)
{
	int pos=0;
	while(*ptr!='\0'){
		pos++;
		ptr++;
	}
	cout<<"tamano iterativo:"<<pos;
}
int main()
{
	char cad[]={"Caracol"};
	cout<<"Tamano:"<<tamano(cad,0);
	cout<<endl;
	tamano_i(cad);
}

