//Kadir Can Geyik 
#include <iostream>

using namespace std;

int main() {

    int numbers[5]; // 5 elemanlı bir dizi oluşturuyoruz - Crate an array of 5 elements
    int total = 0;

    // Kullanıcıdan 5 adet sayı girmesini istiyoruz - Ask user to enter 5 numbers
    cout << "5 adet sayi girin:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Sayi " << i + 1 << ": ";
        cin >> numbers[i];
        total += numbers[i]; // Sayıları toplam değişkenine ekliyoruz - Add the numbers to the total variable
    }

    // Kullanıcıdan alınan sayıları ekrana yazdırıyoruz - Print the numbers entered by the user
    cout << "Girilen sayilar:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
    }

    // Toplamı ekrana yazdırıyoruz - Print the total
    cout << "\nGirilen sayilarin toplami: " << numbers << endl;

    // Ortalamayı ekrana yazdırıyoruz - Print the average
    cout << "Girilen sayilarin ortalamasi: " << total / 5 << endl;

    return 0; // Programı sonlandırıyoruz - Terminate the program
}
