// class Solution {
// public:
//     int search(vector<int>& arr, int k) {
//         int n=arr.size();
//         int low=0,high=n-1;
//         while(low<=high){
//             int mid=(low+high)/2;
            
//             if(arr[mid]==k) return mid;
            
//             if(arr[mid]<=arr[high]){
//                 if(k>=arr[mid] && k<=high) low=mid+1;
//                 else high =low-1;
//             }
//             if(arr[low]<=arr[mid]){
//                 if(k>=arr[low] && k<=arr[mid]) high=mid-1;
//                 else low=mid+1;
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int search(vector<int>& a, int target) {
        int low = 0, high = a.size() - 1; 
        while(low <= high) {
            int mid = (low + high) >> 1; 
            if(a[mid] == target) return mid; 
            
            // the left side is sorted
            if(a[low] <= a[mid]) {
                if(target >= a[low] && target <= a[mid]) {
                    high = mid - 1; 
                }
                else {
                    low = mid + 1; 
                }
            }
            else {
                if(target >= a[mid] && target <= a[high]) {
                    low = mid + 1; 
                }
                else {
                    high = mid - 1; 
                }
            }
        } 
        return -1; 
    }
};
