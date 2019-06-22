#ifndef NODOARBOL_H
#define NODOARBOL_H
#include "Militar.h"
#include <vector>

using std::vector;

class NodoArbol {

          private:

          Militar* militar;
          vector<NodoArbol*> nodos;

          
          public:

          NodoArbol();
          NodoArbol(Militar*);

          vector<NodoArbol*> getNodo();
          Militar* getMilitar();

          void AgregarNodo(Militar*);




          



};

#endif