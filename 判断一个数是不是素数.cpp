//�ж�һ�����ǲ�������
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
	int m;		//����k��m
	cout<<"input a integer:";
	cin>>m;
	
	if(isPrime(m)){
		cout<<m<<"��һ������."; 
	} else{
		cout<<m<<"����һ������."; 
	} 
}


/*
	��������:
	�����ֳ�Ϊ����,һ������1����Ȼ��,����1����������,���ܱ�������Ȼ����������
	 
*/
