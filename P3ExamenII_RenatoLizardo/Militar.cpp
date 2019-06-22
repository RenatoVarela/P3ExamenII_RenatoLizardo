#include "Militar.h"


Militar::Militar(){

}


Militar::Militar(string nombre1,string edad1,string rango1,string codigo1){
          nombre = nombre1;
          edad = edad1;
          rango = rango1;
          codigo = codigo1;

}


string Militar::getNombre(){
          return nombre;
}

 string Militar::getEdad(){
           return edad;

}
          
string Militar::getRango(){
          return rango;
}
      
      
string Militar::getCodigo(){
          return codigo;
}