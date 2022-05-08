#include <iostream>
using namespace std;

int main() {
	
	int sayi1=5,sayi2 = 1;
	//Pointer tanimlamak için basina yildiz koyulur
	int *ptr1, *ptr2;
	cout << "sayi1 : " << sayi1 << endl ;
	cout << "sayi2 : " << sayi2 << endl;

	//Adress
	cout << "sayi1 adress : " << &sayi1 << endl;
	cout << "sayi2 adress : " << &sayi2 << endl;

	//Pointerlara degiskenin adresini tanimlama
	ptr1 = &sayi1;
	ptr2 = &sayi2;

	cout << "ptr1 : " << ptr1 << endl;
	cout << "ptr2 : " << ptr2 << endl;

	//Adresteki degerleri pointera tanimlama
	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr2 : " << *ptr2 << endl;

	//Pointerlarin kendi adresi
	cout << "ptr1 adress : " << &ptr1 << endl;
	cout << "ptr2 adress : " << &ptr2 << endl;


	


	return 0;


}