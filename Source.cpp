#include <iostream>
#include <string>
#include <list>
#include <conio.h>

using namespace std;

int main() {

	string southString;
	string northString;
	list<char> sourh;
	list<char> north;
	int sum=0;

	cin >> southString;
	cin >> northString;

	for (int i = 0; i < southString.length(); i++) {
		sourh.push_back(southString[i]);
	}	

	for (int i = 0; i < northString.length(); i++) {
		north.push_back(northString[i]);
	}	

	while (sourh.size() != 0 || north.size() != 0) 
	{
		if (sourh.size() == 0 || north.size() == 0) 
		{
			sum = sum + sourh.size() + north.size();
			break;
		}

		if (sourh.front() == 'L' && north.front() == 'L') 
		{
			sum++;
			sourh.pop_front();
			north.pop_front();
		}
		
		else
		{
			if (sourh.front() == 'L' || north.front() == 'L')
			{
				sum++;
				if (sourh.front() == 'L')
				{
					north.pop_front();
				}
				else
				{
					north.pop_front();
				}
			}
			else
			{
				if (sourh.front() != 'L' && north.front() != 'L')
				{
					sum++;
					sourh.pop_front();
					north.pop_front();
				}
			}
		}
	}

	cout <<endl << sum;
	system("pause");
	return 0;
}