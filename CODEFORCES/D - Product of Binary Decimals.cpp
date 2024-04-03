// LINK TO THE QUESTION : https://codeforces.com/contest/1950/problem/D

// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define MOD 1e9 + 7
#define vec vector<long long int>
#define set set<long long int>
#define pb(a) push_back(a)

bool isPrime(ll int n)
{
    if (n <= 1)
        return false;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;

    return true;
}



constexpr int int_pow(int b, int e, int res = 1)
{
    return (e == 0) ? res : int_pow(b, e - 1, b * res);
}


void swap(ll int *a,ll int *b)
{
    ll int temp = *a;
    *a = *b;
    *b = temp;
}

ll int factorial(ll int n)
{
    ll int p = 1;
    for(ll int i=1;i<=n;i++)
        p *= i;

    return p;
}

ll int decimalToBinary(int N)
{
    
    ll int B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ll int c = int_pow(10, cnt);
        B_Number += rem * c;
        N /= 2;
        
        cnt++;
    }
    return B_Number;
}


void solve()
{


}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t;
    cin >> t;

    vector<ll int > a;

    for(int i=0;i<32;i++)
    {
        a.push_back(decimalToBinary(i));
    }
    while (t--)
    {
       ll int n,n1;
       cin>>n;
       n1=n;
       bool flag=false;
       for(int i=0;i<32;i++)
       {
        if(n==a[i])
        {
            flag=true;
            break;
        }
       }
       
       do{
        n1=n;
        for(int i=2;i<32;i++)
        {
            if(n%a[i]==0)
           { n/=a[i];
            break;
           }
        }
       }while(n1!=n);

        for(int i=0;i<32;i++)
       {
        if(n==a[i])
        {
            flag=true;
            break;
        }
       }
       
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
