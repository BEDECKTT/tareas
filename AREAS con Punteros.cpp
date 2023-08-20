#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int a, b, p;  // p es Pi = 3.14
	int Area, *x;
	double Figura;
	
	
	
	cout << " Calculando areas " << endl << endl;
	cout << " Figura =(1) Cuadrado  \n \t (2)  Rectangulo \n \t (3) Triangulo \n \t (4) Circulo " << endl << endl;
	cout << " Que area desea calcular? ";
	cin >> Figura;
	
  	x = &Area;
  
	
	if ( Figura == 1 )
	{
		
		cout << " Valor del lado = ";
		cin >> a;
	    Area = a*a;
	}
	else if ( Figura == 2 )
	{
		cout << " Valor del lado menor = ";
		cin >> a;
		cout << " Valor del lado mayor = ";
		cin >> b;
		Area = a*b;
	}
	else if ( Figura == 3 )
	{
		cout << " Valor de la base = ";
		cin >> a;
		cout << " Valor de la altura = ";
		cin >>b;
		Area = (a*b)/2;
	}
	else if ( Figura == 4 )
	{
		cout << " Radio del circulo = ";
		cin >> a;
		p = 3.14;
		Area = p*a;
	}
	else
	{
		cout << " Figura equivocada " << endl;
		Area = 0;
	}
	
	cout << " El area de la figura es = " << *x << endl;
	cout << " El area se encuentra en la posicion de memoria = " << x << endl;
	cout << " La posicion de memoria en x es: " << &x << endl;
	return 0;
}