#include <iostream>

using namespace std;

int main(){
	
	double Segundos, Minutos, Horas;
	
	cout << " Ingrese la cantidad de segundos que desea convertir: " << endl;
	cin >> Segundos;
	
	Horas = (Segundos/3600);
	Minutos = (Horas*3600)/60;
	
	cout << " La cantidad de horas es: " << Horas << endl;
	cout << " La cantidad de minutos es: " << Minutos << endl;
	
	return 0;
}