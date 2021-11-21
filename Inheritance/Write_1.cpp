#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string st = "Harry bhai_why ?";
    // Opening files using constructor and writing it
    ofstream out("sample60.txt"); // Write operation
    out << st;
    cout << st;
    return 0;
}
