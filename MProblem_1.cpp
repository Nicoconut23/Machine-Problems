#include<iostream>
#include<conio.h>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c, p, pi = 3.14, d, e, f, area, s, apothem, circumcenter;
	char answer = 'Y';

    while(answer =='Y')
    {
        cout << "Enter the three sides of the triangle. " << endl;
        cout << endl;

        cout << "What is the first side of the triangle? ";
        cin >> a;
        cout << "What is the second side of the triangle? ";
        cin >> b;
        cout << "What is the third side of the triangle? ";
        cin >> c;

        cout << endl;

        d = round(acos((b * b + c * c - a * a) / (2 * b * c)) * 180 / pi);
        cout << "Angle a = " << d << " degrees" << endl;

        e = round(acos((c * c + a * a - b * b) / (2 * a * c)) * 180 / pi);
        cout << "Angle b = " << e << " degrees. " << endl;

        f = 180 - (d + e);
        cout << "Angle c = " << f << " degrees. " <<endl;
    {

        if(a == b && b == c && a == c)
        {
		cout << "The triangle is an equilateral triangle. " <<endl;
        }
        if(a == b or b == c or a == c)
        {
		cout << "The triangle is an isosceles triangle. " << endl;
        }
        if(a != b && b != c && c != a)
        {
		cout << "The triangle is a scalene triangle. " << endl;
        }
    }

	p = a + b + c;
	cout << "The perimeter is: " << p << endl;

	s = (a + b + c) / 2;
	area = sqrt(s * (s - a) * (s - b) * (s - c));
	cout << "Area of the triangle is: " << area << endl;
    {

	if(d < 90 && e < 90 && f < 90)
        {
		cout << "The triangle is an acute triangle. " << endl;
        }
    if(d == 90 or e == 90 or f == 90)
        {
		cout << "The triangle is a right triangle. " << endl;
        }
    if(d > 90 or e > 90 or f > 90)
        {
		cout << "The triangle is an obtuse triangle. " << endl;
        }
    }

	apothem = area /0.5 * p;
	cout << "The length of the apothem: " << apothem << endl;

	circumcenter = a * b * c / sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c));
	cout << "The length of the circumcenter: " << circumcenter << endl;

	cout << endl;

	cout << "Do you want to continue? (Y / N) ";
	cin >> answer;

	cout << endl;
    }
getch();
return 0;
}
