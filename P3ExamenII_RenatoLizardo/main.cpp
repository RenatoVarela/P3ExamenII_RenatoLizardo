#include <iostream>
#include <string>
#include <ncurses.h>
#include "Militar.h"
#include "NodoArbol.h"
#include <fstream>
#include <stdlib.h>

using namespace std;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;




void CrearSoldado();
void Agregar(NodoArbol*,string,vector <NodoArbol*>& );
void Guardar(vector <NodoArbol*>&);
vector<NodoArbol*> Listar();

int main(){



          int opcion = 0;

          cout<<"Ingrese lo que desea INgresar" <<endl;
          cin>>opcion;

          switch(opcion){ 
                    
           case 1:
           CrearSoldado();

           break;




          }

return 0;

}


void CrearSoldado(){
          Militar* militar;

          NodoArbol* raiz;
          
          
          int opcion;
         
          int numero_soldado;
          string nombre,edad,rango,codigo;


          raiz = new NodoArbol(new Militar("Mario","15","General","1231"));
           vector <NodoArbol*> tipoActual;



          bool salir = false;

          while(salir == false){

              cout<<"INgrese el nombre del soldado "<<endl 
            <<"1)Para Coronel "<<endl
            <<"2)Para Mayor "<<endl
            <<"3)Para Capitan "<<endl
            <<"4)Para Teniente "<<endl
            <<"5)Para Sargento "<<endl
            <<"6)Para Cabo"<<endl
            <<"7)Para Soldado "<<endl
             <<"7)Para Soldado "<<endl;
          
          cin >> opcion;

          cout<<"INgrese el nombre del soldado"<<endl;
          cin >> nombre;

           cout<<"INgrese "<<endl;
          cin >> edad;

          cout<<"INgrese el nombre del soldado"<<endl;
          cin >> codigo;

       
            



          switch(opcion){

                    case 1:
                        rango = "Coronel";
                        militar = new Militar(nombre,edad,rango,codigo);
                       
                        Agregar(raiz,"General",tipoActual);  

                        cout<<""<<endl;
                        cout<<"Lista de coroneles"<<endl;
                        for(int i = 0 ; i < tipoActual.size(); i++ ){
                                cout<<i<<") "<<tipoActual[i]->getMilitar()->getNombre()<<endl;
                        }

                        cout<<"Ingrese la posicion en donde desea insertar"<<endl;
                        cin >> numero_soldado;


                        //listar tipoAACRTUAL
                        //POS 
                        //TIPACTUAL[POS].AGREGARHIJO(NODOS);

                        tipoActual[numero_soldado]->AgregarNodo(militar);
                         


                            break;

                    case 2:
                        rango = "Mayor";
                        militar = new Militar(nombre,edad,rango,codigo);
                        
                        Agregar(raiz,"Coronel",tipoActual);  

                        for(int i = 0 ; i < tipoActual.size(); i++ ){
                                cout<<i<<") "<<tipoActual[i]->getMilitar()->getNombre()<<endl;
                        }

                        cout<<"Ingrese la posicion en donde desea insertar"<<endl;
                        cin >> numero_soldado;


                        //listar tipoAACRTUAL
                        //POS 
                        //TIPACTUAL[POS].AGREGARHIJO(NODOS);

                        tipoActual[numero_soldado]->AgregarNodo(militar);

                            break;

                    case 3:
                        rango = "Capitan";
                        militar = new Militar(nombre,edad,rango,codigo);
                        Agregar(raiz,"Mayor",tipoActual); 

                         for(int i = 0 ; i < tipoActual.size(); i++ ){
                                cout<<i<<") "<<tipoActual[i]->getMilitar()->getNombre()<<endl;
                        }

                        cout<<"Ingrese la posicion en donde desea insertar"<<endl;
                        cin >> numero_soldado;


                        //listar tipoAACRTUAL
                        //POS 
                        //TIPACTUAL[POS].AGREGARHIJO(NODOS);

                        tipoActual[numero_soldado]->AgregarNodo(militar);


                            break;


                    case 4:
                        rango = "Teniente";
                        militar = new Militar(nombre,edad,rango,codigo);
                         
                        Agregar(raiz,"Capitan",tipoActual); 

                         for(int i = 0 ; i < tipoActual.size(); i++ ){
                                cout<<i<<") "<<tipoActual[i]->getMilitar()->getNombre()<<endl;
                        }

                        cout<<"Ingrese la posicion en donde desea insertar"<<endl;
                        cin >> numero_soldado;


                        //listar tipoAACRTUAL
                        //POS 
                        //TIPACTUAL[POS].AGREGARHIJO(NODOS);

                        tipoActual[numero_soldado]->AgregarNodo(militar);


                            break;

                    case 5:
                        rango = "Sargento";
                        militar = new Militar(nombre,edad,rango,codigo);
                         
                        Agregar(raiz,"Teniente",tipoActual); 
                         for(int i = 0 ; i < tipoActual.size(); i++ ){
                                cout<<i<<") "<<tipoActual[i]->getMilitar()->getNombre()<<endl;
                        }

                        cout<<"Ingrese la posicion en donde desea insertar"<<endl;
                        cin >> numero_soldado;


                        //listar tipoAACRTUAL
                        //POS 
                        //TIPACTUAL[POS].AGREGARHIJO(NODOS);

                        tipoActual[numero_soldado]->AgregarNodo(militar);



                            break;

                    case 6:
                        rango = "Cabo";
                        militar = new Militar(nombre,edad,rango,codigo);
                         
                        Agregar(raiz,"Cabo",tipoActual); 
                         for(int i = 0 ; i < tipoActual.size(); i++ ){
                                cout<<i<<") "<<tipoActual[i]->getMilitar()->getNombre()<<endl;
                        }

                        cout<<"Ingrese la posicion en donde desea insertar"<<endl;
                        cin >> numero_soldado;


                        //listar tipoAACRTUAL
                        //POS 
                        //TIPACTUAL[POS].AGREGARHIJO(NODOS);

                        tipoActual[numero_soldado]->AgregarNodo(militar);

                            break;

                    case 7:
                        rango = "Soldado";
                        militar = new Militar(nombre,edad,rango,codigo);
                         
                        Agregar(raiz,"Soldado",tipoActual);
                         for(int i = 0 ; i < tipoActual.size(); i++ ){
                               cout<<i<<") "<<tipoActual[i]->getMilitar()->getNombre()<<endl;
                        }

                        cout<<"Ingrese la posicion en donde desea insertar"<<endl;
                        cin >> numero_soldado;


                        //listar tipoAACRTUAL
                        //POS 
                        //TIPACTUAL[POS].AGREGARHIJO(NODOS);

                        tipoActual[numero_soldado]->AgregarNodo(militar); 

                            break;


                    default:
                        salir = true;
                    break;

                            
                          
          }
          }

          Guardar(tipoActual);




 }



     void Agregar(NodoArbol* nodo, string rango, vector <NodoArbol*> &tipoActual){
     
         if(nodo->getMilitar()->getRango() == rango){
            tipoActual.push_back(nodo);
         }else
         {
             cout<<" eso es incorrecto"<<endl;
         }
         
         for(int i = 0; i < nodo->getNodo().size(); i++){
             Agregar (nodo->getNodo()[i],rango, tipoActual);
         }
        
         
    }


     void Guardar(vector <NodoArbol*> &tipoActual){


         string nombre = "";
         cout<<"INgrese el nombre del archivo"<<endl;
         cin>> nombre;
         ofstream file;

         file.open("Listados/"+nombre+".txt",ios::out);

         for(int i = 0; i < tipoActual.size() ;i++){
             file << tipoActual[i]->getMilitar()->getNombre() << "-" << tipoActual[i]->getMilitar()->getRango() <<endl;

           

         }

         file.close();
     
        
        
         
    }





   






           



          
