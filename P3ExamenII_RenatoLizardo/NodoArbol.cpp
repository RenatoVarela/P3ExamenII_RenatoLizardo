#include "NodoArbol.h"


NodoArbol::NodoArbol(){

}
         
 NodoArbol::NodoArbol(Militar* militar1){
           militar = militar1;
          

}

vector<NodoArbol*> NodoArbol::getNodo(){
          return nodos;
}

Militar* NodoArbol::getMilitar(){
          return militar;

}

void NodoArbol::AgregarNodo(Militar* militar){
          nodos.push_back(new NodoArbol(militar));

}

