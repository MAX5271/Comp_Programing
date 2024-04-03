// LINK TO THE QUESTION : https://codeforces.com/gym/499847/problem/B
// CODE : https://codeforces.com/gym/499847/submission/242850721

#include<iostream>
using namespace std;
#define ll long long int
int main()
{
 
 ll sum=0,n,c=0;
 cin>>n;
 ll a[n],b[n];
 for(int i=0;i<n;i++)
 {
    cin>>a[i];
    sum+=a[i];
 }
 for(int i=0;i<n;i++)
 {
    if(a[i]==(double)(sum-a[i])/(double)(n-1))
    {
        b[c]=i+1;
        c++;
    }
 }
 cout<<c<<endl;
 for(int i=0;i<c;i++)
 {
  cout<<b[i]<<" ";
 }
 
 return 0;
}
