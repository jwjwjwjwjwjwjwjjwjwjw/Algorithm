#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(const string &a, const  string &b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else {
		return a.size() < b.size();
	}
}

int main() {
	
	int N;
	cin >> N;
	vector<string> str;
	
	
	for (int i = 0; i<N; i++) {
		string t;
		cin >> t;
		str.push_back(t);
	}

	sort(str.begin(), str.end(), compare);
	
	cout << str[0] << endl;
	for (int i = 1; i <= N - 1; i++) {
		if (str[i-1] == str[i]) continue;
		cout << str[i] << endl;
	}
}
