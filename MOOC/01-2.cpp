#include<iostream>
#include<vector>
using namespace std;
int main(){
	int K;
	cin>>K;
	vector<int>num(K);
	int sum,j,m,i;
	int begin,end;
	int max=-1;//maxһ���ʼ��Ϊ��ֵ�Ϻ� 
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
		if(max==-1)max=0;//Ϊ��ȫΪ��������ĸ��� 
	
	cout<<max<<" "<<begin<<" "<<end<<endl;
	return 0;
}
