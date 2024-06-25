#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <unistd.h>
using namespace std;
//funcion principal
int main() {
	SetConsoleOutputCP(CP_UTF8);
    string pc[] = {"PIEDRA", " PAPEL", "TIJERA"};
	int selecciona, numero,cont_1=0,cont_2=0;
	string Titulo = "|-------------------JUEGO PIEDRA,PAPEL O TIJERA -------------------|";
	for (char c : Titulo) {
        cout << c;
        usleep(10000);
    }
    sleep(1);

do{
	srand(time(0));
	
    cout<<("\n         Selecciona una opcion: |1. Piedra | 2. Papel  | 3. Tijera |\n");
    cin >> selecciona;
    string cerebroPC="|..................Pc Analizando las posibilidades.................|\n";
    for (char a : cerebroPC) {
        cout << a;
        usleep(10000);
    }
    sleep(1);
    	numero = (rand()%3)+1;
    if (numero==1){
    	cout<<"|......................El CPU HA ESCOGIDO "<<pc[0]<<"...................|\n"<<endl;
	}else if(numero ==2){
		cout<<"|......................El CPU HA ESCOGIDO "<<pc[1]<<"...................|\n"<<endl;
	}else if(numero ==3){
		cout<<"|......................El CPU HA ESCOGIDO "<<pc[2]<<"...................|\n"<<endl;
	}
    sleep(1);
	//numero es la PC
	if(selecciona==2 && numero==1) {
		cout << "|=============================== GANASTE ==========================|\n";
		cont_1++;
    }else if(selecciona==3 && numero==2){
		cout << "|=============================== GANASTE ==========================|\n";
		cont_1++;
    }else if(selecciona==1 && numero==3){
		cout << "|=============================== GANASTE ==========================|\n";
		cont_1++;
	}else if(selecciona==numero){
		cout << "|=============================== EMPATE ===========================|\n";
	} else {
    	cout << "|=============================== PERDISTE =========================|\n";
    	cont_2++;
	}
	cout<<endl<<"|----------------------------------"<<cont_1<<"-"<<cont_2<<"-----------------------------|";
	if (cont_1 == 2|| cont_2== 2){
		sleep(1);
		system("cls");
		cout<<"\n __________________________________________________________________ ";
		cout<<"\n|                               ¡¡DEFINICIÓN!!                     |";
		cout<<"\n|__________________________________________________________________|"<<endl;
		sleep(1);
	}
}while(cont_1 <3 && cont_2<3);
if(cont_1==3){
    cout<<"\n _________________________________________________________________ ";
    cout<<"\n|                           GANADOR!!!! JUGADOR                   |";
    cout<<"\n|_________________________________________________________________|"<<endl;
}else{
    cout<<"\n __________________________________________________________________ ";
    cout<<"\n|                              GANADOR!!!! CPU                     |";
    cout<<"\n|__________________________________________________________________|"<<endl;
}
    getch();
	return 0;
}