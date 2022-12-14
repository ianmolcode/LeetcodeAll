class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int sum = 0;
        for(int i=cost.size()-3;i>=0;i=i-3)
            sum += cost[i];
        int totalSum = 0;
        for(int x:cost)
            totalSum+=x;
        return totalSum-sum;
    }
};