#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int count=0;
    int arr[120];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])%k==0){
                count++;
            }
        }
    }
    cout<<count<<endl;
    return 0;
    
}
