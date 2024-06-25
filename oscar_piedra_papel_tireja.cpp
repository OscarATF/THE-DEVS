#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;
int genA,op,opCONFIG,opM,contJUG=0,contCPU=0,contPAR=0;
int n=2;
//TEXTO DE GANADOR
void ganador() {
	if (op==1 && genA==3 || op==2 & genA==1 || op==3 && genA==2) {
		cout<<"\nGANA EL JUGADOR!!!"<<endl;
		contJUG++;
	} else if (op==1 && genA==2 || op==2 & genA==3 || op==3 && genA==1) {
		cout<<"\nGANA LA COMPUTADORA!!!"<<endl;
		contCPU++;
	} else if (op==genA) {
		cout<<"\nEMPATE!!!"<<endl;
	}	
}
//SELECCION DE LA COMPUTADORA
void opCPU() {
	if (op<=3 && op>=0) {
		switch (genA){
			case 1:
				cout<<"CPU escoge Piedra"<<endl;
				break;
			case 2:
				cout<<"CPU escoge Papel"<<endl;
				break;
			case 3:
				cout<<"CPU escoge Tijeras"<<endl;
				break;
		}
	}
}
//SELECCION DEL JUGADOR
void opJUG() {
		switch (op) {
		case 1:
			cout<<"Escogiste piedra"<<endl;
			break;
		case 2:
			cout<<"Escogiste Papel"<<endl;
			break;
		case 3:
			cout<<"Escogiste Tijeras"<<endl;
			break;
		default:
			system("cls");
			cout<<" Ingrese una opcion valida"<<endl;
			contPAR--;
			sleep(1);
	}
}
//JUEGO
void juego() {
		do {
			system("cls");
			cout<<"Juego piedra papel y tijeras\nElija una opcion\n1. Piedra\n2. Papel\n3. Tijeras"<<endl;
			cout<<"PARTIDAS JUGADAS: "<<contPAR<<endl;
			contPAR++;
			cout<<"PARTIDAS GANADAS POR EL JUGADOR: "<<contJUG<<endl;
			cout<<"PARTIDAS GANADAS POR LA COMPUTADORA: "<<contCPU<<endl;
			cin>>op;
			system("cls");
			opJUG();
			opCPU();
			ganador();
			sleep(n);
				if (contJUG==2 && contCPU==2) {
					cout<<"\n\tDESEMPATE!!!"<<endl;
					sleep(2);
					}
			} while (contJUG<3 && contCPU<3);
					system("cls");
					cout<<"PARTIDAS JUGADAS: "<<contPAR<<endl;
					cout<<"PARTIDAS GANADAS POR EL JUGADOR: "<<contJUG<<endl;
					cout<<"PARTIDAS GANADAS POR LA COMPUTADORA: "<<contCPU<<endl;
					cout<<"JUEGO TERMINADO"<<endl;
					sleep(n);
					return;
}
//MENU DE CONFIGURACION
void configuracion() {
		do {
			system("cls");
			system("color 02");
			cout<<"CONFIGURACION\nElija una opcion\n1. Cambiar tiempo de espera por mensaje\n2. Volver al menu"<<endl;	
			cin>>opCONFIG;
			switch (opCONFIG) {
				case 1:
					cout<<"Tiempo de espera actual: "<<n<<endl;
					cout<<"Ingrese el nuevo tiempo de espera:"; cin>>n;
					system("cls");
					cout<<"Tiempo de espera actual: "<<n<<endl;
					break;
				case 2:
					break;	
				default:
					cout<<" Ingrese una opcion valida"<<endl;
				}
			} while (opCONFIG!=2);
}
//MENU PRINCIPAL
void MENU() {
	do {
		system("cls");
		system("color 1d");
		cout<<"PIEDRA PAPEL Y TIJERAS\nElija una opcion\n1. Iniciar juego\n2. Opciones\n3. Salir"<<endl;
		cin>>opM;
		switch (opM) 
		{
			case 1:
				juego();
				break;
			case 2:
				configuracion();
				break;
			case 3:
				break;
			default:
				cout<<" Ingrese una opcion valida"<<endl;
		}
	} while (opM!=3);
}
int main() {
	srand(time(0));
	genA=rand()%3+1;
	MENU();
	return 0;
}