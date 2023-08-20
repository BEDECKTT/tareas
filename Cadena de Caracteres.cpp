#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//Declaracion de variables.
char cadena[10];
char auxiliar[10];

int main(){
//Declaracion de variables.
	int i,j;
	int largo;
	string texto;
	
	cout<<"Ingresar una cadena de 10 caracteres : ";
	cin>>cadena; 
	
	largo=strlen(cadena);
	
	for(i=1;i<=largo;i++)
		{
		  auxiliar[i]=cadena[largo-i];
		  
		  cout<<"Invertido : "<<auxiliar[i]<<endl;
		  
		  texto=texto+auxiliar[i];
		}
		 //Impresion.
		 cout<<"Cadena invertida : "<<texto<<endl;
		 
		 
 	return 0;
 
 }