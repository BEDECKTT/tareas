#include <iostream>

using namespace std;

int main(){
	
	int  i,n, Neutros, Positivos, Negativos;
	
	Neutros = 0;
	Positivos = 0;
	Negativos = 0;
	
	for ( i = 0; i < 4; i++)
	{	
		cout << " Escriba un numero ";
		cin >> n;
		
	} 
	
	if ( n == 0 )
	{
		Neutros = Neutros + 1;
		Neutros++;	
	} 
	
	else if ( n < 0 );
	{
		Negativos = Negativos + 1;
		Negativos++;
			
	}
	
	if ( n > 0 );
	{
		Positivos = Positivos + 1;
		Positivos++;
	}
	
	cout << " Los numeros neutros son: " << Neutros << endl;
	cout << " Los numeros positivos son: " << Positivos << endl;
	cout << " Los numeros negativos son: " << Negativos << endl;
	
	
	
	
	return 0;
}