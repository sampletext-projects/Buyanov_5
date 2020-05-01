#include <iostream>

using namespace std;

int main()
{
	setlocale(0, "");
	cout << "Выполнил студент группы УТН-113 Рябов А.Д \n";
	cout << "Программа для расчёта стоимости товара\n";
	cout << "Введите стоимость 1 кг продукта: ";
	double price;
	cin >> price;
	for (double grams = 50; grams < 1000; grams += 50)
	{
		double cost = grams / 1000 * price;
		cout << grams << "г стоят " << cost << "р\n";
	}

	for (double grams = 1000; grams <= 10000; grams += 1000)
	{
		double cost = grams / 1000 * price;
		cout << grams << "г стоят " << cost << "р\n";
	}
	system("pause");
}
