//first.cpp
/*�ҵĵ�һ��c++����*/ 
#include<iostream> 
//��һ��ʹ��Ԥ����ָ��#include��ͷ�ļ�iostream��������������,
//iosstream�Ǳ�׼��c++ͷ�ļ�,����������������Ķ���. 
using namespace std;
int main()
{
	/*
	*����ִ����������Ķ���,cout��c++��׼�������,��׼���ͨ����ָ���������Ļ.
	*����"<<"��һ����������,��һ���������Ϊ������������,һ�����ʽ��Ϊ�����Ҳ�����,���߱����͵�ǰ��
	*cin��C++��׼��������,��׼����ͨ����ָ���������
	*cin��������ȡ������i��Ч���ǽ����̵�����ֵ���Ƶ�����i�� 
	*/ 
	int i;
	int* ptr_i; 
	cout<<"First C++ Program!"<<endl;
	cout<<"������һ������: \n";
	cin>>i;
	ptr_i = &i;
	cout<<"�������������: ";
	cout<<i;
	cout<<"ָ���ַΪ: ";
	cout<<ptr_i; 
	cout<<"\n";
}

//ע��:C/C++�����ִ�Сд��,cout��C++��׼������� 
//2:"A"��'A'���ȼ�,"A"���������ַ�(�ַ�'A'���ַ�'\0')��ɵ��ַ���.


/*
���峣��
	const ���� ���� = ֵ 
ö������
	enum ö����������
	{
		��ʶ��[=���ͳ���],
		��ʶ��[=���ͳ���],
		...
		��ʶ��[=���ͳ���], 
	}
�ṹ�����������
	struct �ṹ����
	{
		��Ա���� 
	} ����������; 
	
	struct Complex{
		double re;	//������ʵ�� 
		double im;	//�������鲿 
	} 
	��������
	union ������{
		��Ա���� 
	}����������;
	
	union DATA{
		int i;
		char ch;
		float f; 
	};
	DATA a;
	���÷�ʽ: a.i,a.ch,a.f
	
	һά���鶨��:
	����˵���� ������[�������ʽ];
	float temp[100]; 
	int primes[] = {1,2,3,4,5,7};
	int primes[10] = {1,2,3,4,5,7}; 
	��ά���鶨��:
	float twoD[3][4]; 
	
	1.3����������� 
	ʹ��C++�ı�׼��I/O����ʱ,���������������ͷ�ļ�
	#include<iostream> //�ļ��ṩ����������������� 
	#include<iomanip>  //�ļ��ṩ��ʽ���Ĺ��� 
	����endl�Ĺ����ǻ���,��������������.
	
	��ʽ����:����(precision)�Ϳ��(width) 
	cout.precision(4);		//�������ֵ����Ч����Ϊ4λ
	cout.width(10);			//�������ֵռ�õ��п�Ϊ10 
	
	
	1.6ָ��������
	ָ��(pointer)�Ķ���:
	int *ptr1;
	char *ptr2; 
	������������ĵ�ַ,ָ�����͵ı�������������ڴ��ַ�� 
	���� int* pa,pb,pa��һ��ָ�����ͱ�����ָ��,��pb��һ�����ͱ���
	
	ע��:ָ����������ָ��ĺ��岻ͬ,
	--ָ��������ָ��,��һ������,�Ҹñ�����ָ�����͵�
	--����ָ����ָ����һ������,�ñ�����ָ�����͵�,���������һ�������ĵ�ַ
	"&" �� "*" 
	"&"��Ϊ��ַ�����,--��ñ����ĵ�ַ 
	���pa = &pb;pa�͵õ���pb�ĵ�ַ
	"*"��Ϊ�������� --��ȡָ�������ֵ 
	 
	 ������һ�������ı���
	 
	 double num1 = 3.14;
	 double &num2 = num1;		//num2��num1������
	 
	 9. typedef
	 ��������˵����
	 typedef int *intptr;
	 �˺�,��������������intptr p;��int *p;�ȼ� 
	 
	 -----------------------------------------------
	11.2�������
  	1.��
	class Name{
	  	public:
	  		��Ĺ��нӿ�
		private:
			˽�еĳ�Ա����
			˽�е����ݳ�Ա���� 
	}
	
	����һ��ջ�ṹ����Stach;
	const int STACK_SIZE = 100;
	class Stack{
		int top;					//���ݳ�Ա:ջ��ָ�� 
		int buffer[STACK_SIZE];		//���ݳ�Ա:ջ�ռ�
	public:
		Stack(){					//���캯��:��ʼ��topֵ 
			top = 0;
		} 
		int length(){				//��Ա����: ����ջ��Ԫ����Ŀ 
			return top;
		}
		bool push(){				//��Ա����:Ԫ��element��ջ  
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
	
	
	��ĳ�Ա����ͨ�������ⶨ��
	
	�������� ����:: ������(�βα�)
	{
		������ 
	} 
	
	˫ð��"::"���������,��Ҫ������ĳ�Ա�����Ķ���.����,�����ⶨ��ĳ�Ա����pop
	
	bool Stack::pop(void)
	{
		//��Ա����: ��ջ���ɲ�������ջ��Ԫ��
		if(top==0){
			cout<<"Stack is empty!\n";
			return false;
		} else{
			i = buffer[top-1];
			top--;
			return true;
		}
	} 
	
	������ʵ���ĳ�Ա����
	
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
		el.x = 5;		//����,����el�����ݳ�Աx�ǲ��ɼ���
		A *p;
		p = new A;		//����A���һ����̬����,��pָ��ö��� 
		p->f();
		p->g(); 
	}
	
	3)���캯��
	4)��������
	����һ����String, �ַ�������Ŀؼ��ڴ�������ʱ����.
	class String{
		char *str;
	public:
		String(){
			str = NULL;
		}
		String(const char *p){
			str = new char[strlen(p)+1];//������Դ
			strcpy(str,p); 
		}
		~String(){
			delete []str;	//�黹��Դ
			str = NULL; 
		}
		int length(){ return strlen(str); }
	} 
	
	��̬��Ա(static)
	 	C++������static��Ա����. ��̬�����ݳ�Ա�����еĶ�����,Ҳ����˵,��̬���ݳ�Ա
		 �����ڶ���,���������.�뾲̬���ݳ�Ա����,��̬��Ա����Ҳ��������� 
	
	thisָ��
	
	class A{
		public:
			void f();
			void g(int i){x = i;f();}
		private:
			int x,y,z;
	} 
	A a,b;
	
	��Ԫ
	
	...
	class A{
		friend void func();		//��Ԫ���� 
		friend void B;			//��Ԫ�� 
		friend void c::f();		//��Ԫ���Ա����,�ٶ�f()����C�ĳ�Ա���� 
	} 
	
	11.3 �̳����̬
		1.�̳�
		class ������:����Ȩ�� ����
		{
			//����������� 
		} 
		����Ȩ��:public,private,protected
		2.��̬ 
		�麯��(virtual)
		�����˺�����û�к���ʵ�ֵ��麯����֮Ϊ���麯��.���崿�麯���ķ��������麯��������
		�ұߵ����ź��һ��"=0"�ĺ�׺,��:
		virtual void method(void) = 0; 
		
		���д��麯������,��֮Ϊ������ C++�������ó����ഴ�����,��ֻ�ܱ�������̳�
		Ҫ���������,�ͱ��붨�崿�麯��,��ʵ��������һ���ӿڵ����� 
*/ 

