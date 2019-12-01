class Nodo {
private:
	int valor;
	Nodo *siguiente;
	
public:
	Nodo() {
		this->valor=0;
		this->siguiente=NULL;
		
	}
	Nodo (int valor){
		this->valor=valor;
		this->siguiente=NULL;
		
	}
	void setValor(int valor){
		this->valor=valor;
	}
	int getValor() {
		return this->valor;
	}
	void setSiguiente(Nodo *siguiente) {
		this->siguiente=siguiente;
	}
	Nodo* getSiguiente() {
		return this->siguiente;
	}
	
	
	
};
