#include<bits/stdc++.h>
using namespace std;
int main()
{    long long int n;
    cin>>n;
    if(n & 1)
        cout<<"9"<<" "<<n-9;
    else
        cout<<"8"<<" "<<n-8;
}
