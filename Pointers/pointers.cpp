#include <iostream>
using namespace std;

//Pointerlar 64 - bitlik platformda 8 byte yer kaplarken 32 bitlik platformda 4 bytelik yer kaplar
//int,float vs gibi farkli degerler olsada yinede platformda ayni yerler kaplarlar



int main() {
	
	int sayi1=5,sayi2 = 1;
	//Pointer tanimlamak icin basina yildiz koyulur
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

	//Adresteki degerleri pointerla yazdirma
	cout << "ptr1 : " << *ptr1 << endl;
	cout << "ptr2 : " << *ptr2 << endl;

	//Pointerlarin kendi adresi
	cout << "ptr1 adress : " << &ptr1 << endl;
	cout << "ptr2 adress : " << &ptr2 << endl;

	// new operatoru program belleginde degil isletim sistemi belleginde veri tutar ve eger new operaturunu 
	// kullanirsaniz delete komutunuda kullanmak zorundasiniz.


	return 0;


}