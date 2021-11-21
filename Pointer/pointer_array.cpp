#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i, num, *ptr;
    ptr = arr;
    cout << "enter the elements to be searched" << endl;
    cin >> num;
    for (i = 0; i < 10; i++)
    {
        if (*ptr == num)
        {
            cout << num;
            cout << "ispresent in the array";
            break;
        }
        else if (i == 9)
        {
            cout << num << "is not present in the array";
        }

        else
            ptr++;
    }
    return 0;
}