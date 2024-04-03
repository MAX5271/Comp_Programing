// LINK TO THE QUESTION : https://codeforces.com/contest/1950/problem/C

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
   string s;
   int a[4],n,b;
   cin>>s;
   a[0]=(int)s[0]-48;
   a[1]=(int)s[1]-48;
   a[2]=(int)s[3]-48;
   a[3]=(int)s[4]-48;

   n=a[0]*10+a[1];
   if(n==0)
   cout<<"12:"<<s[3]<<s[4];

   else if(n<=12)
   {
    cout<<s[0]<<s[1]<<s[2]<<s[3]<<s[4];
   }
   else if(n<22){
    cout<<0<<n-12<<s[2]<<s[3]<<s[4];
   }
   else{
    if(n==22) cout<<"10:"<<s[3]<<s[4];
    else if(n==23) cout<<"11:"<<s[3]<<s[4];
   }
    if(n<12) cout<<" AM"<<endl;
    else cout<<" PM"<<endl;

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
