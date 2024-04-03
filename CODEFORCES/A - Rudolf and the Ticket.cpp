// LINK TO THE QUESTION : https://codeforces.com/contest/1941/problem/A

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
    ll int n,k,m,num;
    cin>>n>>m>>k;
    vector<ll int> b,c;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        b.pb(num);
    }
    for(int i=0;i<m;i++)
    {
        cin>>num;
        c.pb(num);
    }
    
    ll int count=0;

    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i]+c[j]<=k)
            count++;
        }
    }
    cout<<count<<endl;
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
