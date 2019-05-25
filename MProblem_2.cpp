#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main()
{
	char figure, ans = 'Y';
	double r, h, l, w, sa, v, la, ba , pi = 3.14;
	cout << "Geometric Calculator " << endl;
	cout << "C- Calculates the Volume, Lateral Area, Base Area and Surface area of a Cone. " << endl;
	cout << "P- Calculates the Volume, Lateral Area, Base Area and Surface area of a Pyramid. " << endl;
	cout << "S- Calculates the Volume and Surface area of a Sphere. " << endl;
	cout << endl;

	while(ans == 'Y')
	{
		cout << "Enter the geometric figure: ";
		cin >> figure;

        switch(figure)
		{
			case 'C':
			case 'c':
				cout << "Enter the radius of the cone: ";
				cin >> r;

				cout << "Enter the height of the cone: ";
				cin >> h;

				v = 0.33 * pi * r * r * h;
				sa = pi * r * (sqrt(r * r + h * h) + r);
				la = pi * r * sqrt(h * h + r * r);
				ba = pi * r * r;

				cout << "The volume is: " << v << endl;
				cout << "The surface area is: " << sa << endl;
				cout << "The lateral area is: " << la << endl;
				cout << "The base area is: " << ba << endl;
				cout << endl;
				break;

			case 'P':
			case 'p':
				cout << "Enter the length of the pyramid: ";
				cin >> l;
				cout << "Enter the width of the pyramid: ";
				cin >> w;
				cout << "Enter the height of the pyramid: ";
				cin >> h;

				v = (l * w * h) / 3;
				la = l * sqrt(w / 2 * w / 2) + h * h + w * sqrt(l / 2 * l / 2 + h * h);
				sa = l * w + l * sqrt(w / 2 * w / 2) + h * h + w * sqrt(l / 2 * l / 2 + h * h);
				ba = l * w;

				cout << "The volume is: " << v << endl;
				cout << "The surface area is: " << sa << endl;
				cout << "The lateral area is: " << la << endl;
				cout << "The base area is: " << ba << endl;
				cout << endl;
				break;

			case 'S':
			case 's':
				cout << "Enter the radius of the sphere: ";
				cin >> r;

				v = 1.33 * pi * r * r * r;
				sa = 4 * pi * r * r;

				cout << "The volume is: " << v << endl;
				cout << "The surface area is: " << sa << endl;
				cout << endl;
				break;

			default:
				cout << "You may only enter: C, P, S, c, p, s ";
				ans = 'N';
	}
}
getch();
return 0;
}
