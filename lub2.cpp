#include <iostream>;
#include <sstream>;

using namespace std;

int main() {
	string a, b, c;
	int d, f;
	cout << "����� � ���� ���?" << endl;
	cin >> a;
	cout << "� ����� ������ �� ������?" << endl;
	cin >> b;
	cout << "� ����� ������ �� ������?" << endl;
	cin >> c;
	cout << "������� ���� ���?" << endl;
	cin >> d;
	f = 2023 - d;

	cout << "��������� " << a << "!" << endl << "�� ����������� ���� �� ���������� � ������ " << b << ", � ������ " << c << ", � �� �������� � " << f << " ����.";

}