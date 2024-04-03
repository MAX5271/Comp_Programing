// LINK TO THE QUESTION : https://codeforces.com/contest/1926/problem/C

// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int N=2*1e5+10;
long long int sum[N];


ll int summ(int n)
{
    ll int a,s=0;
     while (n != 0) {
        // Extract the last digit
        a = n % 10;

        // Add the digit to the sum
        s += a;

        // Remove the last digit from the number
        n /= 10;
    }
    return s;
}



int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t,num;
    cin >> t;

    for(int i=1;i<=2*1e5;i++)
    {
       
        sum[i]=sum[i-1]+summ(i);  
    }

    while (t--)
    {
        cin>>num;
        cout<<sum[num]<<endl;
    }
}
