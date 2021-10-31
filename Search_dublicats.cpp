#include <iostream>
#include <time.h>
#include <map>

using namespace std;

int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "rus");

	int n;
	cout << ("Вход: \n");
	cin >> n;

	int count = 0;
	map<int, int> m;

	int* arr = new int[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 5 + 1;
		cout << arr[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < n; i++)
		m[arr[i]]++;
	
	for (auto it = m.begin(); it != m.end(); ++it)
	{
		cout << "(" << it->first << ", " << it->second << ")" << endl;
		if (it->second == 1)
			continue;
		else
			count += it->second - 1;
	}
	
	cout << "Выход: " << count << "\n";

	delete[]arr;

	return 0;
}

