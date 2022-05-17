#include <iostream>
using namespace std;

//Structerlar birden fazla veri tipini içinde barindirabilir.Diziler ise bir tane veri tipini barindirabilirdi.

struct Ogrenci {  //  ( C dilinde yapilar boyle tanimlanir )
	string Ad;
	int Not;
}; //Yapýlar ; ile sonlanýr



int main() {
	//int x;			//int tipinde x degiskeni
	Ogrenci ogr;   // Ogrenci tipinde ogr nesnesi

	//ogr nesnesine deger atama
	ogr.Ad = "Faruk";	// ogr nesnesinin Ad degiskeni Faruktur seklinde söylenebilir
	ogr.Not = 19;		// C++ ta ogr.Not { 19 }; seklinde de atanabilir

	// 2.nesneyi tanimlama
	Ogrenci ogr2;
	ogr2.Ad = "Samed";
	ogr2.Not = 44;

	
	//nesneleri yazdirma
	cout << ogr.Ad << " adli ogrenci sinavdan " << ogr.Not << " aldi. " << endl;
	cout << ogr2.Ad << " adli ogrenci sinavdan " << ogr2.Not << " aldi. " << endl;


	return 0;
}
