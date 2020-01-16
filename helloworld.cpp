#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main (void)
{
    vector<string> msg { "Hello", "C++", "World" };

    for ( const string& word : msg)
    {
        cout << word << " ";
    }
    cout << 123 ;
    return 0;
}