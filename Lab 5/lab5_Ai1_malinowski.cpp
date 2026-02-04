/*
Michal Malinowski
Feb 4, 2026
Lab 5, Leveraging AI as a C++ Coding Assistant
Git Hub Copiolot
*/

// code
#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cout << "Type a word: ";
    if (!(std::cin >> word)) return 0;

    // 2nd character (index 1)
    if (word.size() >= 2)
        std::cout << "2nd character:\t" << word[1] << "\n";
    else
        std::cout << "2nd character:\t(does not exist)\n";

    // length
    std::cout << "word has:\t" << word.size() << " characters\n";

    // replace 2 characters starting from the 3rd character (index 2)
    std::string replaced = word;
    if (replaced.size() >= 3) {
        replaced.replace(2, 2, "-- $ --");
        std::cout << "Replace word:\t" << replaced << "\n";
    } else {
        std::cout << "Replace word:\t(too short to replace)\n";
    }

    // remove 3 characters from the end
    if (word.size() >= 3) {
        std::string removed = word.substr(0, word.size() - 3);
        std::cout << "Remove end characters:\t" << removed << "\n";
    } else {
        std::cout << "Remove end characters:\t(too short to remove)\n";
    }

    return 0;
}