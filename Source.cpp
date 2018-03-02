#include<iostream> 
#include<cmath>
#include<string>
#include <algorithm>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
	int size, arr[26] = { 0 };
	string s;
	cin >> size >> s;
	for (int i = 0; i < size; i++)
	{
		if (s[i] >= 'a'&&s[i] <= 'z')
			arr[s[i] - 'a']++;
		else if (s[i] >= 'A'&&s[i] <= 'Z')
			arr[s[i] - 'A']++;
		}
	for (int i = 0; i < 26; i++)
	{
		if (arr[i] == 0)
		{
			cout << "NO" << endl;
			exit(0);
		}
	}

	cout << "YES" << endl;

	return 0;
}
