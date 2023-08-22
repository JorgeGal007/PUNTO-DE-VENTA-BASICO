#include <iostream>
#include <locale.h>

using namespace std;


//DECLARACION DE FUNCIONES GLOBALES
void pantallaPrincipal();
void pantallaAdmin();
void pantallaVendedor();

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL, "spanish");
	pantallaPrincipal();
	cout<<endl;
	return 0;
}

void pantallaPrincipal(){
	
	int opt;
	
	do{
		cout<<"\t\t\t\t¿A donde desea ingresar?"<<endl;
		cout<<"1. Administrador"<<endl;
		cout<<"2. Vendedor"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Ingrese la opción: ";
		cin>>opt;
		
		switch(opt){
			case 1: pantallaAdmin(); break;
			case 2: pantallaVendedor(); break;
			case 3: break;
			
			default: cout<<"Por favor ingresa un valor aceptado"<<endl;
		}
		
	}while(opt != 3);
	
}

void pantallaAdmin(){
	cout<<endl;
	cout<<"En construcción"<<endl;
}

void pantallaVendedor(){
	cout<<endl;
	cout<<"En construcción"<<endl;
}
