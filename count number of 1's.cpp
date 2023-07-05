			/*program to count the number of 1's in the binary form of a given number*/
			

#include <bits/stdc++.h>
using namespace std;

int number_of_ones(int n){
	int count=1;
	while((n&(n-1))!=0){
		n=n&(n-1);
		count++;
	}
	return count;
}

int main(){
	int n;
	cout<<"give a number:\n";
	cin>>n;
	cout<<number_of_ones(n)<<endl;
	
	return 0;
}
