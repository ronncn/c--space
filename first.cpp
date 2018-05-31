//first.cpp
/*我的第一个c++程序*/ 
#include<iostream> 
//上一行使用预处理指令#include将头文件iostream包含到程序中来,
//iosstream是标准的c++头文件,它包含了输入输出的定义. 
using namespace std;
int main()
{
	/*
	*流是执行输入输出的对象,cout是c++标准的输出流,标准输出通常是指计算机的屏幕.
	*符号"<<"是一个输出运算符,带一个输出流作为它的做操作数,一个表达式作为它的右操作数,后者被发送到前者
	*cin是C++标准的输入流,标准输入通常是指计算机键盘
	*cin输入流抽取到变量i的效果是将键盘的输入值复制到变量i中 
	*/ 
	int i;
	int* ptr_i; 
	cout<<"First C++ Program!"<<endl;
	cout<<"请输入一个整数: \n";
	cin>>i;
	ptr_i = &i;
	cout<<"您输入的整数是: ";
	cout<<i;
	cout<<"指针地址为: ";
	cout<<ptr_i; 
	cout<<"\n";
}

//注意:C/C++是区分大小写的,cout是C++标准的输出流 
//2:"A"与'A'不等价,"A"是有两个字符(字符'A'与字符'\0')组成的字符串.


/*
定义常量
	const 类型 名字 = 值 
枚举类型
	enum 枚举类型名称
	{
		标识符[=整型常数],
		标识符[=整型常数],
		...
		标识符[=整型常数], 
	}
结构体和联合类型
	struct 结构体名
	{
		成员表列 
	} 变量名表列; 
	
	struct Complex{
		double re;	//复数的实部 
		double im;	//复数的虚部 
	} 
	联合类型
	union 联合名{
		成员表列 
	}变量名表列;
	
	union DATA{
		int i;
		char ch;
		float f; 
	};
	DATA a;
	引用方式: a.i,a.ch,a.f
	
	一维数组定义:
	类型说明符 数组名[常量表达式];
	float temp[100]; 
	int primes[] = {1,2,3,4,5,7};
	int primes[10] = {1,2,3,4,5,7}; 
	二维数组定义:
	float twoD[3][4]; 
	
	1.3基本输入输出 
	使用C++的标准的I/O流库时,必须包括以下两个头文件
	#include<iostream> //文件提供基本的输入输出功能 
	#include<iomanip>  //文件提供格式化的功能 
	符号endl的功能是换行,并清除输出缓冲区.
	
	格式控制:精度(precision)和宽度(width) 
	cout.precision(4);		//设置输出值的有效数字为4位
	cout.width(10);			//设置输出值占用的列宽为10 
	
	
	1.6指针与引用
	指针(pointer)的定义:
	int *ptr1;
	char *ptr2; 
	用来保存变量的地址,指针类型的变量是用来存放内存地址的 
	定义 int* pa,pb,pa是一个指向整型变量的指针,而pb是一个整型变量
	
	注意:指针变量与变量指针的含义不同,
	--指针变量简称指针,是一个变量,且该变量是指针类型的
	--变量指针是指它是一个变量,该变量是指针类型的,且它存放另一个变量的地址
	"&" 和 "*" 
	"&"称为地址运算符,--获得变量的地址 
	语句pa = &pb;pa就得到了pb的地址
	"*"称为间接运算符 --获取指针变量的值 
	 
	 引用是一个变量的别名
	 
	 double num1 = 3.14;
	 double &num2 = num1;		//num2是num1的引用
	 
	 9. typedef
	 定义类型说明符
	 typedef int *intptr;
	 此后,变量定义语句今天intptr p;与int *p;等价 
	 
	 -----------------------------------------------
	11.2类与对象
  	1.类
	class Name{
	  	public:
	  		类的公有接口
		private:
			私有的成员函数
			私有的数据成员定义 
	}
	
	定义一个栈结构的类Stach;
	const int STACK_SIZE = 100;
	class Stack{
		int top;					//数据成员:栈顶指针 
		int buffer[STACK_SIZE];		//数据成员:栈空间
	public:
		Stack(){					//构造函数:初始化top值 
			top = 0;
		} 
		int length(){				//成员函数: 返回栈中元素数目 
			return top;
		}
		bool push(){				//成员函数:元素element入栈  
			if(top == STACK_SIZE){
				cout<<"Stack id overflow!\n";
				return false;
			}else{
				buffer[top] = element;
				top++;
				return true;
			}
		} 
		bool pop(int &e);
	};
	
	
	类的成员函数通常在类外定义
	
	返回类型 类名:: 函数名(形参表)
	{
		函数体 
	} 
	
	双冒号"::"是域运算符,主要用于类的成员函数的定义.例如,在类外定义的成员函数pop
	
	bool Stack::pop(void)
	{
		//成员函数: 弹栈并由参数带回栈顶元素
		if(top==0){
			cout<<"Stack is empty!\n";
			return false;
		} else{
			i = buffer[top-1];
			top--;
			return true;
		}
	} 
	
	调用类实例的成员函数
	
	class A{
		int x;
		public:
		void f();
		voidg();
	} 
	void main(void){
		A el;
		el.f();
		el.g();
		el.x = 5;		//错误,对象el的数据成员x是不可见的
		A *p;
		p = new A;		//创建A类的一个动态对象,用p指向该对象 
		p->f();
		p->g(); 
	}
	
	3)构造函数
	4)析构函数
	定义一个类String, 字符串对象的控件在创建对象时申请.
	class String{
		char *str;
	public:
		String(){
			str = NULL;
		}
		String(const char *p){
			str = new char[strlen(p)+1];//申请资源
			strcpy(str,p); 
		}
		~String(){
			delete []str;	//归还资源
			str = NULL; 
		}
		int length(){ return strlen(str); }
	} 
	
	静态成员(static)
	 	C++允许定义static成员函数. 静态的数据成员被所有的对象共享,也就是说,静态数据成员
		 不属于对象,而属于类的.与静态数据成员类似,静态成员函数也是属于类的 
	
	this指针
	
	class A{
		public:
			void f();
			void g(int i){x = i;f();}
		private:
			int x,y,z;
	} 
	A a,b;
	
	友元
	
	...
	class A{
		friend void func();		//友元函数 
		friend void B;			//友元类 
		friend void c::f();		//友元类成员函数,假定f()是类C的成员函数 
	} 
	
	11.3 继承与多态
		1.继承
		class 派生类:访问权限 基类
		{
			//派生类的类体 
		} 
		访问权限:public,private,protected
		2.多态 
		虚函数(virtual)
		定义了函数而没有函数实现的虚函数称之为纯虚函数.定义纯虚函数的方法是在虚函数参数表
		右边的括号后加一个"=0"的后缀,如:
		virtual void method(void) = 0; 
		
		含有纯虚函数的类,称之为抽象类 C++不允许用抽象类创造对象,它只能被其他类继承
		要定义抽象类,就必须定义纯虚函数,他实际上是起到一个接口的作用 
*/ 

