#include<iostream>
#include<cmath>
using namespace std;

void hanoi(int n, int from, int to) {
	int mid = 6 - from - to;
	
	if (n == 1) {
		printf("%d %d\n", from, to);
		return;
	}
	
	hanoi(n-1, from, mid);
	//밑바닥을 제일 오른쪽에 놓는 부분 
	printf("%d %d\n", from, to); //hanoi(1, from, to); 
	hanoi(n-1, mid, to);
} 



int main()
{
	int N = 0;
	scanf("%d", &N);
	
	printf("%d \n", (int)pow(2,N) -1) ;
	hanoi(N, 1, 3);
	
	return 0;
}
