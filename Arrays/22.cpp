int maxProfit(vector<int>& prices) {    
        int maxr=prices[prices.size()-1];
        int diff=-1;
        for(int i=prices.size()-1;i>=0;i--){
            if(prices[i]>maxr){
                maxr=prices[i];
            }
            else{
                diff=max(diff,maxr-prices[i]);
            }
        }
        return diff;
        
        // int min=prices[0];
        // int diff=prices[1]-prices[0];
        // for(int i=1;i<prices.size();i++){
        //     if(prices[i]-min>diff){
        //         diff=prices[i]-min;
        //     }
        //     if(prices[i]<min) min=prices[i];
        // }
        // if(diff<0) return 0;
        // return diff;
        
//         int n= prices.size();
//         int mn= INT_MAX;
//         int ans=0;
        
//         for(int i=0; i<n; i++){
//             mn = min(mn, prices[i]);
//             ans = max(ans, prices[i]-mn);
//         }
        
//         return ans;
    }
};
