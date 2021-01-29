#include <iostream>
#include <string>
#include <array>


using namespace std;

void ordenar(int arreglo [], int elemento);


int main(int argc, char** argv) {
	
	int opcion = 0; 
	while (opcion != 4){
		cout << "          MENU: " <<endl;
		cout << "1) Ejercicio 1" <<endl;
		cout << "2) Ejercicio 2" <<endl; 
		cout << "3) Ejercicio 3" <<endl;
		cout << "4) Salir. " <<endl; 
		cout << "Ingrese la opcion: " <<endl;  
		cin >> opcion; 
		switch (opcion){
			case 1:
				{
				string cadena;
				cout << "          EJERCICIO 1: " <<endl;
				cout << "Ingrese la cadena a evaluar: " <<endl;  
				cin.ignore();
				getline(cin, cadena);
				int result = 0; 
				for (int c = 0; c < cadena.size();c++){
					char caracter = cadena [c]; 
					if (caracter == 'A' && c == 1){
						if (cadena [c-1] == '0' || cadena [c+3] == '0'){
							result = 0; 
						}else {
							result = 1; 
						}
					}else if (caracter == 'O' && c == 1){
						if (cadena [c-1] == '0' && cadena [c+2] == '0'){
							result = 0; 
						}else {
							result = 1; 
						}
					}else if (caracter == 'A'){
						if (result == '0' || cadena [c+3] == '0'){
							result = 0; 
						}else {
							result = 1; 
						}
					}else if (caracter == 'O'){
						if (result == 0 && cadena [c+2] == '0'){
							result = 0; 
						}else {
							result = 1; 
						}
					}
				    
				} 
				if (result == 1){
					cout << "Solucion = true" <<endl; 
				}else {
					cout << "Solucion = false" <<endl;
				}
				break; 
				}
		    case 2:
		    	{
		    	cout << "          EJERCICIO2: " <<endl; 
		    	int arreglo[20];
                for(int c = 0; c< 20; c++){
                    arreglo[c] = 1 + (rand()% 99);
                }
                cout << "Arreglo Generado: " <<endl;
                for(int c = 0; c < 20; c++){
                    cout<< "[" << arreglo[c] <<"] ";
                } 
                cout <<endl;
                ordenar(arreglo, 20);
                cout <<endl;
                cout<<"Arreglo Ordenado: "<<endl;;
                for(int k = 0;k<20;k++){
                    cout<< "[" << arreglo[k]<<"] ";
                }
				cout << endl;
		    	break; 
				}
			case 3:
				{
					
			    break; 
				}
		}//Fin del switch que evalua la opcion. 
	}//Fin del while que reinicia el programa. 
	
	
	return 0;
			
}

	void ordenar(int arreglo [], int elemento){
        /*if (elemento == 0){
            return arreglo; 
        }else {
            if (elemento == arreglo.size() - 1){
                bool validar = true; 
                while (validar == true){
                    validar = false; 
                    for (int c = 0;c < arreglo.size();c++){
                        if (c < arreglo.size() - 1){
                            if (arreglo [c] < arreglo [c + 1]){
                                int aux = arreglo [c];
                                int aux2 = arreglo [c + 1];
                                arreglo [c] = aux2;
                                arreglo [c + 1] aux;
                                validar = true; 
                            }//Fin del if que valida si un elemento es menor a otro.
                        }//Fin del if que valida que elementos validar.
                    }//Fin del for que recorre el arreglo.
                }//Fin del while que valida si el arreglo esta ordenado.
            }//Fin del if que valida el ciclo. 
            arreglo = ordenar(arreglo, elemento - 1);
            cout << "Etapa: " <<endl;
                for(int c = 0; c < 20; c++){
                    cout<< "[" << arreglo[c] <<"] ";
                }
            return arreglo;
        }//Fin del if que valida que valor retornar.*/
        cout << "Funcion: " <<endl;
        for(int c = 0; c < 20; c++){
            cout<< "[" << arreglo[c] <<"] ";
        } 
    }//Fin del metodo ASCENDETE.









