#include<iostream>
#include<vector>
using namespace std;
int main(){
	int K;
	cin>>K;
	vector<int>num(K);
	int sum,j,m,i;
	int max=0;
	for(i=0;i<K;i++){
		cin>>num.at(i);
	}
	for(i=0;i<K;i++){
		sum = 0;
		for(j=i;j<K;j++){
				sum = sum + num.at(j);
				if(sum>max) max = sum;
			}
			
			
		}
	
	cout<<max<<endl;
	return 0;
}
