#include <iostream>
#include <locale.h>

using namespace std;

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

int main() {
	string veri = "Merha455ba du41ny2a";
	string rakamlar;
	rakamlarisil(veri,rakamlar);
	cout << "Rakamlar: "<<rakamlar << "\n";
	cout << "Temizlenmis veri: "<< veri;
    return 0;
}
