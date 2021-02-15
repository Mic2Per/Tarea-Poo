#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string puesto,nombres,apellidos,direccion;
	int codigo_empleado,sueldo,telefono;
	
	cout<<"Ingresar Codigo de Empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingresar Nombres: ";
	cin>>nombres;
	cout<<"Ingresar Apellidos: ";
	cin>>apellidos;
	cout<<"Ingresar Direccion: ";
	cin>>direccion;
	cout<<"Ingresar Telefono: ";
	cin>>telefono;
	cout<<"Ingresar Sueldo: ";
	cin>>sueldo;
	cout<<"Ingresar Puesto: ";
	cin>>puesto;
	
	
	Empleado obj = Empleado(nombres,apellidos,direccion,telefono,codigo_empleado,sueldo,puesto);
	obj.mostrar();
	
}
