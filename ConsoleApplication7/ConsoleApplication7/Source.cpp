#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, char* argv[])
{
	int n, m, x;
	unordered_map<int, int> a;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		a[x]++;
	}

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> x;
		if (i) {
			cout << " ";
		}
		cout << a[x];
	}
	cout << endl;
	system("pause");
	return 0;
}