#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number :" << endl;
    cin >> n;


    // int count = 0;
    // while (n > 0)
    // {

    //     n = n / 10;
    //     count++;
    // }
    // cout << count;

    // int product=1;
    // while (n>0)
    // {
    //     int ld=n%10;
    //     n=n/10;
    //     product=product*ld;
    // }
    // cout<<product;

    // int r=0;
    // while (n>0)
    // {
    //    int ld=n%10;
    //    n=n/10;
    //    r=r*10;
    //    r=r+ld;
    // }
    // cout<<r<<endl;
    
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact*=i;
        cout<<fact<<endl;       
    }
    
    




    return 0;
}