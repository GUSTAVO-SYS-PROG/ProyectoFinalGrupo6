#include <iostream>
#include <stdlib.h>

using namespace std;

void guardar(), buscar(), mostrar_todo(), anular();
void buscarfe(), mostrar_todofe();
void guardarado(), buscarado(), mostrar_todoado(), anularado();

	struct cliente{
	int codigo; 
	char tipo[20]; 
	char gen[20];
	int estado;
	char fe[10];
	char nomb[20];
	
	};
	
	cliente client[2];
	
	struct ventas{
	int codigo2;  
	int estado2;
	char dire[20];
	int cell;
	char ape1[10];
	char nom1[10];
	};
	
	ventas vent[2];
	
	struct compras{
	int codigo3;  
	int estado3;
	
	
	char nom2[50];
	};
	
	compras comp[2];

	

void login();

int main(){
 login();
 return 0;
}

void login(){
	int op, op1, op2, op3, op4;
 string nombre;
 string pass;
 int i;
 for(i=1; i<4; i++){
 system("cls");
 cout<<"\t\t\t\t\t\t\t\t\tCreado por el grupo 6 ";
 cout << endl;
 cout << "                   ------------------------------------------" << endl;
 cout << "                       BIENVENIDO AL CONTROL DE MASCOTAS      " << endl;
 cout << "                   ___________________________________________" << endl;
 cout << endl;
 cout << "Por favor ingrese su informacion de usuario" << endl<<endl;
 cout << "Nombre de usuario" << endl;
 cin >> nombre;
 if(nombre == "1"){
  cout << "Nombre de usuario correcto, por favor ingrese su contrasena:" << endl;
  cin >> pass;
  if(pass == "1"){
   cout << endl;
   cout << "Contrasena correcta, bienvenido, sera redirigido a la aplicacion" << endl<<endl<<endl;
   	system("pause");
   
   do{
   	cout<<"\n\n"<<endl;
   	cout<<"************************************************"<<endl;
	cout<<"*\t\tQUE DESEA HACER                *"<<endl;
	cout<<"*PUEDE ELEGIR UNA DE LAS OPCIONES EN PANTALLA  *"<<endl; 
	cout<<"*1. Registrar Mascotas                         *"<<endl;
	cout<<"*2. Fecha de Entrada                           *"<<endl;
	cout<<"*3. Control Adopciones                         *"<<endl;
	cout<<"*5. Salir                                      *"<<endl;
	cout<<"************************************************"<<endl;
	cin>>op1;
	system("cls");
   	
   	
			switch(op1){
	case 1:	
	do{
		   	
    cout<<"Que desea hacer"<<endl; 
	cout<<"1. Guardar"<<endl;
	cout<<"2. Buscar"<<endl;
	cout<<"3. mostrar todo"<<endl;
	cout<<"4. Eliminar"<<endl;
	cout<<"5. Salir"<<endl;
	cin>>op;
	system("cls");
	
	switch(op){
	case 1:{
		guardar();
		break;
	}
	
	case 2: {
		buscar();
		break;
	}
	
	case 3:{
		mostrar_todo();
		break;
	}
	
	case 4:{
		anular();
		break;
	}
		
		
	
	}
	}while(op!=5);
	break;
	
	
		case 2:	
	do{
		   	
    cout<<"Que desea hacer"<<endl; 
	cout<<"1. Buscar"<<endl;
	cout<<"2. Mostrar todo"<<endl;
	cout<<"3. Salir"<<endl;
	cin>>op2;
	system("cls");
	
	switch(op2){
	case 1:{
		buscarfe();
		break;
	}
	
	case 2: {
		mostrar_todofe();
		break;
	}	
	}
	}while(op2!=3);
	break;
	
	case 3:	
	do{
		   	
   cout<<"QUE DESEA HACER"<<endl; 
	cout<<"1. Guardar"<<endl;
	cout<<"2. Buscar"<<endl;
	cout<<"3. Mostrar todo"<<endl;
	cout<<"4. Anular"<<endl;
	cout<<"5. Salir"<<endl;
	cin>>op3;
	system("cls");
	
	switch(op3){
	case 1:{
		guardarado();
		break;
	}
	
	case 2: {
		buscarado();
		break;
	}
	
	case 3:{
		mostrar_todoado();
		break;
	}
	
	case 4:{
		anularado();
		break;
	}
		
		
	
	}
	}while(op3!=5);
	break;
	
	case 4:	
	do{
		   	
   cout<<"Que desea hacer"<<endl; //no sirve...feura de servicio
	cout<<"1. Guardar"<<endl;
	cout<<"2. Buscar"<<endl;
	cout<<"3. mostrar todo"<<endl;
	cout<<"4. Anular"<<endl;
	cout<<"5. Salir"<<endl;
	cin>>op4;
	system("cls");
	

	}while(op4!=5);
	break;
	
	
	
}
	
	}while(op1!=5);
	cout<<"Gracias"<<endl;
   
   
 }
  else
   if(pass != "admin123"){
    cout << "Contrasena incorrecta, por favor ingrese un usuario y contrasena valida" << endl;
    system("pause>null");
   }
 }
 else
  if(nombre != "admin"){
    cout << "Nombre de usuario incorrecto, por favor ingrese su nombre de usuario nuevamente correctamente" << endl;
  system("pause>null");
 }

 if(i > 0){
    cout << endl;
    cout << "Ha realizado " << i << "/10 intentos" << endl;
    cout << endl;
    system("pause>null");
   }
 if(i == 3){
   cout << endl;
   cout << "Ha realizado 3 intentos, por seguridad el programa se cerrara, mostrar todo..." << endl;
   system("pause>null");
   
   exit(0);
   
   
}

}
}


