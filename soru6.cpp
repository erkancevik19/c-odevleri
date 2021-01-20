#include <iostream>
#include <locale.h>
#include "odev.h"

using namespace std;

int main() {
	
	setlocale(LC_ALL, "Turkish");
	
	int veriler[50];
	
	sayiuret(1,40,veriler); // header fileden fonksiyon cekilmis hali
	
	for(int i=0;i<50;i++){
		cout << veriler[i] <<"\n";	
	}
	

    return 0;
}
