class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> list;
        for(int i = left; i <= right; i++){

    int val = i;
    bool valid = true;

    while(val != 0){

        int lastDigit = val % 10;

        if(lastDigit == 0){
            valid = false;
            break;
        }

        if(i % lastDigit != 0){
            valid = false;
            break;
        }

        val = val / 10;
    }

    if(valid){
        list.push_back(i);
    }
}
        return list;
    }
};