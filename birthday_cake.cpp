#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int highest=0,count=0;
    for(int i=0;i<n;i++){
        int h;
        cin>>h;
        if(h>highest){
            highest=h;
            count=1;
        }
        else if(h==highest){
            count++;
        }
    }
    cout<<count<<"\n"<<endl;
    return 0;
}