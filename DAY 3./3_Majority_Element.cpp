#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	unordered_map<int, int> map;

	for(int i=0; i<n; i++)
		if(++map[arr[i]] > n/2)
			return arr[i];

	return -1;
}
