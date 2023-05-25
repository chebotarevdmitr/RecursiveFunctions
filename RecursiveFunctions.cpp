#include <iostream>
using namespace std;

int recursive_sum(int m, int n) {//m = 2,n = 4
    if (m == n)
        return n;
    return n + recursive_sum(m + 1, n);
}

//Sum numbers between m - n 
int main()
{
   /*int m = 2, n = 4;
    int sum = 0;
    for (int i =m; i<= n; i++)
    {
        sum += i;
    }
    cout << "Sum =" << sum;
   */

    int m = 1, n = 5;
    cout << "Sum = " << recursive_sum(m, n); 
    system("pause>0");
}