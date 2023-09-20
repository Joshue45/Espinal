// Programa: Suma.cpp
// Autor: Adony Espinal
// Fecha: 2023-09-14
// Descripción: Suma de dos numeros

#include<iostream>
using namespace std;

float x,y,z;

int ingreso()
{
	
	cout<<"Ingrese X: "; cin >>x;
	cout<<"Ingrese Y: "; cin >>y;
	return (0);
}
int salida()
{
	cout<<"La suma de: "<<x<<"+"<<y<<"="        <<z<<endl;
	return (0);
}
int main()
{
	ingreso();
	z=x+y;
	salida();
	return (0);
}

