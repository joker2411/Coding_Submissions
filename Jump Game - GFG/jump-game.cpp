// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int N) {
        vector<bool> path(N+1, false);
        path[N] = true;
        
        int i = N-1;
        int closest = N-1;
        
        while(i >= 0){
            if(i+A[i] >= closest){
                path[i] = true;
                closest = i;
            }
            i--;
        }
        if(path[0] == true)
            return 1;
        else
            return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}  // } Driver Code Ends