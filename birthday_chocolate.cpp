#include <bits/stdc++.h>

using namespace std;


int main(){
    int n;
    cin>>n;
    int s[110];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int d,m,count=0,sum=0;
    cin>>d>>m;
    for(int i=0;i<n;i++){
        sum=s[i];
        for(int j=i+1;j<m;j++){
          sum+=s[j];
        }
        if(sum==d)
        {
            count++;
        }
        m++;
    }
    cout<<count<<endl;

    return 0;
    }
