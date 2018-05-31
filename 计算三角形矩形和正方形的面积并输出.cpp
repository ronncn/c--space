//计算三角形,矩形和正方形的面积并输出
//说明了继承,抽象类和动态绑定的应用

#include <iostream>
#include <math.h>

using namespace std;
class Figure{								//抽象类 
	public: 
		virtual double getArea() = 0;		//纯虚函数 
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
	11.4 输入与输出流库
	C++使用iostream流库进行输入输出操作.iosstream是一组C++类,可以提供
	无缓冲的(低级)和缓冲的I/O操作
	 
	 iostream.h中预定义了4个全局刘对象:cout,cerr,clog,cin 
	 (1)抽象流基类
	 --ios 流基类
	 (2)输入流类
	 --istream:普通输入流类和用于其他输入流的基类
	 --ifstream:输入文件流类
	 --istream_withassign:用于cin的输入流类
	 --istrstream:输入串流类 
	 (3)输出流类
	 --ostream:普通输出流类和用于其他输出流类的基类
	 --ofstream:输出文件流类
	 --ostream_withassign:用于cout,cerr和clog的流类
	 --ostrstream:输出串流类 
	 (4)输入输出流类
	 --iostream:普通输入输出流类和用于其他输入输出流的基类
	 --fstream:输入输出文件流类
	 --strstream:输入输出串流类
	 --stdiostream:用于标准输入输出文件的输入输出类
	 (5)缓冲流类
	 --streambuf:抽象缓冲流基类
	 --filebuf:用于磁盘文件的缓冲流类
	 --strstreambuf:用于串的缓冲流类
	 --stdiobuf:用于标准输入输出文件的缓冲流类
	 (6)预定义流初始化类
	 --iosstream_inti:预定义流初始化的类 
	
	11.5异常处理
	try{
		//工作代码 
	} 
	catch(Exception1 e){
		//出错处理代码1 
	} 
	catch(Exception2 e) {
		//出错处理代码2 
	}
	finally{
		//其他代码 
	} 
	
	11.6类库
	
	string.h 
*/
