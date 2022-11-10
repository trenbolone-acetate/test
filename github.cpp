#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a, b, c, x;
	double F;
	cout << "GitHub connected to Visual Studio!!!" << endl;
	cout << "Input a: ";
	cin >> a;
	cout << "Input b: ";
	cin >> b;
	cout << "Input c: ";
	cin >> c;
	cout << "Input x: ";
	cin >> x;
	if (c < 0 || x != 0) {
		F = -a * x - c;
	}
	else if (c > 0 && x == 0) {
		F = (static_cast<float>(x) - a) / -c;
	}
	//skibadibapumdada я не понимаю
	else {
		F = (b * x) / (c - a);
	}
	cout << "F equals to: " << F;
}