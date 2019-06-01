#include<iostream>
#include<vector>
using namespace std;

int main(){
	int N,M;
	int i;
	int k=0;
	cin>>N>>M;
	vector<int>num(N);
	vector<int>result(N);
	if(M>=N){
		M = M % N;
	}
	for(i=0;i<N;i++){
		cin>>num.at(i);
	}
	//cout<<num.at(2);
	for(i=N-M;i<N;i++){
		result.at(k)=num.at(i);
		k++;
	}
	for(i=0;i<N-M;i++){
		result.at(k)=num.at(i);
		k++;
	}
	for(i=0;i<N-1;i++){
		cout<<result.at(i)<<" ";
	}
	cout<<result.at(i)<<endl;
	return 0;
}
