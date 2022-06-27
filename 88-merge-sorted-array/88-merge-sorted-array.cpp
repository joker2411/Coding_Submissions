class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> f;
        int i=0, j=0;
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                f.push_back(nums1[i]);
                i++;
            }
            else{
                f.push_back(nums2[j]);
                j++;
            }
        }
        if(i == m){
            while(j<n){
                f.push_back(nums2[j]);
                j++;
            }
        }
        else{
            while(i<m){
                f.push_back(nums1[i]);
                i++;
            }
        }
        
        for(i=0; i<m+n; i++){
            nums1[i] = f[i];
        }
    }
};