#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<cmath>
#include<queue>
#include<string>
using namespace std;
string generate(string &str) {
        vector<int> arr(26, 0); 
        for (char &i : str) {
            arr[i - 'a']++;
        }
        string ans = "";
        for (int i = 0; i < 26; i++) {
            if (arr[i] > 0) {
                ans += string(arr[i], i + 'a');
            }
        }

        return ans;
    }
    vector<vector<string>> groupAnagrams(vector<string>& words) {
        unordered_map<string, vector<string>> mp;
        vector<vector<string>> result;
        
        for (string &word : words) {
            string newWord = generate(word);
            mp[newWord].push_back(word);
        }

        for (auto &it : mp) {
            result.push_back(it.second);
        }

        return result;
    }
int main(){
    vector<string> words={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>> ga = groupAnagrams(words);

    for (const auto& group : ga) {
        for (const auto& word : group) {
            cout << word << " ";
        }
        cout << endl;
    }
    
    return 0;
    
}