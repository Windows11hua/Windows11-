#include <iostream>
using namespace std;

class xxx
{
private:							//2��˽������
	int length;
	int width;
public:								//4�����з���
	void setlength(int l);			//��Ա����ԭ�ͣ����þ��γ��ȣ�
	void setwidth(int w);			//��Ա�������ͣ����þ��ο�ȣ�
	int getarea();
	int getperimeter();
};

//�����⿪ʼ���г�Ա��������
void xxx::setlength(int l)
{
	length = l;						//��Ա������˽�������������
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
	cout << "������εĳ����" << endl;
	cin >> a >> a1 >> b >> b1;
	xxx r1, r2;						//����xxx�Ķ���r
	r1.setlength(a);
	r1.setwidth(a1);
	r2.setlength(b);
	r2.setwidth(b1);
	cout << "����1�������" << r1.getarea() << endl;
	cout << "����1���ܳ���" << r1.getperimeter() << endl;
	cout << "����2�������" << r2.getarea() << endl;
	cout << "����2���ܳ���" << r2.getperimeter() << endl;
	return 0;
}