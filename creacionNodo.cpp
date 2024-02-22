#include<iostream>

using namespace std;

struct Nodo{
	int valor;
	Nodo* siguiente;
};

int main(){
	// CREACION DE LOS NODOS USANDO LA ESTRUCTURA ANTERIOR
	Nodo* nodo1 = new Nodo();
	Nodo* nodo2 = new Nodo();
	Nodo* nodo3 = new Nodo();
	Nodo* nodo4 = new Nodo();
	
	//SE LE ASIGNAR VALORES ALEATORIOS A LOS NODOS
	
	nodo1->valor = 12;
	nodo2->valor = 15;
	nodo3->valor = 20;
	nodo4->valor = 50;
	
	//ENLACE DE LOS NODOS
	
	nodo1->siguiente = nodo2;
	nodo2->siguiente = nodo3;
	nodo3->siguiente = nodo4;
	nodo4->siguiente = NULL;
	
	//PUNTERO NUMERO 1
	
	Nodo* cabeza = nodo1;
	
	//VARIABLE TEMPORAL LA CUAL IRA CAMBIANDO DE NODO
	//SE INICIALIZA DESDE EL PRIMER NODO
	Nodo* temporal = cabeza;
	
	cout<<"VALORES DE LOS NODOS: ";
	while (temporal != NULL){
		cout<<temporal->valor<<" | ";
		temporal = temporal->siguiente;
	}
	cout<<endl;
	
	delete nodo1;
	delete nodo2;
	delete nodo3;
	delete nodo4;
	
	
	
	return 0;
}



