#include <iostream>
using namespace std;

int main()
{  

//TODO:
//	1. �������� ������ �� 5 ���������;
//	2. ������ �������� ������� � ����������;
//	3. ������� �������� ������� �� ����� � ������ �������;
//	4. ������� �������� ������� �� ����� � ������� �������;
//	5. ��������� ����� ��������� ������� � ������� �� �� �����;
//	6. ��������� ������� �������������� ��������� ������� � ������� ��� �� �����;
//	7. ����� ����������� �������� � ������� � ������� ��� �� �����;
//	8. ����� ������������ �������� � ������� � ������� ��� �� �����;
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
