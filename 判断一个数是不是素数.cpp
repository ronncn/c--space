//判断一个数是不是素数
#include<iostream>

using namespace std;

bool isPrime(int c){
	int k;
	if(c<1)
		return false;
	for(k = 2; k<=c; k++)
		if(c%k == 0) break;
	if(k<c)
		return false;
	return true;
} 

int main(){
	int m;		//定义k和m
	cout<<"input a integer:";
	cin>>m;
	
	if(isPrime(m)){
		cout<<m<<"是一个素组."; 
	} else{
		cout<<m<<"不是一个素数."; 
	} 
}


/*
	关于素数:
	素数又称为质数,一个大于1的自然数,除了1和它本身外,不能被其他自然数整除的数
	 
*/
