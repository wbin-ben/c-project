#include <iostream>
using namespace std;
class Point{
	private:
		double x, y;
	public:
		Point(){};

		Point(double a, double b)
		{
			x = a;
			y = b;
		}

		void Setxy(double a, double b)
		{
			x =a;
			y = b;
		}

		void Dispaly()
		{
			cout << x << "\t" << y << endl;
		}	
};
int main()
{
	Point a;
	Point b(18.5, 10.6);
	a.Setxy(10.6, 18.5);
	a.Dispaly();
	b.Dispaly();
}