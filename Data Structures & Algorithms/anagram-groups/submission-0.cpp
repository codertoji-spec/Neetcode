class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<long long,vector<string>>hash;
        for(int i = 0; i<strs.size();i++)
        {
            vector<int>curr(26,0);
            for(int j = 0;j<strs[i].size();j++)
            {
                curr[strs[i][j] - 'a']++;
            }
            long long key = 0;
            for(int j = 0;j<curr.size();j++)
            {
                key = (key*10)+curr[j];
            }
            hash[key].push_back(strs[i]);
        }
        vector<vector<string>>ans;
        for(auto x:hash)
        {
            ans.push_back(x.second);
        }
        return ans;
    }
};
