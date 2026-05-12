class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c = 0;
        int n;
        
        for(int i = 0 ; i < nums.size();i++){
            int a = nums[i];
            int d = 0;
            while(a!=0){
                n = a%10;
                d++;
                a = a/10;
            }
            if(d%2==0) c++;
        }
        return c;
    }
};