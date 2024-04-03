// LINK TO THE QUESTION : https://codeforces.com/contest/1926/problem/A

#include<iostream>
using namespace std;
int main()
{
 
 string s;
 long long int t,ca,cb;

    cin>>t;
    while(t--)
    {
        cb=ca=0;

 cin>>s;
 for(int i=0;i<5;i++)
 {
    if(s[i]=='A')
    ca++;
    else cb++;
 }
 if(ca>cb) cout<<'A'<<endl;
 else cout<<'B'<<endl;
    }
 
 return 0;
}
