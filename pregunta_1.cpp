#include <iostream>
using namespace std;
int numeros;
int findthree (int num[], int x)
{
	int suma=0;

	for (int i=0; i<x; i++)
	{
		cout<<"ingrese los numeros"<<endl;
		cin>>num [i];
		if((num [i]%3)==0)
		{
			suma=suma+num [i];
		}
	}
	return suma;
}

int main ()
{
	cout<<"cuantos numero quisiera ingresar?"<<endl;
	cin>>numeros;
	int num[numeros];
	cout<<"la suma es "<< findthree(num, numeros)<<endl;
}
