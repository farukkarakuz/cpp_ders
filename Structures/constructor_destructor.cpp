#include <iostream>
using namespace std;


struct Ogrenci { 
	string Ad;
	int Not;
	void print();
	Ogrenci() {		// Constructor function

		cout << "Olusturuldu" << endl;
	}
	~Ogrenci() {	// Destructor funciton
		
		cout << "Yok edildi" << endl;	
	} 

};


void Ogrenci::print() {
		cout << Ad << " adli ogrenci sinavdan " << Not << " aldi. " << endl;
}

/*

				Ogrenci::Ogrenci() {
						cout << "Olusturuldu" << endl;
				}

				Ogrenci::~Ogrenci() {
						cout << "Yok Edildi" << endl;
				}


				*** Constructor ve Destructorlar structer disinda da bu sekilde tanimlanabilir

*/




int main() {
	
	Ogrenci ogr;   

	ogr.Ad = "Faruk";
	ogr.Not = 19;
	ogr.print();

	Ogrenci ogr2;

	ogr2.Ad = "Yunuscan";
	ogr2.Not = 58;
	ogr2.print();			//Programi calistirdigimizda nesnelerin program bitmeden yok edilmedigini gormus oluyoruz

	


	return 0;

}
