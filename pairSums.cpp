#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    
    vector<int> nums;
    nums.resize(n);
    for(int i=0;i<n;i++){
        int e;
        cin>>e;
        nums[i]=e;
    }
    
    unordered_map<int,int> map;
    int flag=0;
    for(int i=0;i<n;i++){
        int remain_sum=k-nums[i];
        if(map.count(remain_sum)){
            flag=1;
            break;
        }
        map[nums[i]]=i;
    }
    
    if(flag==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;    
    }
    return 0;
}

