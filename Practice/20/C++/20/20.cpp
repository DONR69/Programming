#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int money, n, k, b = 0;

	cin >> money >> n;

	vector<string> drinks(n);
	vector<int> price(n);
	vector<int> v(n);
	vector<int> rez(n);
	vector<int> liter(n);
	vector<int> arr(n);

	for (int i = 0; i < n; i++)
	{
		cin >> drinks[i] >> price[i] >> v[i];
		rez[i] = money / price[i];
		liter[i] = rez[i] * v[i];
		if (liter[i] == 0) b++;
	}

	if (b == n) {
		cout << -1 << endl;
		return(0);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (liter[i] > liter[j]) k = i;
		}
	}

	cout << drinks[k] << " " << rez[k] << " " << endl << liter[k] << endl << money - (price[k] * rez[k]) << endl;

	return(0);
}