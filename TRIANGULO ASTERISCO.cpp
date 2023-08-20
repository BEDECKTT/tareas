#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	
	int acum,n;
	
	acum = 0;
	
	cout << "Ingrese un numero para formar el triangulo: \t ";
	cin >> n;
	 
	 for (int i=0; i<n; i++)
    {
        //  inner loop to handle number of columns 
        //  values changing acc. to outer loop 
        for(int j=0; j<=i; j++ )
        {
            // printing stars 
            cout << " * ";
        }
 		
 		acum++;
 		
 		cout << "La cantidad de asteriscos son: " << acum;
        // ending line after each row 
        cout << endl;
    }
	
	
	
 return 0;	
}