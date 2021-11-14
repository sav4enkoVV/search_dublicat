#include <iostream>
#include <time.h>
#include <map>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	int n;
	cout << ("Вход: ");
	cin >> n;

	int count = 0;
	map<int, int> m;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		m[arr[i]]++;
	
	for (auto it = m.begin(); it != m.end(); ++it)
	{
		if (it->second == 1)
			continue;
		else
			count += it->second - 1;
	}
	
	cout << "Выход: " << count << "\n";

	delete[]arr;

	return 0;
}

