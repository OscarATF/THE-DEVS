#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a,b,c,disc,raiz1,raiz2,raizRe,raizIm;
	cout<<"Programa para calcular las raices de una ecuacion cuadratica\n\t\t\tax^2+bx+c=0"<<endl;
	cout<<"Ingrese el valor del coeficiente 'a':"<<endl;
	cin>>a;
	cout<<"Ingrese el valor del coeficiente 'b':"<<endl;
	cin>>b;
	cout<<"Ingrese el valor del coeficiente 'c':"<<endl;
	cin>>c;
 if (a!=0) {
		disc=pow(b,2)-4*a*c;
		if (disc>0) {
			cout<<"El C.S pertenece a los Reales"<<endl;
			raiz1=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
			raiz2=(-b-sqrt(pow(b,2)-4*a*c))/(2*a);
			cout<<"C.S = "<<raiz1<<" , "<<raiz2;
			return 0;
		} else if (disc==0) {
			cout<<"El C.S pertenece a los Reales"<<endl;
			raiz1=raiz2=(-b+sqrt(pow(b,2)-4*a*c))/(2*a);
			cout<<"C.S = "<<raiz1;
			return 0;
		} else if (disc<0){
			cout<<"El C.S pertenece a los Imaginarios"<<endl;
			if (b==0){
				raizIm=(sqrt(4*a*c))/(2*a);
				cout<<"C.S = "<<"-"<<raizIm<<"i";
				cout<<" , ";
				cout<<"+"<<raizIm<<"i";
				return 0;
			} else if (b!=0){
				raizRe=-b/(2*a);
				raizIm=sqrt(4*a*c-pow(b,2))/(2*a);
				cout<<"C.S = "<<raizRe<<" - "<<raizIm<<"i";
				cout<<" , ";
				cout<<raizRe<<" + "<<raizIm<<"i";
			}
		} 
	} else {
	cout<<"Invalido no es una ecuacion cuadratica"<<endl;
	}
		return 0;
}