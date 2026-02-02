/*
Michal Malinowski
Feb 2, 2026
Lab 4, String Methods
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ---- Example 1: String Indexing ----"<<endl;
    // each character in a string can be accessed by its index number
    // index starts from 0, most-left character
    string firstname = "Peter";
    cout<<"The 4th character of the first name = "<<firstname[3]<<endl;
    cout<<"The 3rd character of the first name = "<<firstname.at(2)<<endl;

    cout<<"\n ---- Example 2: String Length ----"<<endl;
    //length method returns the amount of characters in a string
    int firstname_length = firstname.length();
    cout<<"First name has "<<firstname_length<<" characters"<<endl;

    cout<<"\n ---- Example 3: Add Or Concatenate Strings ----"<<endl;
    // + operator add or concatenates strings
    string color = "orange";
    string animal = "cat";
    string addstrings = "My "+ animal + " loves " + color + " toys ";
    cout<<addstrings<<endl;
    cout<<color+animal<<endl;

    cout<<"\n ---- Example 4: Subtract Characters From A String ----"<<endl;
    // substr() method subtracts(extracts) characters from a string
    // substr(index from where the subtraction would happen, among from characters to be extracted)
    string city ="Bayside";
    string sub_char = city.substr(3,4); // subtract 4 character from index 3
    cout<<"Subtracted characters = "<<sub_char<<endl;

    cout<<"\n ---- Example 5: Insert Characters Into A String ----"<<endl;
    // insert new characters into a string
    // insert (index from where the new character will be inserted, characters to be inserted)
    // Insert Queens- into Bayside. The result should be = BayQueens-side 
    city.insert(3,"Queens-");
    cout<<"After insert method = "<<city<<endl;

    cout<<"\n ---- Example 6: Add Characters To The End Of A String ----"<<endl;
    // append method adds characters to the end of a string
    string fullname = "Peter Pan";
    // add the word "@neverland" to the end of the full name. The result should be 'Peter pan@neverland
    fullname.append("@neverland");
    cout<<"After append method = "<<fullname<<endl;

    cout<<"\n ---- Example 7: Replace Characters In A String ----"<<endl;
    // replace method replaces characters in a string
    // replace(index where the replacement will happend, amount of characters to be replaced, string of new replaced characters)
    string word = "engineering";
    cout<<"Original Word = "<<word<<endl;
    // replace the word 'ee' with 'FUTURE'.the result will be
    word.replace(5,2,"FUTURE");
    cout<<"After the replace method = "<<word<<endl;

    cout<<"\n ---- Example 8: Erase Characters In A String ----"<<endl;
    // earase(index where the erase will happen, among of characters to be erased)
    word = "layout";
    cout<<"Original word = "<<word<<endl;
    // erase 'you'from word. The result should be 'lat'
    word.erase(2,3); // erase tree chracters from index 2
    cout<<"After erase method = "<<word<<endl;

    cout<<"\n ---- Example 9: Find Charaters In A String ----"<<endl;
    // find method returns the index of the first found character
    word = "characters";
    // find letter 'a' from word
    int index_a = word.find("a");
    cout<<"Index for 'a' = "<<index_a<<endl;
    // find the index for 'act' 
    cout<<"Index for 'act' = "<<word.find("act")<<endl;
    
    cout<<"\n ---- Exercises ----"<<endl;

    cout<<"\nEnter a word = ";
    cin>>word;

    cout<<"2nd Character: "<<word[1]<<endl;
    cout<<"Word has: "<<word.length()<<" characters"<<endl;
    cout<<"Replace word: "<<word.replace(2,2,"-- $ --")<<endl;
    cout<<"Remove end characters: "<<word.erase(word.length() - 3)<<endl;

   return 0;
}