#include <windows.h>
#include <stdio.h>
int SequentialSearch(int *Array, int n, int key);
int main()
{

	system("pause");
	return 0;
}

int SequentialSearch(int *Array, int length, int key)
{
	int i;
	Array[0] = key;
	i = length + 1;
	while (Array[i] != key)
		i--;
	return i;
}
