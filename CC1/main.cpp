/*
	ESTUDIANTES: KEVIN BORDA, OMAR ESPITIA Y LAURENT CHAVERRA
*/
#include <iostream> 
#include <queue> 
  
using namespace std; 
  
void mostar(priority_queue <int> gq) 
{ 
    priority_queue <int> g = gq; 
    while (!g.empty()) 
    { 
        cout << '\t' << g.top(); 
        g.pop(); 
    } 
    cout << '\n'; 
} 
  
int main () 
{ 
    priority_queue <int> lista; 
    int opc=0;
    int dato=0;
	//Incializamos la lista con unos valores
	lista.push(30); 
    lista.push(20); 
    lista.push(0);
    lista.push(5); 
    lista.push(1); 
    
    
    while (opc!=4){
    	cout<<"1. 	Insertar dato."<<endl;
    	cout<<"2. 	Mostar cola."<<endl;
    	cout<<"3. 	Atender."<<endl;
    	cout<<"4. 	Salir."<<endl;
		cin>>opc;
		if (opc==1){
			cout<<"Inserte dato"<<endl;
			cin>>dato;
			lista.push(dato);
			cout<<"Dato insertado"<<endl;
		}
		else if (opc==2){
			cout<<"Se han insertado "<<lista.size()<<" elementos"<<endl;
			cout<<"La lista va asi :";
    		mostar(lista); 
		}
		else if (opc==3){
			lista.pop();
			cout<<"Cola atendida"<<endl;
		}
		else if (opc!=4)
			cout<<"Opcion no valida"<<endl;
    	
	}
  
    return 0; 
} 


//Base del programa tomada de: https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/
