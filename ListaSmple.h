class ListaSimple {
private:
	Nodo *cabeza;
	int contador;
		
public:	
	ListaSimple() {
		this->cabeza=NULL;
		this->contador=0;
	}
	
	bool esVacia() {
		return cabeza == NULL;
	}
	
	int getContador() {
		return contador;
		
	}
	
	
	/*
	Nodo * getCabeza() {
		return cabeza;
	}
	*/
	void insertarInicio(Nodo *nodo) {
		if(esVacia()) {
			cabeza=nodo;
		} else {
			nodo->setSiguiente(cabeza);
			cabeza=nodo;
		}
		contador ++;
	}
	
	
	
	
	Nodo* buscarNodo(int valor) {
		Nodo *aux=NULL;
		if(!esVacia()){
			aux=cabeza;
			while(aux !=NULL && aux->getValor() !=valor){
				aux=aux->getSiguiente();
			}
			
		}
		return aux;
	}
	
	void eliminarNodo(Nodo *nodo){
		if(esVacia() !=NULL) {
			cabeza=nodo;
			Nodo *aux_borrar;
			Nodo *anterior = NULL;
			
			aux_borrar = nodo;
			
			while((aux_borrar != NULL) && (aux_borrar->getSiguiente() != 0)) {
				anterior = aux_borrar;
				aux_borrar = aux_borrar ->getSiguiente();
				
			} 
			
			if(aux_borrar == NULL) {
				cout <<"El elemento no existe";
				
			}
			else if(anterior == NULL) {
				cabeza= cabeza->getSiguiente();
				delete aux_borrar;
			}
			else{
		      aux_borrar= aux_borrar->getSiguiente();
				delete aux_borrar;
			}
		}
	}
	
	void ImprimirPares(){
		Nodo *aux;
		if(esVacia()){
			cout<<"La lista esta vacia"<<endl;
		}else{
			aux = cabeza;
			cout<<"Cabeza->";
			while(aux!=NULL){
				if (aux->getValor() % 2 == 0)
				{
					cout<<aux->getValor();
					cout<<"\n";
				}
				aux=aux->getSiguiente();
			}
			cout<<"\n\n";
		}
		cout<<"\n\n\n";			
	}
	

	void ValorMaximo(){
		Nodo *aux;
		int mayor = 0;
		if(esVacia()){
			cout<<"La lista esta vacia"<<endl;
		}else{
			aux = cabeza;
			mayor = aux->getValor();
			while(aux!=NULL){
				if (aux->getValor() > mayor)
					mayor = aux->getValor();
				aux=aux->getSiguiente();
			}
			cout<<"\n\n\n";
		}
		cout<<"El mayor es -> \t"<<mayor;
		cout<<"\n\n\n";			
	}
	
	
	void imprimir() {
		Nodo *aux;
		if(esVacia()) {
			cout<<"La lista esta vacia"<<endl;
		} else {
			aux=cabeza;
			while(aux!=NULL) {
				cout<<aux->getValor()<<"->";
				aux=aux->getSiguiente();
			}
			cout<<"NULL";
		}
	}
	
	void ContarNodos(Nodo *nodo, int valor){
		Nodo *aux;
		int conta=0;
		if(esVacia()){
			cout<<"La lista esta vacia"<<endl;
		}else{
			aux= cabeza;
			while(aux!=NULL){
				if (aux->getValor()== valor)
					conta++; 
				aux=aux->getSiguiente();
			}
			cout<<"Repetidos-> \t"<<conta;
			cout<<"\n\n\n";			
		}
	}
	
	void eliminarUltimo() {
		Nodo *act, *ant;
		if(!esVacia()) {
			if(contador==1){
				act=cabeza;
				delete(act);
				cabeza=NULL;
				
			} else {
				ant=act=cabeza;
				while(act->getSiguiente() !=NULL) {
					ant=act;
					act=act->getSiguiente();
				}
				delete (act);
				ant->setSiguiente(NULL);
			}
			contador--;
		}
	}
	
	void eliminarPrimero() {
		Nodo *aux;
		if(!esVacia()) {
			aux=cabeza;
			cabeza=cabeza->getSiguiente();
			delete(aux);
			contador--;
		}
	}
	
	void eliminarXNodo(Nodo *nodo){
		Nodo *aux;
		if(!esVacia()){
			if(nodo==cabeza){
				cabeza=cabeza->getSiguiente();	
			}else{
				aux=cabeza;
				while(aux->getSiguiente()!=nodo){
					aux=aux->getSiguiente();
				}
				aux->setSiguiente(nodo->getSiguiente());
			}
			delete(nodo);
			contador--;
		}
	}
		int encontrarMaximoEliminar(){
			Nodo *aux;
			int mayor = 0;
			if(esVacia()){
				mayor = -1;
				cout<<"La lista esta vacia"<<endl;
			}else{
				aux = cabeza;
				cout<<"Cabeza->";
				mayor = aux->getValor();
				while(aux!=NULL){
					if (aux->getValor() > mayor)
						mayor = aux->getValor();
					aux=aux->getSiguiente();
				}
			}
			return mayor;		
		}
	
};
