#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void twosum(vector<int>& nums, int target, int i, int j, vector<vector<int>>& result) {
    while (i < j) {
        int sum = nums[i] + nums[j];
        if (sum > target) {
            j--;
        } else if (sum < target) {
            i++;
        } else {
            result.push_back({-target, nums[i], nums[j]});
            while (i < j && nums[i] == nums[i + 1]) i++;
            while (i < j && nums[j] == nums[j - 1]) j--;
            i++;
            j--;
        }
    }
}

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    int n = nums.size();
    if (n < 3) return {};

    sort(nums.begin(), nums.end());

    for (int i = 0; i <= n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]){
            continue; 
        } 

        int target = -nums[i];
        twosum(nums, target, i + 1, n - 1, result);
    }

    return result;
}

int main() {
    vector<int> a = { -1, 0, 1, 2, -1, -4 };
    vector<vector<int>> result = threeSum(a);

    for (const auto& triplet : result) {
        cout << "[";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
