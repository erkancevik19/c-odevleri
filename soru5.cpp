#include <iostream>
#include <locale.h>

using namespace std;

void terstenyaz(string &veri){
	string geciciveri;
	int dongu = veri.size();
	for(dongu; dongu >= 0;dongu--){
		geciciveri = geciciveri + veri[dongu];
	}
	veri = geciciveri;
}

int main() {
	string veri = "Merhaba dunya";
	terstenyaz(veri);
	cout << "Tersten yazilmis: "<< veri;
    return 0;
}
