// LINK TO THE QUESTION : https://codeforces.com/contest/1933/problem/C

// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define c1 cout << -1 << endl;
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

void swap(ll int *a,ll int *b)
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
    ll int a,b,l,k,count=0,n=0,pa=0,pb=0;
    cin>>a>>b>>l;
    set<ll int >a1;
    if(l%a&&l%b) cout<<1<<endl;
    else{
        
        
            for(int j=0;pow(a,j)<=l;j++)
            {  
                for(int k=0 ;pow(b,k)<=l;k++)
                {   
                    {n=(pow(a,j)*pow(b,k));
                    
                    if(l%n==0)
                    a1.insert(l/n);
                    }
                }
            }     
        cout<<a1.size()<<endl;
    }
    
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
