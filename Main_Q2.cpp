#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point()
	{
		x = 0;
		y = 0;
	}

	void setx(int x1)
	{
		x = x1;
	}

	int getx()
	{
		return x;
	}

	void sety(int y1)
	{
		y = y1;
	}

	int gety()
	{
		return y;
	}

	int dist(int v, int w)
	{
		return sqrt((x - v) * (x - v) + (y - w) * (y - w));
	}
};

int main()
{
	Point p1;
	p1.setx(12);
	p1.sety(10);
	cout << "Distance is : " << p1.dist(8, 9);
}