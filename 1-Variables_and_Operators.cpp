//Kadir Can Geyik 


#include <iostream>
//Bu bir standart kütüphanedir giriş ve çıkış için.
// This is a standard library for input and output.
using namespace std;


// Ana fonksiyon
// Main function
int main()
{
    // C++ dilinde değişkenler tanımlanırken veri tipi belirtilir ve ardından değişkenin adı yazılır.
    // Variables
    int number1 = 59; // Integer variable
    float number2 = 157.5; // Float variable
    double number3 = 3.456; // Double variable
    char letter = 'K'; // Character variable
    string word = "Kadir"; // String variable
    bool isTrue = true; // Boolean variable
    
    // Cout fonksiyonu değişkenleri yazdırmak için kullanılır. Endl komutu ise alt satıra geçmek için kullanılır.
    // Cout function is used to print the variables
    cout<< "Integer: " << number1 << endl;
    cout<< "Float: " << number2 << endl;
    cout<< "Double: " << number3 << endl;
    cout<< "Character: " << letter << endl;
    cout<< "String: " << word << endl;
    cout<< "Boolean: " << isTrue << endl;

    // Aritmetik Operatörler
    // Arithmetic Operators
    int a = 10;
    int b = 5;
    cout << "Addition(Ekleme): " << a + b << endl;
    cout << "Subtraction(Çıkarma): " << a - b << endl;
    cout << "Multiplication(Çarpma): " << a * b << endl;
    cout << "Division(Bölme): " << a / b << endl;
    cout << "Modulus(Mod Alma): " << a % b << endl;

    // Artırma ve Azaltma Operatörleri
    // Increment and Decrement Operators
    int c = 5;
    cout << "Increment(Bir Arttırma): " << c++ << endl;
    cout << "Decrement(Bir Azaltma): " << c-- << endl;
    // Ama bu şekilde bir arttırma işlemi yapılırsa önce arttırır.
    // But if an increment operation is done like this, it first increments.
    cout << "Increment(Bir Arttırma ! ): " << ++c << endl; 
    // Ama bu şekilde bir azaltma işlemi yapılırsa önce azaltır.
    // But if a decrement operation is done like this, it first decrements.
    cout << "Decrement(Bir Azaltma ! ): " << --c << endl;


    // İlişkisel Operatörler
    // Comparison Operators
    int d = 10;
    int e = 5;
    cout << "Equal(Eşittir): " << (d == e) << endl;
    cout << "Not Equal(Eşit Değildir): " << (d != e) << endl;
    cout << "Greater Than(Büyükse): " << (d > e) << endl;
    cout << "Less Than(Küçükse): " << (d < e) << endl;
    cout << "Greater Than or Equal(Büyük veya eşitse): " << (d >= e) << endl;
    cout << "Less Than or Equal(Küçük veya eşitse): " << (d <= e) << endl;

    // Mantıksal Operatörler
    // Logical Operators
    bool f = true;
    bool g = false;
    // f ve g doğruysa true döner.
    // f and g are true, it returns true.
    cout << "AND(VE): " << (f && g) << endl;
    // f veya g doğruysa true döner.
    // f or g are true, it returns true.
    cout << "OR(VEYA): " << (f || g) << endl;
    // f doğruysa yanlış döner.
    // f is true, it returns false.
    cout << "NOT: " << (!f) << endl;
    
    // Atama Operatörleri
    // Assignment Operators
    int h = 10;
    int i = 5;

    // Burada h değişkenine i değişkenini ekleyip h değişkenine atar.
    // Here it adds the i variable to the h variable and assigns it to the h variable.
    h += i;
    cout << "Addition Assignment(Ekleyip Atama): " << h << endl;
    // Burada h değişkeninden i değişkenini çıkarıp h değişkenine atar.
    // Here it subtracts the i variable from the h variable and assigns it to the h variable.
    h -= i;
    cout << "Subtraction Assignment(Çıkarıp Atama): " << h << endl;
    // Burada h değişkeni ile i değişkenini çarparak h değişkenine atar.
    // Here it multiplies the h variable by the i variable and assigns it to the h variable.
    h *= i;
    cout << "Multiplication Assignment(Çarpıp Atama): " << h << endl;
    // Burada h değişkenini i değişkenine böler ve h değişkenine atar.
    // Here it divides the h variable by the i variable and assigns it to the h variable.
    h /= i;
    cout << "Division Assignment(Bölüp Atama): " << h << endl;
    // Burada h değişkenini i değişkenine böler ve kalanı h değişkenine atar.
    // Here it divides the h variable by the i variable and assigns the remainder to the h variable.
    h %= i;
    cout << "Modulus Assignment(Mod Alıp Atama): " << h << endl;      
}
