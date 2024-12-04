#include <iostream>
using namespace std;
int fact(int n)
{
    int fct=1;
    for (int  i = 1; i <= n; i++)
    {
        fct=fct*i;
    }
    return fct;
    
}
int main()
{
    int x;
    cin >> x;
    cout << fact(x);

    return 0;
}