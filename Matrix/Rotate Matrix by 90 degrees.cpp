#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;

//Transpose + Reverse

void rotate(vector<vector<int>>& mat) {
    int row = mat.size(); 
    int col = mat[0].size();

    //Transpose
    for(int i = 0 ; i < row ; i++){
        for(int j = i ; j < row ; j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
    //Reverse
    for(int i = 0 ; i < row ; i++){
        reverse(mat[i].begin(),mat[i].end());
    }
}
int main(){
    vector<vector<int>>a={{1,2,3},{4,5,6},{7,8,9}};
    rotate(a);
    for(int i = 0 ; i < a.size() ; i++){
        for(int j = 0 ; j<a.size() ;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}