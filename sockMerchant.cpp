#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,c;cin>>n;
    int arr[110],count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        c=1;
        
       if(arr[i]!=0){
        for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            c++;
            arr[j]=0;
        }
    }
    count+=c/2;
    }        
        
    }
    cout<<count;
    return 0;
}

    
    
    