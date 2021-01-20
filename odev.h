#include <iostream>
#include <locale.h>
#include <vector>
#include <time.h>  
#include <stdlib.h> 
using namespace std;

void terstenyaz(string &veri){
	string geciciveri;
	int dongu = veri.size();
	for(dongu; dongu >= 0;dongu--){
		geciciveri = geciciveri + veri[dongu];
	}
	veri = geciciveri;
}
void rakamlarisil(string &veri, string &rakamlar){
	string geciciveri;
	for(int a=0; a<veri.size();a++){
		if(!((veri[a] >= 'a' && veri[a] <= 'z') || (veri[a] >= 'A' && veri[a] <= 'Z') || veri[a] == ' ')){
			rakamlar = rakamlar + veri[a];
		}else{
			geciciveri = geciciveri + veri[a];
		}
	}
	veri = geciciveri;
}
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
float artort(int veriler[]){
	// veriler[0] verisinde kac adet veri oldugu saklaniyor!
	int toplam;
	float ortalama;
	for(int i=1;i<=veriler[0];i++){
		toplam = toplam + veriler[i];
	}
	ortalama = (float)toplam/veriler[0];
	return ortalama;
}

void minmaks(int veriler[], int &max, int &min){
	int gecicimax = veriler[1]; // ilk deger
	int gecicimin = veriler[1]; // ilk deger
	// MAX DEGER BULMA SATIRI BASLANGIC
    for(int i=1;i<=veriler[0];i++){
        if(veriler[i]>gecicimax){
        	gecicimax=veriler[i];
		}
    }
    // MAX DEGER BULMA SATIRI BITIS
    //------------------------------
    // MIN DEGER BULMA SATIRI BASLANGIC
    for(int i=1;i<=veriler[0];i++){
        if(veriler[i]<gecicimin){
        	gecicimin=veriler[i];
		}
    }
    // MIN DEGER BULMA SATIRI BITIS

   	max = gecicimax;
   	min = gecicimin;
}

int* ciftler(int veriler[]){
	//veriler[0] veri sayimiz
	vector<int> geciciVeri;
	int kacadet = 0;
	for(int i=1;i<=veriler[0];i++){
        if(veriler[i]%2 == 0){
	        geciciVeri.push_back(veriler[i]);
	        kacadet++;
		}
    }
    geciciVeri.insert(geciciVeri.begin(), kacadet);
    int *vectordenArrayGecisi = geciciVeri.data();
  	return vectordenArrayGecisi;
}

int* tekler(int veriler[]){
	//veriler[0] veri sayimiz
	vector<int> tekilverigecici;
	int kacadet = 0;
	for(int a=1;a<veriler[0];a++){
        if(veriler[a]%2 != 0){
			tekilverigecici.push_back(veriler[a]);
       		kacadet++;
		}
    }
    tekilverigecici.insert(tekilverigecici.begin(), kacadet);
    int *donder = tekilverigecici.data();
  	return donder;
}
void sayiuret(int kucukAralik, int buyukAralik, int (&sayiDonecek)[50]){
	srand (time(NULL));
	int random[50];
	for(int i=0;i<50;i++){
		random[i] = rand() % buyukAralik + kucukAralik;
		(sayiDonecek)[i] = random[i];
	}	
	
}
