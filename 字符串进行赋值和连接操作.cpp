//字符串进行赋值和连接操作
#include <iostream> 
#include <string>

using namespace std;
int main(){
	string s1("cat"),s2,s3;
	s2 = s1;
	s3.assign(s1);		//赋值操作 
	
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
被插入的字符串从此位置开始插入
s.insert(0,"my name");
s.insert(1,str);

删除字符串
s.erase(13);
s.erase(7,5);
s.clear();

计算字符串大小
size() length()可计算现有的字符串
Empty()用来检查字符串是否为空
max_size()计算当前C++字符串最多能包含的字符串
capactity()返回string所能包含的最大字符数

访问串中的字符.
操作符[]和函数at() 

求子串
s.substr();
s.substr(11);//返回从下标11之后的字符串构成的自创
s.substr(5,6);//返回从下标5开始的6个字符组成的字符串

字符串比较 
string s("sbcd");
s.compare("abcd");
s.compare("dcba");
s.compare("ab")
s.compare(0,2,s,2,2);
s.compare(1,2,"bcx",2);

STL --是一系列软件的统称 
	1.算法
	2.容器
	3.迭代器 
	
vector是一个能够存放任意类型数据的动态数组

vector<T> v1;		//创建存放T类型系列的vector对象v1
vector<T> v2(v1);	//创建vector对象v2,并用v1成员初始化
vector<T> v3(n);    //创建vector对象v3,容量为n
vector<T> v4(n,i);	//创建vector对象v4,容量为n并且i初始化 
 
*/
