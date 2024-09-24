// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define MOD 1e9 + 7
#define vec vector<long long int>
#define set set<long long int>
const int N=1e5+10;
long long int arr[N];
#define all(a) a.begin(),a.end() 

ll int npr(ll int n,ll int r)
{
    r=min(r,(n-r));
    ll int a=1;
    for(ll int i=0;i<r;i++){
        a*=(n-i);
    }
    for(ll int i=1;i<r;i++){
        a/=(i+1);
    }
    return a;
}

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
    ll int n,t;
    cin>>n>>t;
    vec a,b;
    for(int i=0;i<2*n-2;i++)
    {
        ll int x;
        cin >>x;
        a.push_back(x);
    }
    cin>>t;
    bool flag= true;

    // for(int i=0;i<2*n-2;i++)
    b.push_back(a[0]);
    for(int i=1;i<2*n-3;i+=2)
    {
        if(a[i]!=a[i+1]) flag= false;
        // cout<<a[i]<<" "<<a[i+1]<<endl;
        b.push_back(a[i]);
    }
    b.push_back(a[2*n-3]);
    // cout<<n<<" "<<t<<endl;
    if(flag)
    {
        
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}