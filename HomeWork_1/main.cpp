//  ������� ����������� ���������
// -------------------------------
// �������:
// �������� ���������, ������� ������ ���������� ���������.
// ������������ ������ (� ����������) ��� �������������� ������������ a, b, c.
// ��������� ������� ��� ������� ��������� (���, ����), "������� ���",
// ���� �� ��� ��� "���������� ����� �������",
// ���� �������� ����� �������� x (a = 0, b = 0, c = 0).
// ���������� ��� �������� �������� ������.


#include <iostream>
#include <cmath>

using namespace std;

void solve_equation(double a, double b, double c) {
  // a*x^2 + b*x + c = 0

  double d;

  d = b*b - 4*a*c;
  cout << "d = b*b - 4*a*c" << endl;
  cout << "d = " << b*b - 4*a*c << endl;

  if (d>0){
    cout << "x1 = " << (-b - sqrt(d)) / (2 * a) << endl;
    cout << "x2 = " << (-b + sqrt(d)) / (2 * a) << endl;
    return;
  } else if (d == 0){
    cout << "x = " << (-b) / (2 * a) << endl;
    return;
  } else {
    cout << "no solution..." << endl;
    return;
  }
}


int main()
{
  // ������������ ����������� ���������
  double a, b, c;
  // a*x^2 + b*x + c = 0

  cout << "a = ";
  cin >> a;
  cout << "b = ";
  cin >> b;
  cout << "c = ";
  cin >> c;
  cout << endl;

  solve_equation(a, b, c);

  return 0;
}
