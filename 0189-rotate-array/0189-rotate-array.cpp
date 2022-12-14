class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // ***method 1***

        int n=nums.size();
        k=k%n;
        // vector<int>res;
        // for(int i=n-k;i<n;i++){
        //     res.push_back(nums[i]);
        // }
        //  for(int i=0;i<n-k;i++){
        //      res.push_back(nums[i]);
        //  }
        // for(int i=0;i<n;i++){
        //     nums[i]=res[i];
        // }

        // *** method 2***
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};