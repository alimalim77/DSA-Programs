#include<iostream>
using namespace std;
 
int ctr =0;
int rec(int n){
	if(n==0)
	return 0;
	
	int i= n%10;
	if(i==0)
	ctr+=1;
	
	rec(n/10);
	return ctr;
	
} 
 
int main(){
	int n,num;
	cin >> n;
	num= rec(n);
	cout << num;
	return 0;
}

