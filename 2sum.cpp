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
    int target;
    cin>>target;
    unordered_map<int,int>mp;
    for(int i = 0 ; i <n;i++){
        int remaining= target-a[i];

        if(mp.find(remaining)!=mp.end()){
            cout<<"YES"<<endl;
            cout<<mp[remaining]<<' '<<i <<endl;
            return 0;
        }
        mp[a[i]]=i;
    }
    cout<<"NO";
    return 0;
}