#include <iostream>
#include <string>
using namespace std;
int main()
{
    string mystr;
    string convert;
    cout << "Input a palindrome word: ";
    getline(cin, mystr);
    for (int i = mystr.length() - 1; i >= 0; i--)
    {
        convert += mystr[i];
    }
    if (convert == mystr)
    {
        cout << "That word is a palindrome"
             << "\n";
        cout << "Normal world = " + mystr << "\n";
        cout << "World reverse = " + convert << "\n";
    }
    else
    {
        cout << "That word isn't a palindrome"
             << "\n";
        cout << "Normal world = " + mystr << "\n";
        cout << "World reverse = " + convert << "\n";
    }

    return 0;
}
