#include<iostream>
#include<string>
#include"Circle.h";
#include"Point.h";

using namespace std;

//点类
class Point
{
public:
	void setX(int x)								//设置x坐标
	{
		m_x = x;
	}
	int getX()											//获取x坐标
	{
		return m_x;
	}
	void SetY(int y)								//设置y坐标
	{
		m_y = y;
	}
	int getY()											//获取y坐标
	{
		return m_y;
	}
private:
	int m_x;
	int m_y;
};

//圆类
class Circle
{
public:
	void setR(int r)										//设置半径
	{
		m_r = r;
	}
	int getR()												//获取半径
	{
		return m_r;
	}
	void setCenter(Point center)				//设置圆心
	{
		m_center = center;
	}
	Point getCenter()									//获取圆心
	{
		return m_center;
	}
private:
	int m_r;
	Point m_center;									//核心，让另一个类作为本类的成员
};

//判断点和圆的关系
void isInCircle(Circle& c, Point& p)
{
	//点到圆心距离的平方
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	//半径的平方
	int Rdistance = c.getR() * c.getR();
	if (distance == Rdistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance > Rdistance)
	{
		cout << "点在圆外" << endl;
	}
	else
	{
		cout << "点在圆内" << endl;
	}
}

int main()
{
	//创建圆
	Circle c;
	c.setR(10);
	Point center;			//创建圆心
	center.setX(10);
	center.SetY(0);
	c.setCenter(center);

	//创建点
	Point p;
	p.setX(10);
	p.SetY(10);

	//判断关系
	isInCircle(c, p);

	system("pause");
	return 0;
}