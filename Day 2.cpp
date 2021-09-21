#include<iostream>
using namespace std;
 

int rec(int n){
	int ctr =0,num;
	if(n==0)
	return 0;
	
	int i= n%10;
	if(i==0)
	ctr+=1;
	
	num = ctr + rec(n/10);
	return num;
	
} 
 
int main(){
	int n,num;
	while(1){
	cout << "Enter the number\n" <<endl;
	cin >> n;
	num= rec(n);
	cout << num;
	}
	return 0;
}
