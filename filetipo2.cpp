#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


 void leggi_vettore_dispari(int vettore[30],int vettore2[10]){ //come prendere solo certi valori
 	
 	int counter=0;
 	
 	
 	srand(time(NULL));
	for (int i=0; i<30; i++){		
		vettore[i]=rand()%100+1; //genera numeri da 1 a 99+1 100
	}
	
	while (counter<10){
		
	for (int i=0; i<30; i++){		
		
		if (vettore[i]%2!=0){
			
			vettore2[counter]=vettore[i];
			counter+=1;
		}
	}	
	}
	
}



int main(){
	
	int lista[30];
	int lista2[10];
	leggi_vettore_dispari(lista,lista2);
	for (int i=0; i<10; i++){		
		cout<<lista2[i]<<endl;
	}

	
}
