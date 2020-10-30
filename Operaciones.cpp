#include "Operaciones.h"

Operaciones::Operaciones(){
	
}

void Operaciones::operar(int* numeros,string* operadores,int n){
	int resultado=0;
	Suma s;
	
	for(int i=0;i<n-1;i++){
		if(i==0 && operadores[i].compare("+")==0){
			resultado=s.sumar(numeros[i],numeros[i+1]);
		}
		else if(operadores[i].compare("+")==0){
			resultado=s.sumar(resultado,numeros[i+1]);
		}
	}
	
	cout << "El resultado es: " << resultado;
}
