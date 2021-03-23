#include <iostream>
using namespace std;

int main()
{
    string a = "Hello";
    string b = "World";
    string c;
    c = a + b + 'a';
    c = c - "a";
    cout << c << endl;
}
