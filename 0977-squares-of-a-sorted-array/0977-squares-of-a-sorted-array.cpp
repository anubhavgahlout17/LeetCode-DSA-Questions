class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector <int> vec(n);
        for(int i = 0; i < n; i++){
            vec[i] = nums[i]*nums[i];
        }

        for(int i = 0 ; i < n; i++){
            for(int j = 0; j < n; j++){
                if(vec[j] > vec[i]){
                    int temp;
                    temp = vec[j];
                    vec[j] = vec[i];
                    vec[i] = temp;
                }
            }
        }
        return vec;
    }

};