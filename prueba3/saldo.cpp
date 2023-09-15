// Titulo del programa: Resta y Comparación
// Nombre del programa: Saldo.cpp
// Autor: Adony Espinal
// Fecha Creación: 23-09-11
// Descripión: resta de dos numeros y presente saldo

#include<iostream>

using namespace std;

int main()
{
	float a,b,c;
	cin>>a>>b;
	c=a-b;
	if(c<0)
	{
		cout<<" Negativo";
	}
		else {
			cout<<" Positivo";
		     }
	
	return 0;

}
