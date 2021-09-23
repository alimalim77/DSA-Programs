#include<iostream>
#include<cmath>
using namespace std;

double rec(int n, double fir){
	if(n==-1)
	return 1;
	
	fir=fir/pow(2,n);
	return fir + rec(n-1,fir); 
}

int main(){
	double fir=1,ans;
	int n;
	cin >>n;
	ans=rec(n,fir);
	cout << ans <<endl;
	return 0; 
}

