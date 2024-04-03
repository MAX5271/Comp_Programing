// LINK TO THE QUESTION : https://codeforces.com/contest/1941/problem/B

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

void solve()
{
    ll int n,s1=0,s2=0,num;
    cin>>n;
    vector<ll int > a;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        a.push_back(num);
    }
    
    for(int i=0;i<n-2;i++)
    {
        if(a[i]<=0) continue;
        else{
            num=a[i];
            a[i]=0;
            a[i+1]=a[i+1]-2*num;
            a[i+2]-=num;
        }
    }
    bool flag= true;

    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {flag=false;
        break;
        }
    }
    if(flag) cy else cn
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
