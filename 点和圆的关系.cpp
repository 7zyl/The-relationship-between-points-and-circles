#include<iostream>
#include<string>
#include"Circle.h";
#include"Point.h";

using namespace std;

//����
class Point
{
public:
	void setX(int x)								//����x����
	{
		m_x = x;
	}
	int getX()											//��ȡx����
	{
		return m_x;
	}
	void SetY(int y)								//����y����
	{
		m_y = y;
	}
	int getY()											//��ȡy����
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};

//Բ��
class Circle
{
public:
	void setR(int r)										//���ð뾶
	{
		m_r = r;
	}
	int getR()												//��ȡ�뾶
	{
		return m_r;
	}
	void setCenter(Point center)				//����Բ��
	{
		m_center = center;
	}
	Point getCenter()									//��ȡԲ��
	{
		return m_center;
	}
private:
	int m_r;
	Point m_center;									//���ģ�����һ������Ϊ����ĳ�Ա
};

//�жϵ��Բ�Ĺ�ϵ
void isInCircle(Circle& c, Point& p)
{
	//�㵽Բ�ľ����ƽ��
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//�뾶��ƽ��
	int Rdistance = c.getR() * c.getR();
	if (distance == Rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else if (distance > Rdistance)
	{
		cout << "����Բ��" << endl;
	}
	else
	{
		cout << "����Բ��" << endl;
	}
}

int main()
{
	//����Բ
	Circle c;
	c.setR(10);
	Point center;			//����Բ��
	center.setX(10);
	center.SetY(0);
	c.setCenter(center);

	//������
	Point p;
	p.setX(10);
	p.SetY(10);

	//�жϹ�ϵ
	isInCircle(c, p);

	system("pause");
	return 0;
}