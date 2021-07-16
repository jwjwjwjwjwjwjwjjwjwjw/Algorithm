
#include <iostream>

using namespace std;



int factorial(int n) {
	if (n <= 1) return 1;
	return n*factorial(n-1);
	
}

int main() {
	
	int N = 0;
	scanf("%d", &N);
	
	int result = factorial(N);
	
	printf("%d \n", result);
	
	return 0;
}
