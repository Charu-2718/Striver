#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin>>n;
    int ans;

    while(n){
        n = n&(n-1);
        ans++;
    }
    cout<<ans;
}