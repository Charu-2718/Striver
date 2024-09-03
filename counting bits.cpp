#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int solve(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n%2==0){
        return solve(n/2);
    }
    else{
        return 1+solve(n/2);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>ans(n+1);
    for(int i = 0 ; i <= n ;i++){
        ans[i]=solve(i);
    }
    for(int i = 0 ; i <= n ;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
    
}