//Kadir Can Geyik 
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Kelime Sayısını Sayan Fonksiyon
// Function to Count Words in the Text
int countWords(const string& text) {
    stringstream ss(text);
    string word;
    int wordCount = 0;
    while (ss >> word) {
        wordCount++;
    }
    return wordCount;
}

// Harf Sayısını Sayan Fonksiyon
// Function to Count Letters in the Text
int countLetters(const string& text) {
    int letterCount = 0;
    for (char character : text) {
        if (isalpha(character)) {
            letterCount++;
        }
    }
    return letterCount;
}

// Rakam Sayısını Sayan Fonksiyon
// Function to Count Digits in the Text
int countDigits(const string& text) {
    int digitCount = 0;
    for (char character : text) {
        if (isdigit(character)) {
            digitCount++;
        }
    }
    return digitCount;
}

// Cümleyi Tersine Çeviren Fonksiyon
// Function to Reverse the Sentence
string reverseSentence(const string& text) {
    string reversedText = "";
    for (int i = text.size() - 1; i >= 0; i--) {
        reversedText += text[i];
    }
    return reversedText;
}

int main() {
    string inputText;

    cout << "Enter the text(): ";
    getline(cin, inputText);

    int wordCount = countWords(inputText);
    int letterCount = countLetters(inputText);
    int digitCount = countDigits(inputText);
    string reversedSentence = reverseSentence(inputText);

    cout << "Word count(Kelime sayisi): " << wordCount << endl;
    cout << "Letter count(Harf sayisi): " << letterCount << endl;
    cout << "Digit count(Rakam sayisi): " << digitCount << endl;
    cout << "Reversed sentence(Tersine cevrilmis yazi): " << reversedSentence << endl;

    return 0;// Exit - Cikis
}
