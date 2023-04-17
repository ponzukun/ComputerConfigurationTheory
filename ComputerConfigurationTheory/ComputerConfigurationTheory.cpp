#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

int main(void)
{
	int A[] = { 3,5,1,10,9,2,6,10,8,1 };
	int i, n;
	int max, min;
	max = A[0];
	min = A[0];
	n = sizeof A / sizeof A[0];
	vector<int> max_indexes;
	vector<int> min_indexes;

	cout << "入力値";
	for (i = 0; i <= n - 1; i++) cout << "A[" << i << "] = " << A[i];
	cout << endl;

	for (i = 1; i <= n - 1; i++) {
		if (A[i] > max) max = A[i];
		if (A[i] < min) min = A[i];
	}

	for (i = 1; i <= n - 1; i++) {
		if (A[i] == max) max_indexes.push_back(i);
		if (A[i] == min) min_indexes.push_back(i);
	}

	cout << "最大値=" << max << ", 最小値=" << min;
	cout << endl;
	cout << "最大値インデックス ";
	for (i = 0; i < max_indexes.size(); i++) cout << max_indexes[i] << ", ";
	cout << endl;
	cout << "最小値インデックス ";
	for (i = 0; i < min_indexes.size(); i++) cout << min_indexes[i] << ", ";
}
