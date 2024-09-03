#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i < n ;i++){
        cin>>a[i];
    }
    int k ;
    cin>>k;
    unordered_map<int,int>mp;
    for(int i : a){
        mp[i]++;
    }

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_heap;
    for(auto i : mp){
        min_heap.push({i.second,i.first});
        if(min_heap.size()>k){
            min_heap.pop();

        }
    }

    vector<int>res;

    while(!min_heap.empty()){
        res.push_back(min_heap.top().second);
        min_heap.pop();

    }
    for(int i : res){
        cout<<i<<" ";
    }
    return 0;
    
}