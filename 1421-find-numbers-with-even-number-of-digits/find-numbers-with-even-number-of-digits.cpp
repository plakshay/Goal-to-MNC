class Solution {
public:
    int digits(int n ){
        int c=0;
        if(n==0) c=1;
        while(n){
            n=n/10;
            ++c;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int c=0;
        for(int i =0;i<n;i++){
            if(digits(nums[i])%2==0) c++;
        }
        return c;
    }
    
};