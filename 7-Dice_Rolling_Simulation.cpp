//Kadir Can Geyik 

#include <iostream>

using namespace std;

int main() {

	// Dice Rolling Simulation - Zar Atma Simulasyonu

    // Zarlarin 1 ile 6 arasinda rastgele sayi uretmesi icin rand() fonksiyonu kullanilir.
	// To generate random numbers between 1 and 6 for the dice, the rand() function is used.
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	bool isContinue = true;

	while (isContinue) {

		cout << "Dice 1: " << dice1 << endl;
		cout << "Dice 2: " << dice2 << endl;

		cout << "Do you want to roll the dice again? (Y/N): ";
		char answer;
		cin >> answer;
		if (answer == 'Y' || answer == 'y') {
			dice1 = rand() % 6 + 1;
			dice2 = rand() % 6 + 1;
		}
		else {
			// If the user does not want to roll the dice again, the loop is terminated.
			// Kullanici zar atmayi istemedigi durumda dongu sonlandirilir.
			isContinue = false;
		}
	}
    
	
}
