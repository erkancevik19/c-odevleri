#include <iostream>
#include <locale.h>
#include <stdlib.h> 
#include <time.h>    


using namespace std;

void sayiuret(int kucukAralik, int buyukAralik, int (&sayiDonecek)[50]){
	srand (time(NULL));
	int random[50];
	for(int i=0;i<50;i++){
		random[i] = rand() % buyukAralik + kucukAralik;
		(sayiDonecek)[i] = random[i];
	}	
	
}
int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int veriler[50];
	
	sayiuret(1,40,veriler);
	
	for(int i=0;i<50;i++){
		cout << veriler[i] <<"\n";	
	}
	

    return 0;
}
