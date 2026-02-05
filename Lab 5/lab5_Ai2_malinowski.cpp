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
// --- AI Assistant Used: ChatGPT ---
// Q1) Was the code correct? (Yes/No and explain your answer)
// Yes the code was correct, all of the tasks of the exercise were met but,  same as the last example  it does not specify if the the entered word should be updated or not between the last 2 problems. 
// Q2) Was it readable and properly commented? explain your answer
// ChatGPT's output was easier to read than the Git Hub Copilot one due to the optimized syntax, ChatGPT also gave more thorough comments for each step.
// Q3) Were you able to explain each line of code? explain your answer
// Yes every line was brief and commented well making it easy to read, Also, every printed line gave enough information to know what was going on if you skipped to that part of the code. In addition, I am familiar with all of the commands used.
// Q4) Did it use the same programming concepts we learned in class? Explain which concepts were used and which ones were unfamiliar.
// Same as the previous example No and Yes. Since I am doing this lab a little late I learned about the if statements on the day after this lab was due. If I were to have done this lab when it was assigned I would have been a little unfamilair with the if and else statments in C++ but not completly lost because the if statements do share some charactersitics from phyton which I already took a course on. However, none of the commands in this code were completly new to me. 
// Q5) Terminal Output: (Paste the output of your program here)
/*
Enter a word: Malinowski
2nd character: a
word has: 10 characters
Replace word: Ma--$--nowski
Remove end characters: Malinow
*/