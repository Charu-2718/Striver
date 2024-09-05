#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int cs(int n){
    if(n==0 || n==1){
        return 1;
    }
    vector<int>dp(n+1);
    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];

}
int main(){
    int n;
    cin>>n;
    cout<< cs(n);
    return 0;
}