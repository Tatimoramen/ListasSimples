#include<iostream>
using namespace std;
#include "Nodo.h"	
#include "ListaSimple.h"
int main (int argc, char *argv[]) {
ListaSimple *lista= new ListaSimple();
Nodo *nodo;
int valor=0,opcion=0;
do{
	system("cls");
	cout<<"\t***MENU***"<<endl
		<<"1. Insertar Inicio"<<endl
		<<"2. Imprimir"<<endl
		<<"3. Eliminar"<<endl
		<<"4. Imprimir pares"<<endl
		<<"5. Valor maximo de la lista"<<endl
		<<"6. Cuantas veces se repite x valor"<<endl
		<<"7. Eliminar el ultimo elemento de la lista"<<endl
		<<"8. Eliminar primer elemento de la lista"<<endl
		<<"9. Eliminar elemento mayor de la lista"<<endl
		<<"10.Eliminar nodo de la lista"<<endl
		<<"0. Salir"<<endl
		<<"?";
		cin>>opcion;
		switch(opcion) {
		case 1:			
			cout<<"Digite el valor a insertar: " ;
			cin>>valor;
			nodo=new Nodo(valor);
			lista->insertarInicio(nodo);
			lista->imprimir();
			system("pause");
			break;
		case 2:
			lista->imprimir();
			system("pause");
			break;
		
		
		case 3: cout<<"Digite el elemento que desea eliminar:";
		cin>>valor;
		
		lista->eliminarNodo(nodo);
		lista->imprimir();
		system("pause");
		break;
		
	    case 4:
			lista->ImprimirPares();
			
			system("pause");
			break;
		
		
		case 5: 
			lista->ValorMaximo();
			system("pause");
			break;
			
		case 6:
			cout<<"Digite el valor que desea ser contado: ";
			cin>>valor;
			lista->ContarNodos(nodo,valor);
			system("pause");
			break;
			
		case 7:
			lista->eliminarUltimo();
			system("pause");
			break;
			
			
		case 8:
			lista->eliminarPrimero();
			system("pause");
			break;
			
		case 9:
			valor=lista->encontrarMaximoEliminar();
			nodo=lista->buscarNodo(valor);
			lista->eliminarXNodo(nodo);
			lista->imprimir();
			system("pause");
			break;
		
		case 10:
			cout<<"Digite el valor que desea eliminar: ";
			cin>>valor;
			nodo=lista->buscarNodo(valor);
			lista->eliminarXNodo(nodo);
			lista->imprimir();
			system("pause");
			break;
			
		case 0:
			cout<<"Nos vemos" ;
			break;
		}
	
    }while(opcion!=0);
return 0;
}


