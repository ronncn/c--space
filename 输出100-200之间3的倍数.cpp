//���100-200֮��3�ı���
#include<iostream>
using namespace std;

int main(){
	int k;
	for(k = 100; k <= 200; k++){
		if(k%3 != 0) continue;		//��k����3�ı���,������������ 
		cout<<k<<"  ";				//��k��3�ı���,�����; 
	}
}
