// LINK TO THE QUESTION : https://codeforces.com/contest/1931/problem/C

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
    vector<int> a,arr;
    ll int n, num,f=1,b=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        a.push_back(num);
    }
      
      for(int i=0;i<n-1;i++)
      {
        if(a[i]==a[i+1])
        f++;
        else break;
      }
    reverse(a.begin(),a.end());
    
          
      for(int i=0;i<n-1;i++)
      {
        if(a[i]==a[i+1])
        b++;
        else break;
      }
      if(a[0]==a[n-1]&&f==n)
      cout <<0<< endl;
      else if(a[0]==a[n-1])
      { 
        cout<<n-f-b<<endl;
      }
      else{
          cout << n-max(f,b) << endl;
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
