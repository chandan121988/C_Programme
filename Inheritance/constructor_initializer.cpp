#include<iostream>
#include<string>
using namespace std;
class Test
{
    int a;
    int b;

public:
   // void putdata(int x, int y) { a = x; b = y; }
    //void getdata() { cout << "value of a and b is:" << a << "\t" << b << endl; }
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
   }
};

int main()
{
    Test t(4, 6);
    Test p (5,7);
    //p.putdata(5, 7);
    //p.getdata();

    return 0;
}
