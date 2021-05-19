#include <stdlib.h>
#include <iostream>

using namespace std;

struct nodo{
    int numero;
    nodo *siguiente;

}*primero, *ultimo;


void insertarEstudiante(){
    nodo *nuevo = new nodo();
    cout<<"Ingrese numero del nuevo estudiante"<<endl;
    cin>>nuevo->numero;

    if (primero == NULL){
        primero = nuevo;
        primero->siguiente = NULL;
        ultimo = nuevo; 
    }
    else{
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        ultimo = nuevo;
    }
    cout<<"Registro guardado"<<endl;
}

void mostrarLista(){
    cout<<"La lista de es la siguiente"<<endl;
    nodo * actual = new nodo();
    actual = primero;
    if (primero != NULL){
        while (actual != NULL){

            cout<<" "<<actual->numero<<endl;
            actual = actual->siguiente;
        }
        cout<<"\n";
        
    }
    else{
        cout<<"Lista de estudiantes vacía";
    }
}

void buscarEnLista(int num){
    int conta=0;
    int pos=0;
    bool flag;

    cout<<"Buscando numero "<<num<<endl;
    nodo * actual = new nodo();
    actual = primero;
    if (primero != NULL){
        while (actual != NULL){
            conta++;
            if(actual->numero==num){
                flag=false;
                pos=conta;
                actual=actual->siguiente;
            }
            else{
                actual=actual->siguiente;
            }
        }
        if (flag){
            cout<<"Encontrado en la posicion"<<pos<<endl;
        }
        else{
        cout<<"No existe ese numero";
        }
        
    }
}
    
    




int main(){
    insertarEstudiante();
    insertarEstudiante();
    mostrarLista();
    buscarEnLista(34);

return 0;

}

