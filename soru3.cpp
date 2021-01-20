#include <iostream>
#include <locale.h>
#include <stdlib.h> 


using namespace std;

void matrisegir(int (&matris)[3][3]){
	cout << "\u001b[31m 3x3 A Matrixin degerlerini giriniz: \u001b[0m\n";
	cout << "\u001b[36m (Ornek kullanim:\u001b[0m \u001b[32m1 2 3 Enter 2 1 1 Enter 1 0 0 \u001b[0m\u001b[36mVeya\u001b[0m \u001b[32mSoldan saga dogru teker teker\u001b[0m \u001b[36mveri girisi saglayiniz)\u001b[0m:\n";
	for(int a = 0; a < 3; a++){
		for(int b = 0; b < 3; b++){
           cin>>matris[a][b];
		}
	}
}
void matristopla(int matrisilk[3][3], int matrisson[3][3], int (&toplam)[3][3]){
	for(int c = 0; c < 3; c++){
		for(int d = 0; d < 3; d++)
		{
			toplam[c][d] = matrisilk[c][d]+matrisson[c][d];
		}	
	}
}


int main() {
	int matrixA[3][3];
	int matrixB[3][3];
	int toplam[3][3];
	matrisegir(matrixA);
	matrisegir(matrixB);
	matristopla(matrixA, matrixB, toplam);
	for(int n = 0; n < 3; n++){
		cout<<"\n";
		for(int m = 0; m < 3; m++) cout<<toplam[n][m]<<"\t";
	}
    return 0;
}
