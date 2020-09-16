#include<iostream>
#include<string>
using namespace std;
int main()
{
	std::string d;
	int i = 0;
	int pro = 1;
	do
	{
		d += std::to_string(i);
		i++;
	} while (d.size() <= 1000000);
	{
		for (i = 1; i <= 1000000; i *= 10)
		{
			pro *= d[i] - '0';
		}
	}
	cout << pro << endl;
}