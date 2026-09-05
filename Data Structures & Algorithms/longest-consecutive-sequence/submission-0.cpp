class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> hash(nums.begin(), nums.end());
        int largest = 0;

        for (int x : hash) {
            if (!hash.count(x - 1)) {
                int curr = 1;
                int next = x + 1;

                while (hash.count(next)) {
                    curr++;
                    next++;
                }

                largest = max(largest, curr);
            }
        }
        return largest;
    }
};
