// Array1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
using namespace stdext;

int main()
{
	int a[5];
	double b[5];
	char c[5];
	string basicString = "Hello World!";

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	a[3] = 4;
	a[4] = 5;

	b[0] = 1.1;
	b[1] = 2.2;
	b[2] = 3.3;
	b[3] = 4.4;
	b[4] = 5.5;

	c[0] = 'h';
	c[1] = 'e';
	c[2] = 'l';
	c[3] = 'l';
	c[4] = 'l';
	int sum = 0;
	try
	{
		cout << "size of sum: " << sizeof(a) << endl;
		for (int i = 0; i < 5; i++)
		{
			sum += a[i];
			cout << "The number is " << a[i] << endl;
			
			
		}
		cout << "The sum is " << sum<< endl;
		cout << "size of sum: " << sizeof(sum) << endl;
	}
	catch (const char exception)
	{
		cout << "Error...Error! Malfunction! Error Code" << std::tolower(exception) << endl;
	}

	catch (int exception)
	{
		cout << "Int Error Message" << std::to_string(exception) << endl;
	}
	catch (string exception)
	{
		cout << "String Error Message: " << exception << endl;
	}
	catch (out_of_range exception)
	{
		cout << "OUt of bounds Message:" << exception.what() << endl;
	}
    return 0;
	
}
