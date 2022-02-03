bool help(int arr[],int n,int m, int mid){
        int page=0,count=1;
        for(int i=0;i<n;i++){
            if(page+arr[i]<=mid){
                page+=arr[i];
            }
            else{
                count++;
                if(count>m || arr[i]>mid) return false;
                page=arr[i];
            }
        }
        return true;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int s=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int e=sum;
        int mid,ans=-1;
        while(s<=e){
            mid=(s+e)>>1;
            if(help(arr,n,m,mid)) {
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
