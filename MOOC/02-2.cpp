#include<iostream>
using namespace std;
#define N 2002
int x1[N]={0},x2[N]={0},m[N]={0},s[N]={0};
int main(){
	int i,t1,t2,k;
	int T;
	int cnt;
	cin>>T;
	for(i=0;i<T;i++){
		cin>>t1>>t2;
		x1[t2]+=t1;
	}
//	cout<<"1*"<<endl;
	cin>>T;
	for(i=0;i<T;i++){
		cin>>t1>>t2;
		x2[t2]+=t1;
	}
//	cout<<"1*"<<endl;
	for(i=0;i<N;i++){
		if(x1[i]){
			for(k=0;k<N;k++){
			    if(x2[k]){
			    	m[i+k]+=x1[i]*x2[k];
				}
		    }	
		}
	}
	for(i=N;i>=0;i--){
	    if(m[i]){
	    	if(cnt){
	    		cout<<" ";
			}
			cout<<m[i]<<" "<<i;
			cnt++;
		}
		
	}
	if(!cnt){
		cout<<"0 0";
	}
	cout<<endl;
	for(i=0;i<N;i++){
	    if(x1[i]){
	    	s[i]+=x1[i];
		}
		if(x2[i]){
			s[i]+=x2[i];
		}
	}
	cnt=0;
	for(i=N;i>=0;i--){
		if(s[i]){
			if(cnt){
				cout<<" ";
			}
			cout<<s[i]<<" "<<i;
			cnt++;
	   }
	}
	if(!cnt){
		cout<<"0 0";
	}
	return 0;
}
