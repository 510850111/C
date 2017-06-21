#include <windows.h>
#include <stdio.h>
int BinarySearch(int *Array, int n, int key);//二分法查找
int main()
{

	system("pause");
	return 0;
}

int BinarySearch(int *Array, int n, int key)
{
	int low = 1;
	int high = n,;
	int mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key <= Array[mid])
			high = mid - 1;
		else if (key >= Array[mid])
			low = mid + 1;
		else
			return mid;
	}
	return 0;


}
