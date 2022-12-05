#include <iostream>
using namespace std;

void sort(int arr[],int size)
{
  int tmp = 0;
  for(int i = 0;i < size -1 ;i++)
  {
	for(int j = 0; j < size -i-1;j++)
	{
		if(arr[j] > arr[j+1])
		{
			tmp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = tmp;
		}

	}
  }
}

int main()
{

	int arr[] = {12,4,89,43,21,78};
	int size = sizeof(arr)/sizeof(int);
	sort(arr,size);
	return 0;
}
