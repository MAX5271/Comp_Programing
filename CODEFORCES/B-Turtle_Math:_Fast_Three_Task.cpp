// LINK TO THE QUESTION : https://codeforces.com/contest/1933/problem/B

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

ll int s(ll int n)
{
    ll int sum=0;

    while(n)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;

}

void solve()
{
    ll int n,num,x=0,y=0,x1=0,y1=0,sum=0,cx=0,c=0;
    cin>>n;
    vector<ll int> a;

    for(int i=0;i<n;i++)
    {
        cin>>num;
        sum+=num;
        
        if(cx==0)
        {if(num%3==1) {x=num;cx++;}}
        else if(num%3==1) x1=num;

        else if(num%3==2&&c==0) {y=num;c++;}
        else if(num%3==2) y1=num;
    }
    
    if(s(sum)%3==0)
    cout<<0<<endl;
    else if(s(sum)%3!=0&&n==1) cout<<1<<endl;
   else if(s(sum)%3==1)
   {
    if( x!=0 ||y!=0 ) cout<<1<<endl;
    else cout<<2<<endl;
   }
   else{
    cout<<1<<endl;
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
