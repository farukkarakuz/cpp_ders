#include <iostream>
using namespace std;

struct Ogrenci{
	string Ad;
	int Not;
	void print();   // print fonksiyonu structure icinde de tanimlanabilir ayni asagidaki ornek gibi

	/* void print(){
	
		cout << Ad << " adli ogrenci sinavdan " << Not << " aldi. " << endl;

	}
	*/

};

// Bu durumda print fonksiyonuna member function(üye fonksiyonu) denir.
void Ogrenci::print() {		//Structure icindeki fonksiyonu disarda tanimlarken double clone ( :: ) kullanilir.
		
		cout << Ad << " adli ogrenci sinavdan " << Not << " aldi. " << endl;
	
}


int main() {
	
	Ogrenci ogr;

	ogr.Ad = "Faruk";
	ogr.Not = 45;
	ogr.print();



	

	return 0;
}
