// template for cp

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define cy cout << "YES" << endl;
#define cn cout << "NO" << endl;
#define MOD 1e9 + 7
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

vector <ll int> seive;

bool prime[1000001];
vector <ll> v1(1000001);
void SieveOfEratosthenes(int n)
{
	memset(prime, true, sizeof(prime));
 
	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p){
				if(v1[i]==0)   v1[i]=p;
				prime[i] = false;
			}
		}
	}
	for (int p = 2; p <= n; p++)
		if (prime[p])
			seive.push_back(p);
}

bool is_Prime(ll int n)
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
    for(int i=1;i<=n;i++)
        p *= i;

    return p;
}

void solve()
{
    ll int n;
    cin>>n;
    vector<ll int> a(n+1);
    for(int i=1;i<=n;i++)
    cin>>a[i];

    string s;
    cin>>s;
    s='9'+s;

    vector<ll int> cycle(n+1,-1);
    int count=0;
    vector<pair<ll int , vector<ll int>>> rem;
    for(int i=1;i<=n;i++)
    {
        count=0;
        int m=i;
        // string s1;
        vector<ll int> s1;
        while(cycle[a[m]]==-1)
        {
            cycle[a[m]]=-2;
            s1.push_back(a[m]);
            if(s[a[m]]=='0') count++;
            // if(m==a[m]) break;
            m=a[m];
        }

        if(s1.size()!=0)
        {
            // s1.push_back(count)
            rem.push_back({count,s1});
        }
    }
    for(int i=0;i<rem.size();i++)
    {
        for(int j=0;j<rem[i].second.size();j++)
        {
            cycle[rem[i].second[j]]=rem[i].first;
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<cycle[i]<<" ";
    }
    cout<<endl;
    // cout<<rem[0].second[0]<<endl;

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
