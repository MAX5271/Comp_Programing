// LINK TO THE QUESTION : https://codeforces.com/gym/499847/problem/A
// CODE : https://codeforces.com/gym/499847/submission/242847659

#include<iostream>
using namespace std;
#define ll long long int
int main()
{
 
 ll t,a,b,c,d;
 cin>>t;
 while(t--)
 {
    ll c1=0;
    cin>>a>>b>>c>>d;
     if(b>a) c1++;
     if(c>a) c1++;
     if(d>a) c1++;
    
    cout<<c1<<endl;
 }
 
 return 0;
}
