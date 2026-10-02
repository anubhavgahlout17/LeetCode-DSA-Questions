class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       int altitude = 0;
int highest = 0;

for(int i = 0; i < gain.size(); i++){

    altitude = altitude + gain[i];

    highest = max(highest, altitude);
}

return highest;
        
    }
};