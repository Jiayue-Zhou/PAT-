#include<iostream>
using namespace std;

int main(){
	int N;
	int a1,a2,b1,b2;
	int sum;
	int n1,n2;
	n1 = 0;
	n2 = 0;
	cin>>N;
	while(N--){
		cin>>a1>>a2>>b1>>b2;
		sum = a1 + b1;
		if(a2 == sum&& b2!= sum) n2++;
		if(b2 == sum&& a2!= sum) n1++;
	}
	cout<<n1<<" "<<n2<<endl;
	return 0;
}
