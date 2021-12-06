class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int len = position.size();
        if(len == 1)
            return 0;
        
        int odd=0, even=0;
        for(int i=0;i<len;i++){
            if(position[i]%2 ==0) //
                even ++;
            else
                odd ++;
        }
        //cout << even << " " << odd;
        
        return min(even,odd);
    }
};
