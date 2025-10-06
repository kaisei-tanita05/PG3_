#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {

	vector<int> a = { -10,321,-3,50,1 };

	cout << "全要素を表示します" << endl;

	//全要素を表示
	for (int i = 0; i < a.size(); i++) 
	{
		cout << a[i] << endl;
	}

	//昇順に並べ替え
	sort(a.begin(), a.end());

	cout << "全要素を表示します" << endl;

	//全要素を表示
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	vector<int>::iterator it;

	it = find(a.begin(), a.end(), -3);

	if (it != a.end()) {
		cout << *it << endl;
	}

	return 0;
}