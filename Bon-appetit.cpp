#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,bill[n],charged;
    cin>>n>>k;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>bill[i];
        sum+=bill[i];
    }
    cin>>charged;
    double actual = (sum-bill[k])/2.0;
    if (charged - actual == 0) {
    cout << "Bon Appetit" << endl;
  } else {
    cout << charged - actual << endl;
  }
    return 0;
}
