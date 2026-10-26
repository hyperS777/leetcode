// Last updated: 26/10/2026, 11:15:07 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> mp;

        for (int i = 0; i <strs.size(); i++) {

            // Copy the current string
            string key = strs[i];

            // Sort the key's letters
            sort(key.begin(), key.end());

            // Put the original string into its group
            mp[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        // Go through the map and collect each group
        for (auto x : mp) {
            ans.push_back(x.second);
        }

        return ans;
    }
};