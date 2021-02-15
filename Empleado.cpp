#include "Persona.cpp"
#include <iostream>
using namespace std;
class Empleado : Persona{
	protected : string puesto;
				int codigo_empleado, sueldo;
	
	public : Empleado(){
			}
			Empleado(string nom,string ape,string dir,int tel,int cod,int sue,string pue) : Persona(nom,ape,dir,tel){
					codigo_empleado = cod;
					sueldo = sue;
					puesto = pue;
				}
			
			void setCodigo(int cod){codigo_empleado = cod;}
			void setSueldo(int sue){sueldo = sue;}
			void setPuesto(string pue){puesto = pue;}
			void setNombres(string nom){nombres = nom;}
			void setApellidos(string ape){apellidos = ape;}
			void setDireccion(string dir){direccion = dir;}
			void setTelefono(int tel){telefono = tel;}
	
			int getCodigo(){return codigo_empleado;}
			int getSueldo(){return sueldo;}
			string getPuesto(){return puesto;}
			string getNombres(){return nombres;}
			string getApellidos(){return apellidos;}
			string getDireccion(){return direccion;}
			int getTelefono(){return telefono;}
				
	void mostrar(){
		cout<<"__________________"<<endl;
		cout<<codigo_empleado<<","<<nombres<<","<<apellidos<<","<<puesto<<","<<sueldo<<","<<direccion<<","<<telefono<<endl;
	}
};
