/*
// team_strings HW assignment
// Fully implement the functions below, incorporating asserts as appropriate to test.
// // Name your C++ file: lastName_teamString.cpp
//
//

string initials(string strA)
// receives a string comprising first, middle and last name and returns the initials of each name, capitalized
// TEST: Maria Sera Turing returns  MST

int countAlpha(string strA)
// receives a string comprising a sentence, counts and returns the number of alphabetical 
// characters a -> z  and A -> Z are the alphabetical characters. 

int countWords(string strA)
// receives a string comprising a sentence, counts and returns the number of words in a the sentence.
// words are separated by spaces.

bool isPalindrome(string strA)
// receives a string and returns true if the string is a palindrome
// a one character string will be considered a palindrome
*/

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string initials(string strA); //prototype receives a string comprising first, middle and last name and
int countAlpha(string strA);

int main()
{
    string strA = "mario Martinez Alex";
/*
    assert(initials(name) == "MMA");
    assert(initials("Jose luna jr") == "JLJ");
    assert(initials("Maria Sera Turing") == "MST");
    */
    assert(countAlpha("Cohort") == 6);
    assert(countAlpha("CSIN3") == 4);
    assert(countAlpha("Work Hard") == 8);

    return 0;
}

string initials(string strA)//prototype receives a string comprising first, middle and last name and
{
    string initials;
    string init;
    for(int i = 0; i < strA.length(); i++)
    {
        if(strA[i] != ' ')
        {
            initials = initials + strA[i];
        }
        if(strA[i] == ' ' || i == strA.length()-1)
        {
            initials = initials.substr(0, 1);
            char letter = toupper(initials[0]);
            init = init + letter;
            initials = "";
        }  
    }

    return init;
}

int countAlpha(string strA)
{
    int count = 0;
    for(int i = 0; i < strA.length(); i++)
    {
        if((strA[i] > 64 && strA[i] < 91) || (strA[i] > 96 && strA[i] < 123))
        {
            count++;
        }
    }

    return count;
}
