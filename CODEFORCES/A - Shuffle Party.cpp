// LINK TO THE QUESTION : https://codeforces.com/contest/1937/problem/A

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
const long long int N=32;
long long int arr[N];

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
    
    
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t;
    cin >> t;
    for(long long int i=0;i<N;i++)
    {
        arr[i]=int_pow(2,i);
    }
    while (t--)
    {
        ll int n,index;
        cin>>n;
        for(int i=0;i<32;i++)
        {
         if(n<arr[i])
         {
             index=i;
             break;
         }
        }
        
             cout<<arr[index-1]<<endl;
        
    }
   
}
