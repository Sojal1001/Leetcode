class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0,k=0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int> arr(m + n);
        while(i<m&&j<n){
            if(nums1[i]<nums2[j]){
                arr[k]=nums1[i];
                i++;
            }
            else{
                arr[k]=nums2[j];
                j++;
            }
            k++;
        }
        while(i!=m){
            arr[k]=nums1[i];
            i++;
            k++;
        }
        while(j!=n){
            arr[k]=nums2[j];
            j++;
            k++;
        }
        if((m+n)%2==0){
            return (arr[((m+n)/2)]+arr[((m+n)/2)-1])/2.0;
        }
        else{
            return arr[((m+n)/2)];
        }
    }
};