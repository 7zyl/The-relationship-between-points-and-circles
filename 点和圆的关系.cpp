#include<iostream>
#include<string>
#include"Circle.h";
#include"Point.h";

using namespace std;



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
