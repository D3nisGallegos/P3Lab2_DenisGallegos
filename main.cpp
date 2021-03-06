#include <iostream>
#include <string>
#include <array>
#include <stdlib.h>
#include <time.h>
#include <math.h>


using namespace std;


void ordenar(int arreglo [], int nuevo [], int elemento);

double sumatoria(int n, double suma, int h);

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
		    	srand(time(NULL)); 
		    	int arreglo[20];
                for(int c = 0; c< 20; c++){
                    arreglo[c] = 1 + (rand()% 99);
                }
                cout << "Arreglo Generado: " <<endl;
                for(int c = 0; c < 20; c++){
                    cout<< "[" << arreglo[c] <<"] ";
                } 
                int nuevo[20];
				for (int  h =0; h < 20;h++){
					nuevo [h] = arreglo [h];
				}
                cout <<endl;
                ordenar(arreglo, nuevo, 20);
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
				cout << "          EJERCICIO 3: " <<endl;	
				cout << "Ingrese el limite de la funcion: " <<endl ;
				int lim; 
				double suma = 0; 
				cin >> lim; 
				suma = sumatoria(lim, 0, lim); 
				cout << "El resultado de la sumatoria es: " << suma; 
			    break; 
				}
		}//Fin del switch que evalua la opcion. 
	}//Fin del while que reinicia el programa. 
	
	
	return 0;
			
}

	void  ordenar(int arreglo [], int nuevo[], int elemento){
        if (elemento == 0){
            return;   
        }else {
            if (elemento == 20){
                bool validar = true; 
                while (validar == true){
                    validar = false; 
                    for (int c = 0;c < 20;c++){
                        if (c < 19){
                            if (arreglo [c] > arreglo [c + 1]){
                                int aux = arreglo [c];
                                int aux2 = arreglo [c + 1];
                                arreglo [c] = aux2;
                                arreglo [c + 1] = aux;
                                validar = true; 
                            }else {
                            	
							}
                        }//Fin del if que valida que elementos validar.
                    }//Fin del for que recorre el arreglo.
                }//Fin del while que valida si el arreglo esta ordenado.
            }//Fin del if que valida el ciclo.
            ordenar(arreglo, nuevo, elemento - 1);
        }//Fin del if que valida que valor retornar.
    }//Fin del metodo ASCENDETE.

	double sumatoria(int n, double suma, int h){
		if (n == 0){
			double sum = 0; 
			for (int c = 1; c < h;c++){
				int num = 2 * c + 1; 
				int denom = (c + 1) * c;
				double result = (double) num / denom;  
				sum += result; 
			}
			return sum; 
		}else {
			suma = sumatoria(n - 1, suma,  h); 
			return suma; 
		}
	} 