void guardar(){
		
		for(int i=0; i<1; i++){
			client[i].estado=1;
	cout<<"asigna un Codigo de mascota   :"<<endl; 	cin>>client[i].codigo;
	cout<<"asigne un nombre de la mascota:"<<endl;	cin>>client[i].nomb;
	cout<<"que tipo de mascota           :"<<endl;  cin>>client[i].tipo;
	cout<<"genero de mascota             :"<<endl;  cin>>client[i].gen;
	cout<<"ingrese fecha de entrada      :"<<endl;  cin>>client[i].fe;
	cout<<endl;
	cout<<"guardado exitosamente\n"<<endl;

		system("pause");
system("cls");
			}
			
		}
		
		void buscar(){
			int cod;
			cout<<"Que codigo de mascota que desea Buscar: ";
			cin>>cod;
			for(int i=0; i<1; i++){
			if((client[i].estado==1)&&(cod==client[i].codigo)){
	cout<<endl<<endl;
	cout<<"El codigo de la mascota es:"<<client[i].codigo<<endl;
	cout<<"El Nombre de la mascota es:"<<client[i].nomb<<endl;
	cout<<"El tipo   de la mascota es:"<<client[i].tipo<<endl;
	cout<<"EL genero de la mascota es:"<<client[i].gen<<endl;
	cout<<"la fecha  de la entrada es:"<<client[i].fe<<endl;

	cout<<"exitoso"<<endl;
	system("pause");
	system("cls");	
			}
			
			}
			
		}
		
		void mostrar_todo(){
			
			for(int i=0; i<1; i++){
				if(client[i].estado==1){
				
	cout<<"El codigo de la mascota es:"<<client[i].codigo<<endl;
	cout<<"El Nombre de la mascota es:"<<client[i].nomb<<endl;
	cout<<"El tipo   de la mascota es:"<<client[i].tipo<<endl;
	cout<<"el genero de la mascota es:"<<client[i].gen<<endl;
	cout<<"la fecha  de la entrada es:"<<client[i].fe<<endl;

	cout<<"exitoso"<<endl;
	system("pause");
	system("cls");
		
		}
	}
	}
		
		void anular(){
			int cod;
			cout<<"Que codigo de mascota desea Anular: ";
			cin>>cod;
			cout<<"\n"<<endl;
			cout<<"\t anulado exitosamente"<<endl;
			for(int i=0; i<1; i++){
				if((client[i].estado==1)&&(cod==client[i].codigo)){
				client[i].estado=0;
				cout<<"anulado exitosamente\n"<<endl;
	system("pause");
	system("cls");				
				}
			
			}
			
				
			
		}
		



		
		void buscarfe(){
			int cod;
			cout<<"Que codigo desea Buscar: ";
			cin>>cod;
			for(int i=0; i<1; i++){
	if((client[i].estado==1)&&(cod==client[i].codigo)){	cout<<endl<<endl;
	cout<<"El tipo   de la mascota es:"<<client[i].tipo<<endl;
	cout<<"la fecha  de la entrada es:"<<client[i].fe<<endl;
	
	cout<<"Exitoso"<<endl;
	system("pause");
	system("cls");	
				
			}
			
			}
			
		}
		
		void mostrar_todofe(){
			
			for(int i=0; i<=1; i++){
				if(client[i].estado==1){				
	cout<<"El codigo de la mascota es:"<<client[i].codigo<<endl;
	cout<<"El Nombre de la mascota es:"<<client[i].nomb<<endl;
	cout<<"El tipo   de la mascota es:"<<client[i].tipo<<endl;
	cout<<"el genero de la mascota es:"<<client[i].gen<<endl;
	cout<<"la fecha  de la entrada es:"<<client[i].fe<<endl;
	
	cout<<"Exitoso"<<endl;
	system("pause");
	system("cls");
		
		}
	}
	}
		
	
	void guardarado(){
		
		for(int i=0; i<1; i++){
			vent[i].estado2=1;
	cout<<"\t\tFabor de llenar sus datos y de la mascota que va a adoptar\n"<<endl<<endl;
	cout<<"Ingrese un nombre:"<<endl;
	cin>>vent[i].nom1;
	cout<<"Ingrese un apellido:"<<endl;
	cin>>vent[i].ape1;
	cout<<"Ingrese un numero de telefono:"<<endl;
	cin>>vent[i].cell;
	cout<<"Ingrese la direccion:"<<endl;
	cin>>vent[i].dire;
	cout<<"Ingrese el codigo de la mascota a adoptar:"<<endl;
	cin>>client[i].codigo;
	cout<<"Ingrese el tipo de la mascota:"<<endl;
	cin>>client[i].tipo;
	cout<<"ingrese el genero de la mascot:"<<endl;
	cin>>client[i].gen;	
	cout<<endl;
	cout<<"Datos guardados exitosamente"<<endl;
	system("pause");
	system("cls");
			}
			
		}
		
		void buscarado(){
			int cod;
			cout<<"Que codigo desea Buscar: ";
			cin>>cod;
			for(int i=0; i<1; i++){
			if((vent[i].estado2==1)&&(cod==vent[i].codigo2)){
	cout<<endl<<endl;
	cout<<"El nombre de la persona que adoptó  es:"<<vent[i].nom1<<endl;
	cout<<"El tipo   de la mascota es:"<<client[i].tipo<<endl;
	cout<<"el genero de la mascota es:"<<client[i].gen<<endl;
	cout<<"el numero a   contactar es:"<<vent[i].cell<<endl;
				
	cout<<"Exitoso"<<endl;
	system("pause");
	system("cls");	
			}
			
			}
			
		}
		
		void mostrar_todoado(){
			
			for(int i=0; i<1; i++){
				if(vent[i].estado2==1){
	cout<<"\t\tLos datos de la mascota son:\n"<<endl;		
    cout<<"El codigo de la mascota es:"<<client[i].codigo<<endl;
	cout<<"El Nombre de la mascota es:"<<client[i].nomb<<endl;
	cout<<"El tipo   de la mascota es:"<<client[i].tipo<<endl;
	cout<<"el genero de la mascota es:"<<client[i].gen<<endl;
	cout<<"la fecha  de la entrada es:"<<client[i].fe<<endl;
	cout<<"\t\tLos datos de la persona son:"<<endl;
	cout<<"El nombre de la persona es: "<<vent[i].nom1<<endl;
	cout<<"El apellido de la persona es:"<<vent[i].ape1<<endl;
	cout<<"El numero de telefono es"<<vent[i].cell<<endl;
	cout<<"La direccion es:"<<vent[i].dire<<endl;

	cout<<"exitoso"<<endl;
	system("pause");
	system("cls");
		
		}
	}
	}
		
		void anularado(){
			int cod;
			cout<<"Que codigo desea Anular: ";
			cin>>cod;
			for(int i=0; i<1; i++){
				if((vent[i].estado2==1)&&(cod==vent[i].codigo2)){
				vent[i].estado2=0;
	cout<<"Datos anulados exitosamente..."<<endl;
	system("pause");
	system("cls");
				}
			
			}
		}
			





			

