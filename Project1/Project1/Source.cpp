#include<iostream>
#include<iomanip>

using namespace std;

class Array
{
private:
	int size;
	int length = 0;
	int* items;

public:

	Array(int sizo)
	{
		size = sizo;
		items = new int[size];
	}

	void fill(int sizo)
	{
		int num;
		for (int i = 0;i < sizo;i++)
		{
			cin >> num;
			items[i] = num;
			length++;
		}
	}

	void display()
	{
		for (int i = 0;i < length;i++)
		{
			cout << items[i]<<" ";
		}
		cout << endl;
	}

	void revers()
	{
		int* rev = items;
		items = new int[size];
		int revNum = size;
		for (int i = 0;i < length;i++)
		{
			items[i] = rev[--revNum];
		}

	}
};

int main()
{
	
	int arrsize;
	cin >> arrsize;
	Array arr(arrsize);
	arr.fill(arrsize);
	arr.revers();
	arr.display();

	return 0;
}