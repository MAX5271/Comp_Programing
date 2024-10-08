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
    string recipie;
    cin>>recipie;
    ll int nb,ns,nc,pb,ps,pc,r,b=0,s=0,c=0;
    cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;
    for(auto i:recipie){
        if(i=='B') b++;
        else if(i=='S') s++;
        else c++;
    }
    
    ll int start = 0,end = 1e15;
    ll int mid = start + (end-start)/2;
    // ll int count=0;
    while(start<end){
        // count++;
        mid = (end+start+1)/2;
        ll int cost = max((ll)0 , b*mid - nb)*pb + max((ll)0 , s*mid - ns)*ps + max((ll)0, c*mid - nc)*pc;
        if(r>=cost){
            start = mid;
        }
        else{
            end = mid -1;
        }
    }
    cout<<start<<endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t=1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    
}
