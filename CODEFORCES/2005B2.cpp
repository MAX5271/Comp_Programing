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

void swap1(ll int *a,ll int *b)
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

int findFloor(vector<long long> &v, long long n, long long x) {

        long long min=-1;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid= l+(r-l)/2;
            if(v[mid]>x) r=mid-1;
            else
            {
                min=mid;
                // return min;
                l=mid+1;
            }
        }
        return min;
    }

void solve()
{
    ll int n,m,q1;
    cin>>n>>m>>q1;
    ll int b1,b2,q;
    // cin>>b1>>b2;
    // cin>>q
    // if(b1>b2) swap1(&b1,&b2);
    vector<ll int> a(m),quaries(q1);
    for(int i=0;i<m;i++)
    cin>>a[i];
    for(int i=0;i<q1;i++)
    cin>>quaries[i];
    sort(a.begin(),a.end());


    if(m==1){

    ll int moves=0;
    for(int i=0;i<q1;i++)
    {
        if(quaries[i]<a[0])
        moves = quaries[i] - 1 + (a[0]-quaries[i]);
        else{
            moves = n - quaries[i] + (quaries[i]-a[0]);
        }
        cout<<moves<<endl;
    }
    }

    else{

        

        ll int moves=0;
    for(int i=0;i<q1;i++)
    {
        q=quaries[i];
         if(quaries[i]<a[0])
        moves = quaries[i] - 1 + (a[0]-quaries[i]);
        else if(quaries[i]>a.back()){
            moves = n - quaries[i] + (quaries[i]-a.back());
        }
        else{
            ll int index = findFloor(a,m,q);
            b1=a[index];
            b2=a[index+1];
            
        
        ll int mid = b1+(b2-b1)/2;
        moves = min(abs(mid-b1),abs(mid-b2));
    
        }
        cout<<moves<<endl;
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
