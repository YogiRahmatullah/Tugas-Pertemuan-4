#include <iostream>
using namespace std;

bool genap(int n);

int main () {
    cout << "Hasil Bilangan Genap Adalah :" <<genap (20);
	return 0;
}

bool genap (int n){
    return (n % 2 == 0);
}