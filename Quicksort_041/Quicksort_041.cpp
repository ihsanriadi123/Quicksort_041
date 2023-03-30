#include <iostream>
using namespace std;

//array of integersto hold value
int arr[20];
int cmp_cout = 0; //number of comparasion
int mov_cout = 0; //number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nmaksimum panjang array adalah 20" << endl;
	}

	cout << "\n==================" << endl;
	cout << "\nenter array element" << endl;
	cout << "\n==================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}
