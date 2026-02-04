/*
Michal Malinowski
Feb 4, 2026
Lab 5, Leveraging AI as a C++ Coding Assistant
Chat GPT
*/

// code
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    // Ask user for a word
    cout << "Enter a word: ";
    cin >> word;

    // Print the 2nd character
    if (word.length() >= 2) {
        cout << "2nd character: " << word[1] << endl;
    } else {
        cout << "2nd character: N/A" << endl;
    }

    // Print the length of the word
    cout << "word has: " << word.length() << " characters" << endl;

    // Replace 2 characters starting from the 3rd character with "--$--"
    if (word.length() >= 3) {
        string replacedWord = word;
        replacedWord.replace(2, 2, "--$--");
        cout << "Replace word: " << replacedWord << endl;
    } else {
        cout << "Replace word: N/A" << endl;
    }

    // Remove 3 characters from the end of the word
    if (word.length() > 3) {
        string shortenedWord = word;
        shortenedWord.erase(shortenedWord.length() - 3);
        cout << "Remove end characters: " << shortenedWord << endl;
    } else {
        cout << "Remove end characters: N/A" << endl;
    }

    return 0;
}
