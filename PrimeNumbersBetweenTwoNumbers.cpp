//cpp program to print prime nymbers between two given numbers
//Author:Neetu Kumari
//Date Modified:17/10/2021

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "enter first number:" << endl;
	cin >> a;
	cout << "enter second number:" << endl;
	cin >> b;
	cout<<"prime numbers between "<<a<<" and "<<b<<" are:"<<endl;

	for (int num = a; num <= b; num++)
	{
		int i;
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)          //check if the no is prime
			{
				break;
			}
		}

		if (i == num)
		{
			
			cout << num << endl;
		}
	}
}
