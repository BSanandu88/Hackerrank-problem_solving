#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    float r[3]{0,0,0};
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
       r[(arr[arr_i]>0?0:(arr[arr_i]<0?1:2))]+=1.0/n;
    }
    printf("%.6f\n%.6f\n%.6f",r[0],r[1],r[2]);
    
    
    return 0;
}