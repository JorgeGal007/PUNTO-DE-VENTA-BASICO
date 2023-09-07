#include <iostream>
#include <locale.h>

using namespace std;


//DECLARACION DE FUNCIONES GLOBALES
void pantallaPrincipal();
void pantallaAdmin();
void pantallaVendedor();
void altaProducto();
void bajaProducto();
void modProducto();
void consultarProducto();
void altaUsu();
void bajaUsu();
void modUsu();
void consultarUsu();

//DECLARACIÓN DE VARIABLES GLOBALES
string productos[50];

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
		cout<<"Ingrese una opción: ";
		cin>>opt;
		
		switch(opt){
			case 1: pantallaAdmin(); break;
			case 2: pantallaVendedor(); break;
			case 3: cout<<"Vuelva pronto :)"<<endl; break;
			
			default: cout<<"\nPor favor ingresa un valor aceptado"<<endl;
		}
		
	}while(opt != 3);
	
}

void pantallaAdmin(){
	int opt;
	
	do{
		cout<<"\n¿Qué deseas hacer?"<<endl;
		cout<<endl;
		cout<<"1. Alta de producto."<<endl;
		cout<<"2. Baja de producto."<<endl;
		cout<<"3. Modificar producto."<<endl;
		cout<<"4. Consultar producto"<<endl;
		cout<<"5. Alta de usuario."<<endl;
		cout<<"6. Baja de usuario."<<endl;
		cout<<"7. Modificación de usuario."<<endl;
		cout<<"8. Consultar usuario."<<endl;
		cout<<"9. Regresar al menú principal."<<endl;
		cout<<"Ingrese una opción: ";
		cin>>opt;
		
		switch(opt){
			case 1: altaProducto(); break;
			case 2: bajaProducto(); break;
			case 3: modProducto(); break;
			case 4: consultarProducto(); break;
			case 5: altaUsu(); break;
			case 6: bajaUsu(); break;
			case 7: modUsu(); break;
			case 8: consultarUsu(); break;
			case 9: pantallaPrincipal(); break;
			
			default: cout<<"Ingrese una opción válida"<<endl;
		}
	}while(opt != 9);
	
	cout<<endl;
	cout<<"En construcción"<<endl;
}

void altaProducto(){
	
}

void bajaProducto(){
}

void modProducto(){
}

void consultarProducto(){
	
	string producto;
	
	cout<<"Inserte el producto a consultar: ";
	cin>>producto;
	
	
}

void altaUsu(){
}

void bajaUsu(){
}

void modUsu(){
}

void consultarUsu(){
}

void pantallaVendedor(){
	cout<<endl;
	cout<<"En construcción"<<endl;
}
