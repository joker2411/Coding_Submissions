// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/
bool comparator(Item a, Item b){
    return (a.value/(double)a.weight) > (b.value/(double)b.weight);
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr+n, comparator);
        
        // for(int i=0; i<n ; i++){
        //     cout<<arr[i].value<<"--";
        //     cout<<arr[i].weight<<"--"<<endl;
        // }
        int i=0;
        double ans = 0;
        
        while(W>0 && i<n){
            if(arr[i].weight >= W){
                ans += ((double)(arr[i].value)*(double)W/(double)arr[i].weight);
                W = 0;
                break;
            }
            ans += arr[i].value;
            W -= arr[i].weight;
            i++;
        }
        return ans;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends