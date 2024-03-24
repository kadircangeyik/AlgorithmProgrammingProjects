//Kadir Can Geyik 

#include <iostream>

using namespace std;

int main() {

	// Factorial Calculation - Faktoriyel Hesaplama

	int number;
	int result = 1;
	cout << "Enter a number for factorial calculation(Bir sayi giriniz): "<<endl;
	cin >> number;

	for (int i = 1; i <= number; i++) {
		result *= i;
	}
	cout<< "Result(Sonuc): " << result << endl;
}
