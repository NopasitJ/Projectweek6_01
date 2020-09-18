#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::string d;
	int i = 0;
	int pro = 1;
	int range;
	cout << "Enter range : ";
	cin >> range; //range is 100,000 from question
	do
	{
		d += std::to_string(i);
		i++;
	} while (d.size() <= range);
	{
		for (i = 1; i <= range; i *= 10)
		{
			pro *= d[i] - '0';
		}
	}
	cout << pro << endl;
}