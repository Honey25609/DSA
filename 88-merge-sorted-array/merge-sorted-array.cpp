class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x=m;
        for(int i=0;i<n;i++){
            nums1[x]=nums2[i];
            x++;
        }
        for(int i=0;i<nums1.size()-1;i++){
            for(int j=0;j<nums1.size()-1;j++){
                if(nums1[j]>nums1[j+1]){
                    swap(nums1[j],nums1[j+1]);
                }
            }
        }
        for(int i=0;i<m+n;i++){
            cout<<nums1[i]<<" ";
        }
    }
};