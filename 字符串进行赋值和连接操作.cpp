//�ַ������и�ֵ�����Ӳ���
#include <iostream> 
#include <string>

using namespace std;
int main(){
	string s1("cat"),s2,s3;
	s2 = s1;
	s3.assign(s1);		//��ֵ���� 
	
	cout << "s1:"<<s1<<"\ts2:"<<s2<<"\ts3:"<<s3<<endl;
	
	s2[0] = s3[2] = 'r';
	cout<<"s1:"<<s1<<"\ts2:"<<s2<<"\ts3:"<<s3<<endl;
	int len = s3.length();
	for(int idx = 0;idx < len;idx++)
		cout<<s3.at(idx);
	cout<<endl;
	string s4(s1 + "a-logue"),s5;
	s3 += "pet";
	s1.append("-egory");
	s5.append(s1,4,s1.size());
	cout << "s1:"<<s1<<"\ts2:"<<s2<<"\ts3:"<<s3<<endl;
	cout << "s4:"<<s4<<"\ts5:"<<s5<<endl;
	
	return 0; 
}

/*
��������ַ����Ӵ�λ�ÿ�ʼ����
s.insert(0,"my name");
s.insert(1,str);

ɾ���ַ���
s.erase(13);
s.erase(7,5);
s.clear();

�����ַ�����С
size() length()�ɼ������е��ַ���
Empty()��������ַ����Ƿ�Ϊ��
max_size()���㵱ǰC++�ַ�������ܰ������ַ���
capactity()����string���ܰ���������ַ���

���ʴ��е��ַ�.
������[]�ͺ���at() 

���Ӵ�
s.substr();
s.substr(11);//���ش��±�11֮����ַ������ɵ��Դ�
s.substr(5,6);//���ش��±�5��ʼ��6���ַ���ɵ��ַ���

�ַ����Ƚ� 
string s("sbcd");
s.compare("abcd");
s.compare("dcba");
s.compare("ab")
s.compare(0,2,s,2,2);
s.compare(1,2,"bcx",2);

STL --��һϵ�������ͳ�� 
	1.�㷨
	2.����
	3.������ 
	
vector��һ���ܹ���������������ݵĶ�̬����

vector<T> v1;		//�������T����ϵ�е�vector����v1
vector<T> v2(v1);	//����vector����v2,����v1��Ա��ʼ��
vector<T> v3(n);    //����vector����v3,����Ϊn
vector<T> v4(n,i);	//����vector����v4,����Ϊn����i��ʼ�� 
 
*/
