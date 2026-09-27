class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
            
                int n = nums.size();
        int indexofmin;

        for(int i = 0; i < n - 1; i++) {
            indexofmin = i;

            // Find index of minimum element in remaining array
            for(int j = i + 1; j < n; j++) {
                if(nums[j] < nums[indexofmin]) {
                    indexofmin = j;
                }
            }

            // Swap once per pass
            int temp = nums[i];
            nums[i] = nums[indexofmin];
            nums[indexofmin] = temp;
        }
        return nums;
    
         
    }


};