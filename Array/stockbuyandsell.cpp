#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i < n ;i++){
        cin>>a[i];
    }

    int mini=a[0];

    int profit=0;


    for(int i= 0 ; i < n ; i++){
        int may_profit=a[i]-mini;
        profit=max(profit,may_profit);
        mini=min(mini,a[i]);
    }
    cout<< profit;
    return 0;
}