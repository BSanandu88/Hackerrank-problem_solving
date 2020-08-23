#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    string str;
    cin>>str;
    int count = 0;
    int a = 0;
    int b = 0;
    for(int i=0;i<n;i++){
        if(str[i] == 'U'){
           a++;
        }else{
            a--;
        }
        if(a==-1 && b==0){
            count++;
        }
        b=a;
    }
    cout<<count<<endl;
    return 0;
}