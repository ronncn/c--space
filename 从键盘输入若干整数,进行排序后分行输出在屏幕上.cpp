//�Ӽ�����������֤��,�������������������Ļ��

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	vector<int> numlist;
	int element;
	//�ӱ�׼�����豸��������,֪�����������������Ϊֹ
	
	while(cin>>element)
		numlist.push_back(element);
	
	sort(numlist.begin(),numlist.end());
	for(int i=0;i<numlist.size();i++)
		cout<<numlist[i]<<"\t"<<numlist.at(i)<<endl; 
} 
