#include <iostream>

using namespace std;


int main() {
	int N = 0;
	scanf("%d", &N);
	
	int arr[50][2];
	int rank[50];
	
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
		rank[i] = 1;
	}	
	
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
				rank[i]++;
			}
			else if (arr[i][0] > arr[j][0] && arr[i][1] > arr[j][1]) {
				rank[j]++;
			}
		}
	}
	
	for (int i = 0; i < N; i++) {
		printf("%d ", rank[i]);
	}
}
