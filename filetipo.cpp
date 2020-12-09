#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


 void leggi_vettore(int vettore[10]){
 	
 	srand(time(NULL));
	for (int i=0; i<10; i++){		
		vettore[i]=rand()%100+1; //genera numeri da 1 a 99+1 100
	}
	for (int i=0; i<10; i++){		
		cout<<vettore[i]<<endl;
	}

}

int media(int vettore[10]){
	
	int somma=0;
	int media;
	
	for (int i=0;i<10;i++){
		somma+=vettore[i];
	}
	
	media=somma/10; //ricordati che 10 va variato per la lugnezza
	
	return media;	
}



int main(){
	
	int medium;
	int lista[10]; //ricordati lunghezza vettore
	int lista2[10];
	
	leggi_vettore(lista);
	
	medium=media(lista);
	
	cout<<"\n";
	cout<<medium;
	cout<<"\n";
	
	for (int i=0;i<10;i++){	
		if (lista[i]<medium){
			
			lista2[i]=lista[i];	
		}	
		else{	
			lista2[i]=NULL;
		}	
	}
	for (int i=0;i<10;i++){	
		cout<<lista2[i]<<endl;
	
	}
	
	

	
}



