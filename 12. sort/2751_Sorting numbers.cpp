#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	
	int N;
	cin >> N;
	vector<int> v;
	
	
	for (int i = 0; i<N; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}

	sort(v.begin(), v.end());
	
	for (int i = 0; i < N; i++) {
		cout << v[i] << "\n";
	}
}
