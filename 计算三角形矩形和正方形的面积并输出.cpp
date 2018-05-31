//����������,���κ������ε���������
//˵���˼̳�,������Ͷ�̬�󶨵�Ӧ��

#include <iostream>
#include <math.h>

using namespace std;
class Figure{								//������ 
	public: 
		virtual double getArea() = 0;		//���麯�� 
};

class Rectangle:public Figure{
	protected:
		double height;
		double width;
	public:
		Rectangle(){};
		Rectangle(double height, double width){
			this->height = height;
			this->width = width;
		} 
		double getArea(){
			return height*width;
		}
};

class Square:public Rectangle{
	public:
		Square(double width){
			height = this->width = width;
		}
};

class Triangle:public Figure{
	double la;
	double lb;
	double lc;
	public:
		Triangle(double la,double lb,double lc){
			this->la = la;
			this->lb = lb;
			this->lc = lc;
		}
		double getArea(){
			double s = (la+lb+lc)/2.0;
			return sqrt(s*(s-la)*(s-lb)*(s-lc));
		}
};

int main(){
	Figure *figures[3] = {
		new Triangle(2,3,3),new Rectangle(5,8),new Square(5)
	};
	for(int i = 0;i<3;i++){
		cout<<"figures["<<i<<"]area = "<<(figures[i])->getArea()<<endl; 
	}
}
/*
	11.4 �������������
	C++ʹ��iostream������������������.iosstream��һ��C++��,�����ṩ
	�޻����(�ͼ�)�ͻ����I/O����
	 
	 iostream.h��Ԥ������4��ȫ��������:cout,cerr,clog,cin 
	 (1)����������
	 --ios ������
	 (2)��������
	 --istream:��ͨ������������������������Ļ���
	 --ifstream:�����ļ�����
	 --istream_withassign:����cin����������
	 --istrstream:���봮���� 
	 (3)�������
	 --ostream:��ͨ�����������������������Ļ���
	 --ofstream:����ļ�����
	 --ostream_withassign:����cout,cerr��clog������
	 --ostrstream:��������� 
	 (4)�����������
	 --iostream:��ͨ������������������������������Ļ���
	 --fstream:��������ļ�����
	 --strstream:�������������
	 --stdiostream:���ڱ�׼��������ļ������������
	 (5)��������
	 --streambuf:���󻺳�������
	 --filebuf:���ڴ����ļ��Ļ�������
	 --strstreambuf:���ڴ��Ļ�������
	 --stdiobuf:���ڱ�׼��������ļ��Ļ�������
	 (6)Ԥ��������ʼ����
	 --iosstream_inti:Ԥ��������ʼ������ 
	
	11.5�쳣����
	try{
		//�������� 
	} 
	catch(Exception1 e){
		//���������1 
	} 
	catch(Exception2 e) {
		//���������2 
	}
	finally{
		//�������� 
	} 
	
	11.6���
	
	string.h 
*/
