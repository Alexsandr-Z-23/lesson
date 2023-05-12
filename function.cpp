#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
#include <cstring>
using namespace std;
void printINT(int arr[], int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << "\n";
	}

}
void printDOUBLE(double arr[], int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << "\t";
	}

}
void printCHAR(char arr[], int a)
{
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << "\t";
	}

}
int poiskminINT(int arr[], int a)
{
	int temp = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
double poiskminDOUBLE(double arr[], int a)
{
	double temp = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
char poiskminCHAR(char arr[], int a)
{
	char temp = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (arr[i] < temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
int poiskmaxINT(int arr[], int a)
{
	int temp = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
double poiskmaxDOUBLE(double arr[], int a)
{
	double temp = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
char poiskmaxCHAR(char arr[], int a)
{
	char temp = arr[0];
	for (int i = 0; i < a; i++)
	{
		if (arr[i] > temp)
		{
			temp = arr[i];
		}
	}
	return temp;
}
void fillCHAR(char arr[], int b)
{
	for (int i = 0; i < b; i++)
	{
		arr[i] = rand() % (126 - 33) + 33;
	}
}
void fillINT(int arr[], int b)
{
	for (int i = 0; i < b; i++)
	{
		arr[i] = rand() % (126 - 33) + 33;
	}
}
void fillDOUBLE(double arr[], int b)
{
	for (int i = 0; i < b; i++)
	{
		arr[i] = rand() % (126 - 33) / 33.0;
	}
}
void redactINT(int arr[], int a, int b, int c)
{
	arr[b] = c;
}
void redactDOUBLE(double arr[], int b, double c)
{
	arr[b] = c;
}
void redactCHAR(char arr[], int b, char c)
{
	arr[b] = c;
}
void sortINT(int arr[], int a)
{
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void sortDOUBLE(double arr[], int a)
{
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}
void sortCHAR(char arr[], int a)
{
	for (int i = 0; i < a - 1; i++)
	{
		for (int j = 0; j < a - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}