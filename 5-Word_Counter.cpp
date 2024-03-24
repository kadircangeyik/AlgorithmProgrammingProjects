//Kadir Can Geyik 

#include <iostream>
using namespace std;

int main()
{
	// Calculator with loops - Döngülerle Hesap Makinesi 
    
	int a, b;
	char op;

    cout << "Enter the first number(Ilk Sayiyi Giriniz): ";
	cin >> a;//cin is used to get input from the user - cin, kullanıcıdan giriş almak için kullanılır.
	cout << "Enter the operator(Operatoru Giriniz): ";
	cin >> op;
	cout << "Enter the second number(Ikinci Sayiyi Giriniz): ";
	cin >> b;

	// With switch case - switch case ile
	switch (op)
	{
		case '+':
			cout << "Result(Sonuc): " << a + b << endl;
			break;
		case '-':
			cout << "Result(Sonuc): " << a - b << endl;
			break;
		case '*':
			cout << "Result(Sonuc): " << a * b << endl;
			break;
		case '/':
		    cout << "Result(Sonuc): " << a / b << endl;
			break;
		case '%':
			cout << "Result(Sonuc): " << a % b << endl;
			break;
		default:
			cout << "Invalid operator(Geçersiz Operator)" << endl;
			break;
	}

	//With if else - if else ile
	if (op == '+')
	{
		cout << "Result(Sonuc): " << a + b << endl;
	}
	else if (op == '-')
	{
		cout << "Result(Sonuc): " << a - b << endl;
	}
	else if (op == '*')
	{
		cout << "Result(Sonuc): " << a * b << endl;
	}
	else if (op == '/')
	{
		cout << "Result(Sonuc): " << a / b << endl;
	}
	else if (op == '%')
	{
		cout << "Result(Sonuc): " << a % b << endl;
	}
	else
	{
		cout << "Invalid operator(Geçersiz Operator)" << endl;
	}

	//With while loop - while döngüsü ile

	while (op == '+')
	{
		cout << "Result(Sonuc): " << a + b << endl;
		break;
	}
	while (op == '-')
	{
		cout << "Result(Sonuc): " << a - b << endl;
		break;
	}
	while (op == '*')
	{
		cout << "Result(Sonuc): " << a * b << endl;
		break;
	}
	while (op == '/')
	{
		cout << "Result(Sonuc): " << a / b << endl;
		break;
	}
	while (op == '%')
	{
		cout << "Result(Sonuc): " << a % b << endl;
		break;
	}
	while (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
	{
		cout << "Invalid operator(Geçersiz Operator)" << endl;
		break;
	}
}
