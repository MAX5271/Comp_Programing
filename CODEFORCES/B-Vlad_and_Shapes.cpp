// LINK TO THE QUESTION : https://codeforces.com/contest/1926/problem/B

// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define c0 cout << -1 << endl;
#define MOD 1e9 + 7
#define infinite INT_MAX

#define f(n) for (ll int i = 0; i < n; i++)
#define fn(n) for (ll int i = 1; i <= n; i++)

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

void swap(ll int *a, ll int *b)
{
    ll int temp = *a;
    *a = *b;
    *b = temp;
}

ll int factorial(ll int n)
{
    ll int p = 1;
    fn(n)
        p *= i;

    return p;
}

void solve()
{
    ll int n,c=0;

    cin >> n;
    int co[10];

    char a[10][10];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        int c1=0;
        for (int j = 0; j < n; j++)
        {
            if(a[i][j]=='1')
            c1++;
        }
        co[i]=c1;
        }

        sort(co,co+n);
        for(int i=0;i<n-1;i++)
        {   
            
            if(co[i]!=0&&co[i]!=co[i+1])
            c++;
        }
        
        
        if (c==0)
        cout << "SQUARE" << endl;
    else
        cout << "TRIANGLE" << endl;
        
    }

    


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
