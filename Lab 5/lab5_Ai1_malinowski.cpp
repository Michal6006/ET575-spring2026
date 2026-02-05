/*
Michal Malinowski
Feb 4, 2026
Lab 5, Leveraging AI as a C++ Coding Assistant
Git Hub Copilot
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
// --- AI Assistant Used: Git Hub Copilot ---
// Q1) Was the code correct? (Yes/No and explain your answer)
// Yes the code was correct, all of the tasks of the exercise were met but, the last part does not specify if the the entered word should be updated or not between the last 2 problems. 
// Q2) Was it readable and properly commented? explain your answer
// Yes is it readable and properly commented but the syntax could have been a little optimized by adding the command 'using namespace std;' at the start would save you the time of adding 'std::' in front of all the lines.
// Q3) Were you able to explain each line of code? explain your answer
// Yes I understand each line of the code it was very well constructed and the ai even went to the lengths to add failsafes in case the entered word would not be able to be altered by the if statements.
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar. 
// No and Yes. Since I am doing this lab a little late I learned about the if statements on the day after this lab was due. If I were to have done this lab when it was assigned I would have been a little unfamilair with the if and else statments in C++ but not completly lost because the if statements do share some charactersitics from phyton which I already took a course on. However, the size command is new to me.
// Q5) Terminal Output: (Paste the output of your program here)
/*  
Type a word: Malinowski
2nd character:  a
word has:       10 characters
Replace word:   Ma-- $ --nowski
Remove end characters:  Malinow
*/