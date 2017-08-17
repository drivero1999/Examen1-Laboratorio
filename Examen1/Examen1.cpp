#include <iostream>
#include<stdlib.h>

using namespace std;

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
	printf("%i%i",p1,p2);
}

int main(){
	int n;
	cout<<"INGRESAR EL TAMAÑO DEL ARREGLO"<<endl;
	cin>>n;
	puntosCercanos(n);
}
