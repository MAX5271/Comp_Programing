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
ll anss(long long n)
{
    long long ans = 0;
    for (long long i = 2; i * i * i <= n;++i)
        ans += n / (1ll*i * i * i);
    return ans;
}
void solve()
{
    ll int m;
    cin>>m;
    
       ll int start = 0, end = 1e16;
       while(start<end){
        ll int mid = (start+end)/2;
        ll int count = 0;
        count = anss(mid);
        // cout<<mid<<endl;
            if(count<m){
                start = mid+1;
            }
            else 
                end = mid;
       }
    //    cout<<anss(start)<<endl;
    
        if(anss(start)==m) cout<<start<<endl;
        else
       cout<<-1<<endl;
    

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t=1;
    // cin >> t;
    // cout<<cbrt(1e1)<<endl;
    while (t--)
    {
        solve();
    }
    
}
