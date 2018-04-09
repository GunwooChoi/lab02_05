#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> numbers;

void input() {
	int num;
	while (cin >> num && num != EOF) {
		numbers.push_back(num);
	}
}

bool compare(int a, int b) {
	return a > b;
}

void main() {
	input();
	sort(numbers.begin(), numbers.end(), compare);
	for (auto i : numbers) {
		cout << i << " ";
	}
	cout << endl;
	system("PAUSE");
}