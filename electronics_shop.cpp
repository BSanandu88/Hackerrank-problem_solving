#include<bits/stdc++.h>
using namespace std;

int main(){
    int b,n,m,t;
    cin>>b>>n>>m;
    int keyboards[n];
    int drives[m];
    int max_spent = -1;
    for(int i=0;i<n;i++) {cin>>keyboards[i];}
    for(int j = 0;j<m;j++) {cin>>drives[j];}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
         t = keyboards[i] + drives[j];
         if(t >= max_spent && t <= b){
             max_spent = t;
         }
        }
    }
    
    cout<<max_spent<<"\n";
 return 0;
}
