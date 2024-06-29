/*Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada 
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
actualizar las variables correspondientes. */

#include <iostream>
#include <math.h>
#include <windows.h>
using namespace std;
void CalcularRaices(float i, float j, float z, float& x1, float& x2 ,float& r, float& q, bool& indicador){
	
	float d=pow(j,2)-4*i*z;
	if (d==0) {
		indicador=true;
		x1=(-j+sqrt(d))/(2*i);
		x2=(-j-sqrt(d))/(2*i);
			
	
	}else if (d>0) {
		indicador=true;
		x1=(-j+sqrt(d))/(2*i);
		x2=(-j-sqrt(d))/(2*i);
		
	        
	}else{
		indicador=false;
		x1=(sqrt(-d))/(2*i);
		r=-j/2*i;
		x2=(sqrt(-d))/(2*i);
		q=-j/2*i;
		}
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	float a,b,c,x1=0,x2=0;
	float d=0,q,r,resultado;
	bool indic;
	cout<<"INGRESE LOS COEFICIENTES DE LA SIGUIENTE EXPRESIÓN "<<endl;
	cout<<"ax² + bx + c = 0"<<endl;
	cout<<"INGRESE EL VALOR DE (a): "<<endl;
	cin>>a;
	cout<<"INGRESE EL VALOR DE (b): "<<endl;
	cin>>b;	
	cout<<"INGRESE EL VALOR DE (c): "<<endl;
	cin>>c;
	d=pow(b,2)-4*a*c;
	while (a==0){
		cout<<"NO ES UNA ECUACIÓN CUADRÁTICA";
		return 0;
	}
	system("cls");
	 
	CalcularRaices(a,b,c,x1,x2,r,q,indic);
	if (indic==true){
		cout<<"SON RAÍCES REALES: "<<endl;
		cout<<"LA PRIMERA RAÍZ ES : "<<x1<<endl;
	    cout<<"LA SEGUNDA RAÍZ ES : "<<x2<<endl;
	    return 0;
	}else
		cout<<"SON RAÍCES SON COMPLEJAS: "<<endl;
		cout<<r<<" + "<<x1<<"i"<<"\n"<<q<<" - "<<x2<<"i"<<endl;	
	
	return 0;
}