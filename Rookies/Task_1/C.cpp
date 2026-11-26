
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int rate[100];
	for (int i = 0; i < n; i++)
	{
		cin >> rate[i];
	}
	for (int i = 0; i < n; i++)
	{
		if (rate[i] >= 1900)
		{
			cout << "Devision 1\n";
		}
		else if (rate[i] >= 1600)
		{
			cout << "Devision 2 \n";
		}
		else if (rate[i] >= 1400)
		{
			cout << "Devision 3\n";

		}
		else
		{
			cout << "Devision 4\n";

		}

	}

}

