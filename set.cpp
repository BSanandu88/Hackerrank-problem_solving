#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>s; 
    int q = 0;cin>>q;
    while(q--){
        int x = 0,y = 0;
        cin>>y>>x;
        if(y==1)s.insert(x);
        else if(y==2)s.erase(x);
        else{
            set<int>::iterator itr = s.find(x);
            if (itr == s.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    } 
    return 0;
}



