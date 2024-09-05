
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s) {
        stack<char>st;
        int n = s.size();
        if(s.size()<2){
            return false;
        }
        for(int i = 0 ; i < n ; i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                st.push(s[i]);
            }
            else {
                if(st.empty()){
                    return false;
                }
                if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') ||(s[i]==']' && st.top()=='[') ){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            
        }

        if(st.empty()){
            return true;
        }
        return false;
    }

int main(){
    string str;

    cin>>str;
    cout<<isValid(str);
}