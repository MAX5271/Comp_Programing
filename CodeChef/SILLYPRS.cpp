// LINK TO THE QUESTION : https://www.codechef.com/problems/SILLYPRS
// CODE : https://www.codechef.com/viewsolution/1052966714

// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define MOD 1e9 + 7
const int N=1e5+10;
long long int arr[N];


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
    ll int n,sum=0,cao=0,cae=0,cbo=0,cbe=0;
    
    
    cin>>n;
    vector<ll int> a,b;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
        if(x%2) cao++;
        else cae++;
        a.push_back(x);
    }
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        b.push_back(x);
        sum+=x;
        
        if(x%2) cbo++;
        else cbe++;
    }
    
    sum-=abs(cbo-cao);
    cout<<sum/2<<endl;
    
    
    
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