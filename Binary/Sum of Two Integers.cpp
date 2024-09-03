#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int carry=b;
    int sum=a;
    while(carry!=0){
        sum = a^b;

        carry =(a&b)<<1;

        a = sum ;
        b = carry;
    }
    cout<<sum;
}