// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    vector<int> changeBits(int N) {
        int i=0;
        vector<int> res;
        
        if(N == 0)
        {
            res.push_back(1);
            res.push_back(1);
            return res;
        }
        while(N > pow(2,i)-1){
            i++;
        }
        
        int max = pow(2,i)-1;
        int diff = max-N;
        res.push_back(diff);
        res.push_back(max);
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        Solution ob;
        auto ans = ob.changeBits(N);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}  // } Driver Code Ends