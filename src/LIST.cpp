#include <stdlib.h>
#include <iostream>
#define maxchar 50

using namespace std;

struct nodo{
    char nombre[maxchar];
    nodo *siguiente;

}*primero, *ultimo;


void insertarEstudiante(){
    nodo *nuevo = new nodo();
    cout<<"Ingrese nombre del nuevo estudiante"<<endl;
    cin>>nuevo->nombre;

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
    cout<<"La lista de estudiantes es la siguiente"<<endl;
    nodo * actual = new nodo();
    actual = primero;
    if (primero != NULL){
        while (actual != NULL){

            cout<<" "<<actual->nombre<<endl;
            actual = actual->siguiente;
        }
        cout<<"\n";
        
    }
    else{
        cout<<"Lista de estudiantes vacía";
    }
}

void buscarEnLista(char name [maxchar]){
    int conta=0;
    int pos=0;
    bool flag;

    cout<<"Buscando nombre "<<name<<endl;
    nodo * actual = new nodo();
    actual = primero;
    if (primero != NULL){
        while (actual != NULL){
            conta++;
            if(actual->nombre==name){
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
        cout<<"No existe ese nombre";
        }
        
    }
}

void mofificarLista(char nuevoDato [maxchar], char eliminar [maxchar] ){
    int conta=0;
    int pos=0;
    bool flag;

    cout<<"Modificando  "<<eliminar<<" Por  "<<nuevoDato<<endl;
    nodo * actual = new nodo();
    actual = primero;
    if (primero != NULL){
        while (actual != NULL){
            if(actual->nombre==eliminar){
                actual->nombre == nuevoDato;
                flag=true;
            }
            else{
                actual=actual->siguiente;
            }
        }
        if (flag){
            cout<<"Wiii se modificó"<<pos<<endl;
            mostrarLista();
        }
        else{
        cout<<"No se pudo modificar";
        }
        
    }

}
    
    




int main(){
    insertarEstudiante();
    insertarEstudiante();
    insertarEstudiante();
    insertarEstudiante();
    insertarEstudiante();
    mostrarLista();
    mofificarLista("Manu", "Gis");
    //buscarEnLista("Manu");

return 0;

}

