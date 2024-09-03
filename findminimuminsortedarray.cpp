#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    vector<int>a={4,5,6,7,1,2};
    int n = a.size();
    int s=0;
    int e=n-1;

    while(s<e){
        int mid= s+(e-s)/2;
        if(a[mid]>a[e]){
            s=mid+1;
        }
        else{
            e=mid;
        }
    }
    cout<<a[s];
    return 0;
    
}