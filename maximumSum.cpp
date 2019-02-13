#include <bits/stdc++.h>
using namespace std;

void findMaximumSum(vector<int> A,int n){
    long long int curr_sum=A[0];
    long long int max_so_far=curr_sum;
    
    long long int count=1;
    for(int i=1;i<n;i++){
        if(curr_sum<0 && A[i]>curr_sum){
            curr_sum=A[i];
        }
        else if(curr_sum+A[i]>=curr_sum){
            curr_sum+=A[i];
            count++;
        }
        max_so_far = max(max_so_far,curr_sum);
    }
    
    cout<<max_so_far<<" "<<count<<endl;
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> A(n,0);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    
    findMaximumSum(A,A.size());
    return 0;
}