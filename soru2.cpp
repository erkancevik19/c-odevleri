#include <iostream>
#include <locale.h>
#include <stdlib.h> 
#include <time.h>    
#include <vector> 


using namespace std;

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
int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int verigrubu[] = {9999,5,7,2,4}; // ilk [0] degeri fonksiyona veri tasinirken byte kisitlamasi nedeniyle ilk deger verinin sayisi icin ayrildi!
	verigrubu[0] = sizeof(verigrubu) / sizeof(verigrubu[0]) - 1; // ilk degere verilerin kac adet oldugunu tespit edip ilk veride sayimizi sakladigim icin cikartiyoruz

	
	// ARITMETIK ORTALAMA BASLANGIC
	cout << "Aritmetik ortalama (5,7,2,4 degerleri icin): " << artort(verigrubu) << "\n\n";
	// ARITMETIK ORTALAMA BITIS
	
	
	// MAX MIN BASLANGIC
	int max,min;
	minmaks(verigrubu, max, min);
	cout << "Min max (5,7,2,4 degerleri icin) min deger: " << min << " Max deger: " << max << "\n\n";
	// MAX MIN BITIS
	

	// CIFT SAYILAR GERI DONUS BASLANGIC
	int* ciftveri = ciftler(verigrubu);
	// ciftveri[0] kac adet veri tuttugumuz
	cout << "5,7,2,4 degerleri icin cift degerler: \n\n";
	for(int a=1; a<=ciftveri[0];a++){
		cout << ciftveri[a] <<"\n";
	}
	
	// CIFT SAYILAR GERI DONUS BITIS


	// TEK SAYILAR GERI DONUS BASLANGIC

	int* tekveri = tekler(verigrubu);
	// ciftveri[0] kac adet veri tuttugumuz
	cout << "\n5,7,2,4 degerleri icin tek degerler: \n\n" << tekveri[0] <<" \n";
	
	for(int a=1; a<=tekveri[0];a++){
		cout << tekveri[a] <<"\n";
	}

	// TEK SAYILAR GERI DONUS BITIS


    return 0;
}
