//Dizileri Pointer olarak kullanarak islem yapma

#include <iostream>
using namespace std;

int main() {
	double fl[4] = { 3.14 , 1.25 , 6.28 , 5.25 };

	for (int i = 0; i < 4; i++)
	{
		cout << (fl + i) << "\t" << *(fl + i) << endl;
	}

	return 0;
}