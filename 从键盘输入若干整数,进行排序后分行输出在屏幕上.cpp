//从键盘输入若干证书,进行排序后分行输出在屏幕上

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> numlist;
	int element;
	//从标准输入设备读入整数,知道输入非总数型数据为止
	
	while(cin>>element)
		numlist.push_back(element);
	
	sort(numlist.begin(),numlist.end());
	for(int i=0;i<numlist.size();i++)
		cout<<numlist[i]<<"\t"<<numlist.at(i)<<endl; 
} 
