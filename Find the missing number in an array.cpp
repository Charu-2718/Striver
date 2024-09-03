// Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. 
// Find the number(between 1 to N), that is not present in the given array.

#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    cout<<"Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N"<<endl;
    int n=5;
    vector<int>arr={1,2,4,5};
    
    int actual_sum = n*(n+1)/2;
    int sum=0;
    for(int i : arr){
        sum+=i;
    }
    cout<<actual_sum-sum;
    
}