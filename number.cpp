#include <iostream>
using namespace std;

int main()
{
    int n = 1234;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10; 
        n = n / 10;                     //n/=10
        sum = sum + ld;                //sum+=ld
    }
    cout << sum;

    return 0;
}