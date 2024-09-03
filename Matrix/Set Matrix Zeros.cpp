#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>

using namespace std;
void setmat(vector<vector<int>>&arr){
    int row = arr.size();
    int col = arr[0].size();
    vector<int> row_mark(row, 0);
    vector<int> col_mark(col, 0);
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j<col ;j++){
            if(arr[i][j]==0){
                row_mark[i]=1;
                col_mark[j]=1;
            }
        }
    }
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j<col ;j++){
            if(row_mark[i]==1 || col_mark[j]==1){
                arr[i][j]=0;
            }
        }
    }
}
int main(){
    vector<vector<int>>a={{1,1,1},{1,0,1},{1,1,1}};
    setmat(a);
    for(int i = 0 ; i < a.size() ; i++){
        for(int j = 0 ; j<a.size() ;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}