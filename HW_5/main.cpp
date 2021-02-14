#include <iostream>
using namespace std;

int main()
{  

//TODO:
//	1. Объявить массив на 5 элементов;
//	2. Ввести элементы массива с клавиатуры;
//	3. Вывести элементы массива на экран в прямом порядке;
//	4. Вывести элементы массива на экран в оратном порядке;
//	5. Посчитать сумму элементов массива и вывести ее на экран;
//	6. Посчитать среднее арифметическое элементов массива и вывести его на экран;
//	7. Найти минимальное значение в массиве и вывести его на экран;
//	8. Найти максимальное значение в массиве и вывести его на экран;
	const int n=5;
	//cout << "Enter number of elements in array" << endl; cin >> n;

	int arr[n]; // = { 1,2,3,4,5 };
	cout << "Enter 5 elements of the array"<< endl;
	for (int i = 0; i < n; i++) 
	{
		cin >> arr[i]; 
	}
	cout << "Derect order of array elements"<< endl;
	for (int x : arr) { cout << x << "\t"; }
	
	cout << endl<< "Reverse order of array elemets"<< endl;

	for (int i = n - 1; i >= 0; i--) { cout << arr[i] << "\t"; }

	
	int sum = 0;
	for (int x : arr) { sum += x;}
	cout << endl << "The sum of array elemets: " << sum << endl;
	cout << endl << "The mean of array elemets: " << (float)sum/n << endl;
	int min=arr[0], max = 0;
	for (int x : arr) if (x>max) max = x; 
	for (int x : arr) if (x < min) min = x;
	cout << endl << "The max and min of array elemets: " << max << "\t" << min<< endl;

	return 0;
//change for commit
}
