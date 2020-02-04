class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int sum = m + n;
        m--;
        n--;
        for (int i = sum-1; sum != -1; i--){
            
            if ( n == -1 ) {
                break;
            }
            else if ( m == -1 ){
                for (int j = n; j != -1; j--){
                    nums1[j] = nums2[j]; 
                }
                break;
            }
            if ( nums1.at(m) <= nums2.at(n) ){
                nums1[i] = nums2.at(n);
                n--;
            }
            else {
                nums1[i] = nums1.at(m);
                m--;
            }
        }
    }
};