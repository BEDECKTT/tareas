#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main()
{
	
	int x,i;
	int Vc [] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
	char Vn [] =  {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"} ;
	
	while ( true )
	{
		cout << "\n Ingresar un numero decimal / 0 Para terminar: \n";
		cin >> x;
		
		if ( x == 0) break;
		
		cout << "\n" << "\t \t \t \t \t \t " << "     " << x << ": ";
		
		i = 0;
		
		while ( x > 0)
		{
			if ( x >= Vn [i] )	
			{
				cout << Vc [i];
				x = x - Vn [i];
					
			}else 
					
				i = i + 1;
					
		}
	}
	
	
	
	return 0;
}