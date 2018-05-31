//输出100-200之间3的倍数
#include<iostream>
using namespace std;

int main(){
	int k;
	for(k = 100; k <= 200; k++){
		if(k%3 != 0) continue;		//若k不是3的倍数,则跳过输出语句 
		cout<<k<<"  ";				//若k是3的倍数,则输出; 
	}
}
