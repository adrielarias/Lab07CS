#include "Convertidor.h"

Convertidor::Convertidor(){
	
}
void Convertidor::convertir(string c){
	int* numeros = new int[6];
	string* operadores = new string[5];
	int i;
	
	for(i=0;i<6 && c.compare("")!=0;i++){
		size_t found = c.find("+");
  		if (found!=string::npos){
  			numeros[i]=atoi(c.substr(0,found).c_str());
  			operadores[i]="+";
  			c=c.substr(found+1);
		}
		else if(c.compare("")!=0){
			numeros[i]=atoi(c.c_str());
  			c="";
		}	
	}
	
	Operaciones o;
	o.operar(numeros,operadores,i);
}
