bool isPossible(vector<int> &arr, int k,int mid){
    int count=1,last=arr[0];
    for(int i=0;i<arr.size();i++){
        if(arr[i]-last>=mid){
            count++;
            if(count==k){
                return true;
            }
            last=arr[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &arr, int k)
{
    //    Write your code here.
    int s=0,ans=-1,mid=0;
    sort(arr.begin(),arr.end());
    int e=arr[arr.size()-1];
    while(s<=e){
        mid=(s+e)>>1;
        if(isPossible(arr,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
