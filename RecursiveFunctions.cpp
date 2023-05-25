#include <iostream>

using namespace std;
//Sum numbers between m - n 
int main()
{
    int m = 2,  n = 4;
    int sum = 0;
    for (int i =m; i<= n; i++)
    {
        sum += i;
    }
    cout << "Sum =" << sum;
    system("pause>0");
}