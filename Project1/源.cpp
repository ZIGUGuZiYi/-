#include<iostream>
using namespace std;
int main()
{
	double r, girth, area; //˵������
	const double PI = 3.1415;
	cout << "Please input radius:\n";
	cin >> r; //����뾶
	girth = 2 * PI * r; //�����ܳ�
	area = PI * r * r; //�������
	cout << "radius = " << r << endl; //�������
	cout << "girth = " << girth << endl;
	cout << "area = " << area << endl;
}
