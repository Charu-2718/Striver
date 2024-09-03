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

    int prefix=1;
    int suffix=1;


    int maxi=INT_MIN;

    for(int  i= 0 ; i < n ; i++){
        if(prefix==0)
            prefix=1;

        if(suffix==0)
            suffix=1;

        prefix *= a[i];
        suffix *= a[n-i-1];

        maxi = max(maxi,max(prefix,suffix));
    }
    cout<<maxi;
}