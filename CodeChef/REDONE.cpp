// LINK TO THE QUESTION : https://www.codechef.com/problems/REDONE
// CODE : https://www.codechef.com/viewsolution/1052892437

// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
const long long int MOD = 1e9 + 7;
const long long int N=1e6+10;
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
   
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t;
    cin >> t;
    arr[0]=1;
    for(ll int i=1;i<N;i++)
    {
        arr[i] = ((arr[i-1]%MOD)*(i%MOD))%MOD;
    }
    
    while (t--)
    {
        ll int n;
        cin>>n;
        cout<<arr[n+1]-1<<endl;
    }
}
