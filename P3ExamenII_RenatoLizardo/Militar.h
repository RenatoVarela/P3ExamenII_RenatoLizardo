#ifndef MILITAR_H
#define MILITAR_H
#include <string>

using namespace std;

class Militar {
          private:
             string nombre,edad,rango,codigo;


          public:
          Militar();
          Militar(string,string,string,string);
          string getNombre();
          string getEdad();
          string getRango();
          string getCodigo();


};
#endif 
          


