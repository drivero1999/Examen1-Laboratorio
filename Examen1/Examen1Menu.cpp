#include <iostream>
#include<stdlib.h>

using namespace std;
using namespace std;
void punto1();
void punto2();

int main(){
    int opcion;
    while (true){
        cout<<"SELECCIONE UNA OPCION"<<endl;
        cout<<"1 NUMERO PRIMO"<<endl;
        cout<<"2 PUNTOS CERCANOS"<<endl;
        cout<<"0 Salir Programa"<<endl;
        cin>>opcion;
        switch(opcion){
        	case 0: exit(0); break;
            case 1: punto1();break;
            case 2:punto2();break;
            default: cout<<"LA OPCION NO EXISTE"<<endl; break; 

        }
	}
}

int esPrimo(int n){
if(n<=1){
return 0;
}
int i=n-1;
while(i>1 && n%i>0){
i=i-1;
}
if(i>1){
cout << "EL NUMERO NO ES PRIMO"<<endl;
return 0;
}
else{
cout << "EL NUMERO ES PRIMO"<<endl;
return 1;
}
}


int puntosCercanos(int n){
	int a[n]={2,5,7,4};
	int b[n]={6,9,9,5};
	int minDistancia = 9999;
	int p1= -1;
	int p2= -1;
	int i=0;
	int j=0;
	for (i=0; i<n;i++) {
		for(j=0; j<n; j++){
			int p=a[i];
			int q=b[j];
			if (abs(p-q)< minDistancia){
				minDistancia=abs(p-q);
				p1=p;
				p2=q;
			}	
		}
	}
	printf("%i,%i",p1,p2);
}




void punto1(){
int n;
cout << "INGRESAR VALOR PARA VERIFICAR"<<endl;
cin >> n;
esPrimo(n);
}

void punto2(){
	int n;
	cout<<"INGRESAR EL TAMAÑO DEL ARREGLO"<<endl;
	cin>>n;
	puntosCercanos(n);
}











