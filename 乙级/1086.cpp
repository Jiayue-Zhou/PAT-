#include<iostream>
#include<string.h>
#include<math.h>
#include<string.h>
using namespace std;
double a[9];
int main(){
	int i,j,m;
	double k,add,A,B;
	cin>>A>>B;
	add=A*B;
	k=1;
	memset(a,0,sizeof(a));
	for(i=8;i>=0;i--){
		a[i]=int(add/pow(10,k-1))%10;
		k++;
	}
	for(i=0;i<=8;i++){
		if(a[i]!=0) break;
	}
	for(j=8;j>=i;j--){
		if(a[j]!=0) break;
	}
	for(m=j;m>=i;m--){
		cout<<a[m];
	}
	return 0;
}
