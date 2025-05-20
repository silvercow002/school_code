#include<bits/stdc++.h>
using namespace std;

#define weaksilv ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define int long long
#define pii pair<int, int>
#define INF 0x3f3f3f3f
#define STOP system("pause")

/*********************************************/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> re, tmp;
        for (int i=0; i < nums.size(); ++i) {
            int t = nums[i];
            if (tmp.empty()) {
                tmp.push_back(target-t);
                continue;
            }
            else if (find(tmp.begin(), tmp.end(), t) != tmp.end() && find(re.begin(), re.end(), t) == re.end()) {
                int a = distance(nums.begin(), find(nums.begin(), nums.end(), t)); 
                nums[a] = (long long)1e10;
                int b = distance(nums.begin(), find(nums.begin(), nums.end(), target-t)); 
                nums[b] = (long long)1e10;
                re.push_back(a);
                re.push_back(b);
            }
            else {
                tmp.push_back(target-t);
            }
        }
        sort(re.begin(), re.end());
        return re;
    }
};


signed main(void) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i=0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;


    Solution sol;
    vector<int> result = sol.twoSum(nums, target);
    if (result.size() == 2) {
        cout << result[0] << ' '
        << result[1] << '\n';
    }

    return 0;
}