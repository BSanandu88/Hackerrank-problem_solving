#include<iostream>

using namespace std;

int josp(int n,int k){

	if(n==1)return 0;
	else return (josp(n-1,k)+k)%n;
}





int main(){
	int n,k;
	cin>>n>>k;
	cout<<"the ans is:"<<josp(n,k);
	return 0;
}