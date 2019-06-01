#include<iostream>
using namespace std;
char pin[10][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int main(){
	char a;
	int sum=0;
	while(a=getchar(),a!='\n'){
		sum=int(a)-48+sum;
	}
	if(sum>99){
		cout<<pin[sum/100]<<" "<<pin[sum/10%10]<<" "<<pin[sum%10];
	}
	else if(sum>=10&&sum<=99){
		cout<<pin[sum/10]<<" "<<pin[sum%10];
	}
	else if(sum<10){
		cout<<pin[sum];
	}
	return 0;
}
