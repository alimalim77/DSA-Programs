#include<iostream>
using namespace std;

int rec(int n, int t){
	static int i=n;
	if(t==1){
	return 0;
	}
	i=i+n;
	rec(n,t-1);
	return i;
}

int main(){
	int n,t;
	cout << "Enter the value of n" <<endl;
	cin >> n;
	cout<< "Enter the value of t" <<endl;
	cin >> t;
	cout <<"The output is " <<rec(n,t);
	return 0;
}
