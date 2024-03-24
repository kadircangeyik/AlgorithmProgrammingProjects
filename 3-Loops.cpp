//Kadir Can Geyik 

#include <iostream>
using namespace std;

int main()
{
	/*
	 ------------------------------------------
     Loops and Conditions - Döngüler ve Koşullar
	 -----------------------------------------
	*/


    //if else
    int a = 10, b = 20;

    
    //if (a) is greater than (b) - (a), (b)'den büyükse 
    if (a > b)
    {
		cout << "a is greater than b / a, b'den büyüktür" << endl;
	}
    //if (a) and b are equal - (a) ve (b) eşitse
    else if (a == b)
    {
        cout << "a and b are equal / a ve b eşittir" << endl;
    }
    //if (b) is greater than (a) - (b), (a)'dan büyükse
    else
    {
		cout << "b is greater than a / b, a'dan büyüktür" << endl;
	}
	
	//Switch Case
	int number = 3;

	// switch(The variable written here runs the case that belongs to it.) - switch(Buraya yazılan değişken hangi case'e ait ise o case'i çalıştırır.)
    switch (number)
    {
	case 1:
		cout << "1.Case" << endl;
		break; //If the case is executed, the switch is terminated. - Case çalıştırıldığında switch sonlandırmak için kullanılır.
	case 2:
		cout << "2.Case" << endl;
		break;
	case 3:
		cout << "3.Case" << endl;
		break;
	case 4:
		cout << "4.Case" << endl;
		break;
		//If the variable does not match any case, the default case is executed. - Eğer değişken hiçbir case ile uyuşmazsa default case çalıştırılır.
	default:
		cout << "Default Case(Varsayılan Case)" << endl;
		break;
	}

	//for
	int forNumber = 0;

	//for (Initialization; Condition; Increment) - for (Başlangıç; Koşul; Artış)
	for (int i = 1; i < 3; i++)
	{
		//forNumber = forNumber + 1;
		forNumber++;
		cout << "i: " << i <<"-Number(Sayi): "<<forNumber<< endl;
	}


	//while loop
	int j = 0;

    //while (Condition) - while (Koşul)
	//j < 5 is the condition - j < 5 koşulu
	while (j < 5)
	{
		cout << "j: " << j << endl;
		//j = j + 1;
		// if j is less than 5, j is incremented by 1 - eğer j 5'ten küçükse j 1 arttırılır
		j++;
	}

	//do while loop
	//do while loop is executed do first, then while is checked. - do while döngüsü önce do çalıştırılır, sonra while kontrol edilir.
	int k = 0;
	do
	{
		cout << "k: " << k << endl;
		k++;
	} while (k < 5); //k < 5 is the condition - k < 5 koşulu

	return 0; //End of the program - Programın sonu
    
}
