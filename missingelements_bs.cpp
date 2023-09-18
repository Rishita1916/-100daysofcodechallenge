#include <iostream>
using namespace std;

int findmissing(int ar[], int N)
{
	int l = 0, r = N - 1;
	while (l <= r) {

		int mid = (l + r) / 2;
		if (ar[mid] != mid + 1 && ar[mid - 1] == mid)
			return mid + 1;
		if (ar[mid] != mid + 1)
			r = mid - 1;
		else
			l = mid + 1;
	}
	return -1;
}


int main()
{
	int arr[] = {1, 2, 3, 4, 5, 7, 8};
	int N = sizeof(arr)/sizeof(arr[0]);
	cout << findmissing(arr, N);
	return 0;
}
