#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
using namespace std;

int main(){
    string str;

    cin>>str;
    int n=str.size();
    int i=0;
    int j=n-1;
    while(i<=j){
        if(str[i]!=str[j]){
            cout<<"NO";
            break;
        }
        else{
            i++;
            j--;
        }
    }
    cout<<"YES";
}