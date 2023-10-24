#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


 //   float x, res , sum = 0;

	//cout << "Введіть х >> ";
	//cin >> x;
	//cout << endl;

	//for (int k = 1; k < 6; k++)
	//{
	//	sum += k + pow(x, 4);
	//}

	//res = (tan(x) + 5) / sum;

	//cout << "Відповідь: " << res << endl;

	float y, res, mult = 1;

	cout << "Введіть х >> ";
	cin >> y;
	cout << endl;

	for (int i = 1; i < 6; i++)
	{
		mult *= i;
	}

	res = (cos(mult) + 2 * sin(y)) / (pow(y,2) + 5);

	cout << "Відповідь: " << res << endl;
}