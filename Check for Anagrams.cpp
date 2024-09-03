#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
using namespace std;

int main(){
    string s;
    string t;
    cin>>s;
    cin>>t;

    vector<int>a(26);

    for(char &ch: s){
        a[ch-'a']++;
    }
    for(char &ch: t){
        a[ch-'a']--;
    }

    for(int i = 0 ; i<26;i++){
        if(a[i]!=0){
            cout<<" false";
            break;
        }
    }
    cout<<"true";

}