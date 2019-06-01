#include<iostream>
using namespace std;

int main(){
	int T,t=0;
	long long A,B,C;
	long long temp;
	cin>>T;
	while(T--){
		t++;
		cin>>A>>B>>C;
		temp=A+B;
		if(temp>C){
			cout<<"Case #"<<t<<": true"<<endl;
		}
		else{
			cout<<"Case #"<<t<<": false"<<endl;
		}
	}
	return 0;
} 
