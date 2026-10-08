#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
             for (int k = 4 - i; k >= 0; k--)
            {
                cout << " ";
            }
        for (j = 1; j <= i; j++)
        {
       
            cout << "*";
        }
        cout << endl;
    }
}