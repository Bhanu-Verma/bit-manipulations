#include <bits/stdc++.h>
using namespace std;

bool ispower(int n){
	return (n && !(n&(n-1)));
}

int main(){
	int n;
	cout<<"give a number that you want to check is a power of two or not:"<<endl;
	cin>>n;
	
	if(ispower(n)){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
	
	return 0;
}
