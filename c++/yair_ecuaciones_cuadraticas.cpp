/*Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada
calcularRaices que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde
se almacenarán las raíces por referencia. Además, incluye una variable por referencia que indique si
las raíces son reales o complejas. La función debe calcular las raíces utilizando la fórmula general y
actualizar las variables correspondientes*/



#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
void calcularRaices(float a,float b,float c,bool &real,float &x1,float &x2,bool &igual,float &Parte_R,float &Parte_I){
    double Discriminante = pow(b,2)- 4 * a * c;
    if (Discriminante > 0) {
        x1 = (-b + sqrt(Discriminante)) / (2 * a);
        x2 = (-b - sqrt(Discriminante)) / (2 * a);
        real=true;
        igual=false;
    } else if (Discriminante == 0) { 
        x1 = -b / (2 * a);
        real=true;
        igual=true;
        
    } else {

        Parte_R = -b / (2 * a);
        Parte_I = sqrt(-Discriminante) / (2 * a);
        real=false;
    }	
}

int main() {
	SetConsoleOutputCP(CP_UTF8);
    float a, b, c,x1,x2,Parte_R,Parte_I;
    bool real,igual;
    
    
    cout<<"DIGITE LOS COEFICIENTES DE LA SIGUIENTE ECUACION CUADRATICA"<<endl;
    cout<<"\nax² + bx + c = 0\n";

    cout << "\nIngrese el coeficiente a: ";cin >> a;
    if (a == 0) {
        cout << "\nEl coeficiente 'a' no puede ser cero en una ecuación cuadrática." << endl;
        return 0;
    }
    cout << "\nIngrese el coeficiente b: ";cin >> b;
    cout << "\nIngrese el coeficiente c: ";cin >> c;
    
    calcularRaices(a,b,c,real,x1,x2,igual,Parte_R,Parte_I);
    if (real==true && igual==false){
        cout << "\nLas soluciones son reales y diferentes:" << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;   	
	}else if(real==true && igual==true){
		cout << "\nLa soluciones son iguales:" << endl;
		cout << "\nx = " <<x1<<endl;
	}else{
		cout << "\nLas soluciones son complejas y conjugadas:\n" << endl;
        cout << "x1 = " << Parte_R << " + " << Parte_I << "i" << endl;
        cout << "x2 = " << Parte_R << " - " << Parte_I << "i" << endl;
        cout<<"\nDonde:\n\n1.Parte Real es : "<<Parte_R<<"\n2.Parte Imaginaria es : ±"<<Parte_I<<"i"<<endl;
	}
    return 0;
}
