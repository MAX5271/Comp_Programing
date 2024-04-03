// LINK TO THE QUESTION : https://www.codechef.com/problems/BIS
// CODE : https://www.codechef.com/viewsolution/1054458461

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

void swap(char *a,char *b)
{
    char temp = *a;
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
   ll int n;
   cin>>n;
   string s;
   cin>>s;
   int a[4];
   a[0]=0;
   a[1]=0;
   a[2]=0;
   a[3]=0;
   for(int i=0;i<n;i+=2)
   {
    if(s[i]=='0'&&s[i+1]=='0') a[0]++;
    if(s[i]=='0'&&s[i+1]=='1') a[1]++;
    if(s[i]=='1'&&s[i+1]=='1') a[2]++;
    if(s[i]=='1'&&s[i+1]=='0') a[3]++;
   }
   ll int ans=0;
   ans+=2*(a[0]+a[2]);
   if(a[1]>0) ans+=2;
   if(a[3]>1) ans+=2;
   else if(a[3]>0) ans+=1;
   
   cout<<ans<<endl;
   
   
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
