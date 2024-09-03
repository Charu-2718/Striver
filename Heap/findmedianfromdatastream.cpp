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
    // priority_queue<int,vector<int>,greater<int>>pq;
    // for(int i : a){
    //     pq.push(i);
    // }
    sort(a.begin(),a.end());
    float median = 0;
    int i = 0;
    if(n%2 == 0){
        
        median = (a[n/2] + a[(n-2)/2])/2.0;
    }else{  
        
        median = a[(n-1)/2];
    }
    cout<<median<<endl;
    
}