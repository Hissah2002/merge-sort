#include <iostream>
using namespace std;

void merge(int* arr, int low, int high, int mid)
{
	int i = low;
	int z = low;
	int j = mid + 1;
	int c[100];

	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
		{
			c[z] = arr[i];
			z++;
			i++;
		}
		else
		{
			c[z] = arr[j];
			z++;
			j++;
		}
	}
	while (i <= mid)
	{
		c[z] = arr[i];
		z++;
		i++;
	}
	while (j <= high)
	{
		c[z] = arr[j];
		z++;
		j++;
	}
	for (i = low; i < z; i++)
	{
		arr[i] = c[i];
	}

}

void mergeSort(int* arr, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, high, mid);
	}
}
int main()
{

	int arr[100], n;
	cout << "Enter number of elemnt to be sorted:  ";
	cin >> n;
	cout << "\nEnter array elements: ";

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	mergeSort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}#include <iostream>
using namespace std;

void merge(int* arr, int low, int high, int mid)
{
	int i = low;
	int z = low;
	int j = mid + 1;
	int c[100];

	while (i <= mid && j <= high)
	{
		if (arr[i] < arr[j])
		{
			c[z] = arr[i];
			z++;
			i++;
		}
		else
		{
			c[z] = arr[j];
			z++;
			j++;
		}
	}
	while (i <= mid)
	{
		c[z] = arr[i];
		z++;
		i++;
	}
	while (j <= high)
	{
		c[z] = arr[j];
		z++;
		j++;
	}
	for (i = low; i < z; i++)
	{
		arr[i] = c[i];
	}

}

void mergeSort(int* arr, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		mergeSort(arr, low, mid);
		mergeSort(arr, mid + 1, high);
		merge(arr, low, high, mid);
	}
}
int main()
{

	int arr[100], n;
	cout << "Enter number of elemnt to be sorted:  ";
	cin >> n;
	cout << "\nEnter array elements: ";
	
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	cout << "\nThe elements before sorting:  ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	mergeSort(arr, 0, n - 1);

	cout << "\nThe elements after sorting:  ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}