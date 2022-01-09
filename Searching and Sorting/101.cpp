int fBS(int arr[],int st,int e,int k){
    int res=-1;
    while(st<=e){
        int mid=(st+e)/2;
        
        if(arr[mid]>k)  e=mid-1;
        else if(arr[mid]<k) st=mid+1;
        else{
            res=mid;
            st=mid+1;
        }
            
    }
    return res;
}

int lBS(int arr[],int st,int e,int k){
    int res=-1;
    while(st<=e){
        int mid=(st+e)/2;
        if(arr[mid]>k)  e=mid-1;
        else if(arr[mid]<k) st=mid+1;
        else{
            res= mid;
            e=mid-1;
        }
    }
    return res;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    // int st=-1,e=-1;
    ans.push_back(lBS(arr,0,n-1,x));
    ans.push_back(fBS(arr,0,n-1,x));
    return ans;
    
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]==x){
    //         e=i;
    //         break;
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     if(arr[i]==x){
    //         st=i;
    //         break;
    //     }
    // }
    // return {st,e};
}
