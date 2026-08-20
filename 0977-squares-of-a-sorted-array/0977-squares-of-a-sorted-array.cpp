class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> vec(n);
        for(int i = 0; i < n; i++){
            vec[i] = nums[i]*nums[i];
        }

        sort(vec.begin(), vec.end());

        return vec;
    }

};