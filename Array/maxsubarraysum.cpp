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

    int sum=0;
    int max_sum=a[0];
    for(int i=0;i<n;i++){
        sum += a[i];
        max_sum = max(max_sum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<max_sum;
    return 0;

}