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
    int n,a=0,e=0,i=0,o=0,u=0;
    cin>>n;
    string s="aeiou",s1;
    if(n<=5)
    for(int i=0;i<n;i++)
    {
        s1.push_back(s[i%s.length()]);
        
    }
    else{
        for(int i1=1;i1<=n;i1++)
        {
            if(i1%5==1) a++;
            else if(i1%5==2) e++;
            else if(i1%5==3) i++;
            else if(i1%5==4) o++;
            else u++;
        }
        for(int i=0;i<a;i++)
        {
            s1.push_back('a');
        }
        for(int i=0;i<e;i++)
        {
            s1.push_back('e');
        }
        for(int i1=0;i1<i;i1++)
        {
            s1.push_back('i');
        }
        for(int i=0;i<o;i++)
        {
            s1.push_back('o');
        }
        for(int i=0;i<u;i++)
        {
            s1.push_back('u');
        }
    }
    cout<<s1<<endl;

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
