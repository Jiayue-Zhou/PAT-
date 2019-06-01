#include<iostream>
#include<string>
#include <stdlib.h>
using namespace std;

int count(string x1, char x2){
	int i = 0;
	int c = 0;
	for(i=0;i<=x1.length()-1;i++){
		if(x1.at(i)==x2){
			c++;
		}
	}
	return c;
}
/*int Cal(char x1, int x2){
	int t = atoi(x1);
	int i;
	int sum;
	for(i=x2;i>0;i--){
		sum = 10*k;
	}
}
*/
int main(){
	string A, B,temp;
	char DA, DB;
	int num1,num2;
	int PA, PB;
	int i;
//	int PA,PB;
	cin>>A>>DA>>B>>DB;
	num1 = count(A,DA);
	num2 = count(B,DB);
	//cout << num1 <<" "<< num2<<endl;
	//PA = Cal(DA,num1);
	//PB = Cal(DB,num2);
	for(i=num1;i>0;i--){
		temp.push_back(DA);
	}
	PA = atoi(temp.c_str());
	//cout<<t;
	temp="";
	for(i=num2;i>0;i--){
		temp.push_back(DB);
	}
	PB = atoi(temp.c_str());
	cout<<PA+PB<<endl;
}
