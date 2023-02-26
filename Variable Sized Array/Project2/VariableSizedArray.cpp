#include<iostream>
#include<iomanip>
#include <vector>


using namespace std;


int main()
{
	int n,q;
	cin >> n;
	cin >> q;
	
	int** arr = new int* [n];
	int k;

	for (int i = 0;i < n;i++)
	{
		cin >> k;
		arr[i] = new int[k];

		for (int j = 0;j < k;j++)
		{
			cin >> arr[i][j];
		}
	}
	int index1, index2;

	int que = 0;
	for (;que < q;que++)
	{
		cin >> index1 >> index2;
		cout << arr[index1][index2] << endl;
		/*if (que == (q - 1))
			break;*/
	}

	/*for (int i = 0;i < n;i++)
	{
		
		

		for (int j = 0;j < k;j++)
		{
			cout<< arr[i][j];
		}

		cout << endl;
	}*/

	
	
	return 0;
}