#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //palindrome number
    int x = n;
    long long rev = 0;
    while (x!=0 && x>0)
    {
        rev = rev *10 + (n%10);
        n = n/10;
    }
    if ( x == rev)
    {
        cout<<"true";
    }
    else
    {
    cout<<"false";
    }
    return 0;
}