#include <iostream>;
#include <sstream>;
#include <windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string a, b, c;
	int d, f;
	cout << "какое у тебя имя?" << endl;
	cin >> a;
	cout << "в какой стране ты живешь?" << endl;
	cin >> b;
	cout << "в каком городе ты живешь?" << endl;
	cin >> c;
	cout << "сколько тебе лет?" << endl;
	cin >> d;
	f = 2023 - d;

	cout << "Уважаемый " << a << "!" << endl << "На сегодняшний день Вы проживаете в стране " << b << ", в городе " << c << ", и вы родились в " << f << " году.";

}
