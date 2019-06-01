#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main(){
	double c1,c2,seconds;
	int s;
	int hh,mm,ss;
	cin>> c1 >> c2;
	seconds = fabs(c2 - c1)/100;
	//cout<<seconds<<endl;
	s = int(seconds + 0.5);
	//cout<<s; 
	hh = s/3600;
	mm = (s-s/3600*3600)/60;
	ss = s%60;
	
	//cout<<setw(2)<<setfill('0')<<hh<<":"<<setw(2)<<setfill('0')<<mm<<":"<<setw(2)<<setfill('0')<<ss<<endl;
	//C++写法，记得包括头文件#include<iomanip> 
	//推荐C语言写法
	printf("%02d:%02d:%02d",hh,mm,ss); 
    return 0;
}
