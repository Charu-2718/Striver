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

    unordered_map<int,int>mp;
    for(int i : a){
        mp[i]++;
    }

    for(auto i :mp){
        if(i.second>1){
            cout<<"TRUE";
            return 0;
        }
    }
    cout<<"FALSE";
    return 0;
}