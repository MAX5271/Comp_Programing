// LINK TO THE QUESTION : https://www.codechef.com/problems/BGME
// CODE : https://www.codechef.com/viewsolution/1050638473

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
    ll int n,num,na=0,nb=0,count=0,sum=0;
    cin>>n;
    vector<ll int> a;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        if(num>2)
        {
            sum=sum+num-2;
            a.push_back(2);
        }
        else if(num==2) a.push_back(2);
        if(num==1)
        count++;
    }
    
    if(count%2) na++; 
    
    if(sum%2==1&&count%2==0) na+=a.size(); else if(sum%2==1&&count%2==1) nb+=a.size();
    else if(sum%2==0&&count%2==0) nb+=a.size(); else na+=a.size();
    if(na>nb) cout<<"Alice"<<endl;
    else if(na==nb) cout<<"Draw"<<endl;
    else cout<<"Bob"<<endl;
    
    
    
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
