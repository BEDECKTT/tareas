#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int x [1], *y;
	int i;
	
	for ( int i = 0; i < 1; i++ )
	
		{
			cout << "Ingrese un numero: \n";
			cin >> x [i];
		}
		 
	y = x; //La posicion de memoria
	
	for ( i = 0; i < 1; i++ )
	{
		if ( *y %2 == 0)
		{
			cout << " El numero " << *y <<	" es par " << endl;
			cout << " Su posicion es: " << y << endl;
		
		}   else ( *y %1 == 0);
			{
				cout << " El numero " << *y << " es impar " << endl;
				cout << " Su posicion es: " << y << endl;
			}
		
	  
	}
	return 0;
}
 
	
	
	
	
	