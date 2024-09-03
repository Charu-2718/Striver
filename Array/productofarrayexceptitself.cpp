#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    
    vector<int>nums={1,2,3,4};
    int n = nums.size();
        vector<int> ans(n);
        
        int lp = 1;
        for (int i = 0; i < n; i++) {
            ans[i] = lp;  
            lp *= nums[i];
        }

        int rp = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= rp;  
            rp *= nums[i];
        }

    for(int i=0; i < ans.size() ;i++){
        cout<<ans[i]<<" ";
    }
}