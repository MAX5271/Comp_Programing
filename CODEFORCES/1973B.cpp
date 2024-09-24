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
    ll int n,o=0;
    cin>>n;
    vector <ll int> a,b,c;
    for(int i=0;i<n;i++)
    { 
        int x;
        cin>>x;
        a.push_back(x);
        o=x|o;
        b.push_back(o);
    }
    // // o=0;
    // // for(int i=n-1;i>=0;i--)
    // // {
    // //     o=a[i]|o;
    // //     c.push_back(o);
    // // }
    int num=b.back();
    // // for(auto element:b) cout<<element<<" ";
    // // cout<<endl;

    // //  for(auto element:c) cout<<element<<" ";
    // // cout<<endl;
    ll int rep;
     for(int i=0;i<n;i++)
    {
        if(b[i]==num) {rep=i; break;}
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