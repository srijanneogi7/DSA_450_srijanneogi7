int *findTwoElement(int *arr, int n) {
        // code here
        int *res=new int[2];
        for(int i=0;i<n;i++){
            int index=abs(arr[i])-1;
            if(arr[index]>0){
                arr[index]=-arr[index];
            }
            else{
                res[0]=abs(arr[i]);
            }
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0)
                res[1]=i+1;
        }
        return res;
    }
