#include<iostream>
#include<vector>
using namespace std;
int main(){
	int K;
	cin>>K;
	vector<int>num(K);
	int sum,j,m,i;
	int begin,end;
	int max=-1;//max一般初始化为负值较好 
	for(i=0;i<K;i++){
		cin>>num.at(i);
	}
	begin = num.at(0);
	end = num.at(i-1);
	for(i=0;i<K;i++){
		sum = 0;
		for(j=i;j<K;j++){
				sum = sum + num.at(j);
				if(sum>max){
					max = sum;
					begin = num.at(i);
					end = num.at(j);
				}
			}
			
			
		}
		if(max==-1)max=0;//为了全为负数和零的更新 
	
	cout<<max<<" "<<begin<<" "<<end<<endl;
	return 0;
}
