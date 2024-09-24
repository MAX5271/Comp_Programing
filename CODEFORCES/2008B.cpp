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
    int n;
    cin>>n;
    string s;
    cin>>s;
    int num=(int)sqrt(n);
    if((int)(num*num)!=n)
    {
        cout<<"NO"<<endl;
        return;
    }
    // int a[num][num];
    // for(int i=0;i<num;i++)
    // {
    //     for(int j=0;j<num;j++)
    // }
    bool flag=true;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            if(i==0||i==num-1)
            {
                if(s[i*num+j]!='1')
                {
                    flag=false;
                    break;
                }
            }
            else
            {
                if(j==0||j==num-1)
                {
                 if(s[i*num+j]!='1')
                {
                    flag=false;
                    break;
                }   
                }
                else{
                    if(s[i*num+j]!='0')
                {
                    flag=false;
                    break;
                }
                }
            }
        }
        if(!flag) break;
    }
    
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
    
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
