#include<bits/stdc++.h>
using namespace std;

int main(){
    bool sq[2001]={false};
    for(int i=1;i<sqrt(2001);i++)
    {
        if(i*i<=2001)
            sq[i*i]=true;
        if(i*i*i<=2001)
            sq[i*i*i]=true;
    }
 
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        vector<long long int> v;
        unordered_map<long long int,long long int > ump;
        for(int i=0;i<n;i++)
        {
            long long int a;
            cin>>a;
            ump[a]++;
        }
        for(auto i:ump)
            v.push_back(i.first);
        n=v.size();
        long long int c=0;
        for(int i=0;i<n;i++)
        {
            long long int f=ump[v[i]];
            if(f>1 && sq[2*v[i]])
                c+=(f*(f-1))/2;
            for (long long int j=i+1; j<n; j++)
            {
                if (sq[v[i]+v[j]])
                    c+=(f*ump[v[j]]);
            }
        }
        cout<<c<<endl;
    }
 
    return 0;
}