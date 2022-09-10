class Solution {
	   int solve(int idx,bool buy,int count, vector<int>& arr, vector<vector<vector<int>>> &dp){
		if(count == 0 or idx == arr.size()) return 0;
		if(dp[idx][buy][count] != -1) return dp[idx][buy][count];
		int profit;
		if(buy){
			int opt1 = -arr[idx] + solve(idx+1,0,count,arr,dp);
			int opt2 = solve(idx+1,1,count,arr,dp);
			profit = max(opt1,opt2);
		}
		else{
			int opt1 = arr[idx] + solve(idx+1,1,count-1,arr,dp);
			int opt2 = solve(idx+1,0,count,arr,dp);
			profit = max(opt1,opt2);
		}
		return dp[idx][buy][count] = profit;
	}
public:
	int maxProfit(int k, vector<int>& prices) {
		vector<vector<vector<int>>> dp(prices.size(),vector<vector<int>>(2,vector<int>(k+1,-1)));
		return solve(0,true,k,prices,dp);
	}
};