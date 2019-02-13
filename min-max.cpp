#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    nums.resize(n);
    
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    
    int minsum=INT_MAX,maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        minsum=min(minsum,sum-nums[i]);
        maxsum=max(maxsum,sum-nums[i]);
    }
    
    cout<<minsum<<" "<<maxsum<<endl;
    
    return 0;
}