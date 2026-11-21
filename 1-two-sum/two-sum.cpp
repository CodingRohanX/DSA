class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        vector<pair<int,int>> a;
        for (int k = 0; k < nums.size(); k++) a.push_back({nums[k], k});
        sort(a.begin(), a.end());
        int i = 0, j = a.size() - 1;
        while (i < j) {
            int s = a[i].first + a[j].first;
            if (s == t) return {a[i].second, a[j].second};
            else if (s > t) j--;
            else i++;
        }
        return {};
    }
};