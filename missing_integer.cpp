#include <bits/stdc++.h>
using namespace std;

void findMissing(int arr[], int n)
{
	int i;
	int temp[n + 1];
	for(int i = 0; i <= n; i++){
	temp[i] = 0;
	}

	for(i = 0; i < n; i++){
	temp[arr[i] - 1] = 1;
	}


	int ans;
	for (i = 0; i <= n ; i++) {
		if (temp[i] == 0)
			ans = i + 1;
	}
	cout << ans;
}
int main()
{
	int arr[] = { 1, 3, 7, 5, 6, 2 };
	int n;
    cin>>n;
	findMissing(arr, n);
}
