// LINK TO THE QUESTION : https://codeforces.com/contest/1933/problem/A

// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define MOD 1e9 + 7



void solve()
{
    ll int n,num,j=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        j+=abs(num);
    }
    cout<<j<<endl;

    
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
