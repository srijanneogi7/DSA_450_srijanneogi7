#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

ll help(vector<ll>&arr,ll n,ll m,ll mid){
    ll count=0;
    for(ll i=0;i<n;i++){
        if(arr[i]-mid>=0){
            count+=arr[i]-mid;
        }
    }
    return count;
}

int32_t main(){
    ll m,n;
    cin>>n>>m;
    vector<ll>arr;
    for(ll i=0;i<n;i++){
        ll temp;
        cin>>temp;
        arr.pb(temp);
    }
    // int sum=accumulate(arr.begin(),arr.end(),0);
    sort(arr.begin(),arr.end());
    ll s=0,e=arr[n-1];
    ll mid=0;
    while(s<=e){
        mid=(s+e)>>1;
        ll tot=help(arr,n,m,mid);
        if(tot==m){ 
            cout<<mid<<endl;
            break;
        }
        else if(tot>m)
            s=mid+1;
        else
            e=mid-1;
    }
    // cout<<ans<<endl;
    return 0;
}

/////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int main ( int argc ,char * argv[] ) {

	int i = 0;
	int max = -1 , *array;
	int n , k;

	scanf("%d%d" , &n,&k);

	array = (int *) malloc ( n * sizeof(int) );

	for ( i = 0 ; i < n ; i++ ) {
		scanf("%d" , &array[i]);
		if ( array[i] > max )
			max = array[i];
	}

	long long int low = 0;
	long long int high = max;
	long long int count = 0 , mid;
	long long int h = 0;

	while ( low <= high ) {
		mid = (high+low)/2;
		count = 0;
		for ( i = 0 ; i < n ; i++ ) {
			long long int temp = array[i] - mid;
			count += (temp > 0 ? temp : 0);
		}

		if ( count == k ) {
			h = mid;
			break;
		}
		else if ( count < k ) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
			// to have the lower bound of the cutting
			// this will be the case when this is the last
			// of the loop and Cutting from one unit above will give
			// give me smaller value.
			if ( mid > h )
				h = mid;
		}

	}

		printf("%lld\n" , h);

	return 0;
}
