#include <iostream>
using namespace std;

class xxx
{
private:							//2个私有属性
	int length;
	int width;
public:								//4个公有方法
	void setlength(int l);			//成员函数原型（设置矩形长度）
	void setwidth(int w);			//成员函数类型（设置矩形宽度）
	int getarea();
	int getperimeter();
};

//在类外开始进行成员函数定义
void xxx::setlength(int l)
{
	length = l;						//成员函数中私有属性允许访问
}
void xxx::setwidth(int w)
{
	width = w;
}
int xxx::getarea()
{
	return length * width;
}
int xxx::getperimeter()
{
	return 2 * (length + width);
}

int main()
{
	int a, b, a1, b1;
	cout << "输入矩形的长与宽" << endl;
	cin >> a >> a1 >> b >> b1;
	xxx r1, r2;						//定义xxx的对象r
	r1.setlength(a);
	r1.setwidth(a1);
	r2.setlength(b);
	r2.setwidth(b1);
	cout << "矩形1的面积：" << r1.getarea() << endl;
	cout << "矩形1的周长：" << r1.getperimeter() << endl;
	cout << "矩形2的面积：" << r2.getarea() << endl;
	cout << "矩形2的周长：" << r2.getperimeter() << endl;
	return 0;
}