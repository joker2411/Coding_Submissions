// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> intToBinary(int num){
        int temp;
        vector<int> ans;
        
        if(num == 0){
            ans.insert(ans.begin(), 0);
            return ans;
        }
        
        while(num > 0){
            temp = num%2;
            ans.insert(ans.begin(), temp);
            num /= 2;
        }
        
        return ans;
    }
    
    int minVal(int a, int b) {
        vector<int> v1;
        vector<int> v2;
        
        v1 = intToBinary(a);
        v2 = intToBinary(b);
        
        int N1 = v1.size();
        int N2 = v2.size();
        
        int count1 = 0;
        
        for(int i=0; i<N2; i++){
            if(v2[i] == 1)
                count1++;
        }
        
        int res = 0, temp = 0;
        
        for(int i=0; i<N1; i++){
            if(temp < count1 && v1[i] == 1){
                temp++;
            }
            else
                v1[i] = 0;
        }
        
        for(int i= N1-1; i >= 0; i--){
            if(temp < count1 && v1[i] == 0){
                v1[i] = 1;
                temp++;
            }
        }
        
        while(temp < count1){
            v1.insert(v1.begin(), 1);
            temp++;
        }
        
        N1 = v1.size();
        
        for(int i=0; i<N1; i++){
            res = (res*2) + v1[i];
        }
        return res;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;

        Solution ob;
        cout << ob.minVal(a, b);

        cout << "\n";
    }

    return 0;
}  // } Driver Code Ends