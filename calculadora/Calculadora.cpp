#include <string>
#include <iostream>
#include "Convertidor.cpp"

using namespace std;

int main(){
	Convertidor c;
	string operacion;
	cout << "Ingrese una cadena de operaciones valida:" << endl;
	cin >> operacion;
	c.convertir(operacion);
	
	return 0;
}
