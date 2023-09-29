#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "введите два числа: ";
	cin >> a >> b;

	cout << "сумма введенных чисел a и b = " << (a + b) << endl;

	cout << "разность введенных чисел a и b = " << a - b << endl;

	cout << "произведение введенных чисел a и b = " << a * b << endl;

	cout << "среднее арифметическое введенных чисел a и b = " << (a + b) / 2 << endl;
	if (a < 0)
		a = -a;
	if (b < 0)
		b = -b;
	int c = a, d = b;
	if (a > b)
		c = a;
	else
		c = b;
	if (a < b)
		d = a;
	else
		d = b;

	cout << "разность максимального и минимального = " << (c - d) << endl;


}