// LINK TO THE QUESTION : https://www.codechef.com/problems/CHECKADJSUM
//CODE : https://www.codechef.com/viewsolution/1047857961

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
    ll int n,q,s=0,num;
    cin>>n>>q;
    vector<ll int>a,b;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        s+=2*num;
        a.push_back(num);
    }
    sort(a.begin(),a.end());
     for(int i=0;i<q;i++)
    {
        cin>>num;
        b.push_back(num);
    }
    ll int s1=0,s2=0,n1=-1,n2=-1;
    
    for(int i=0;i<q;i++)
    {
      
        
        if(b[i]>s-a[0]-a[1]||b[i]<s-a[n-1]-a[n-2])
        
        cout<<-1<<endl;
        else
        {
            n1=-1;
            n2=-1;
            for(int j=0;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    if(s-a[j]-a[k]==b[i])
                    {
                        n1=j;
                        n2=k;
                    }
                }
            }
            if(n1!=-1)
            {
                cout<<a[n1];
                for(int j=0;j<n;j++)
                {
                    if(j!=n1&&j!=n2)
                    cout<<" "<<a[j];
                }
                cout<<" "<<a[n2]<<endl;
            }
            else cout<<-1<<endl;
        }
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
