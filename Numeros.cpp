#include <iostream>

using namespace std;

int main() {
	
	int n,i;
	
	cout << " Los 20 primeros numeros pares en orden decreciente: " << endl;
	
	for ( i = 0; i < 21; i +=2 ) 
	
	{
		n = 20; n -= i; 
		
		cout << " Numero par: " << n <<endl; 	 
	}
	
	cout << " Los 20 primeros numeros impares en orden decreciente: " << endl;
	
	for ( i = 19; i > 0; i -= 2 )
	
	{
		cout << " Numero impar: " << i <<endl;	
	}
	

	return 0;
}

