// LINK TO THE QUESTION : https://codeforces.com/contest/339/problem/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,num;
    
        cin>>n>>m;
        vector<int> a;
        for(int i=0;i<m;i++)
        {
            cin>>num;
            a.push_back(num);
        }
        long long int count=0,house=1;
        
        for(int i=0;i<m;i++)
        {
            if(a[i]==house)
            {
                continue;
            }
            else if(a[i]!=house)
            {
                if(a[i]<house)
                count+=n-house+a[i];
                else count+=a[i]-house;
                house = a[i];
            }
        }
        cout<<count<<endl;
    
    
}
