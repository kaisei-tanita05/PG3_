#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <vector>
#include <list>

using namespace std;

int main() {

#pragma region 不必要
	//SetConsoleOutputCP(65001);
	/*char str[] = "こんにちは。本日はお日柄も良く";
		printf("%s", str);*/

	//vector<int> b;
	//system("pause");

	////40を末尾に追加{10,20,30,40}

	//b.push_back(40);


	////末尾の要素を削除{10,20,30}

	//b.pop_back();

	////float型の可変長配列 c (要素数:3)
	//vector<float>c = { 0.0f,1.0f,2.0f };

	////添え字の要素を表示(1.0)
	//printf("%f", c[1]);

	////添え字1の要素に-1.5を代入
	//c[1] = -1.5f;

	////添え字1の要素を表示(-1.5)
	//printf("%f", c[1]);

	////int型の可変長配列 d (要素数:0)
	//vector<int> d;
	//
	////要素数を10個に変更(0で初期化される)
	//d.resize(10);

	////要素数を取得
	//int size = d.size();

	////全要素数を表示
	//for (int i = 0; i < size; i++) {
	//	printf("%d", d[i]);
	//}

	//vector<int> e = { 1,2,3 };

	////int型の可変長配列用のイテレーター
	//vector<int>::iterator it;

	////eの先頭要素を指す
	//it = e.begin();

	////itが指している要素を表示
	//cout << *it << endl;

	////次の要素に移動
	//it++;

	////itが指している要素を表示
	//cout << *it << endl;

	////int型の可変長配列e(要素数:3)
	//vector<int>g = { 1,2,3 };

	////添え字1の要素を削除{1,3}
	//g.erase(g.begin() + 1);

	////末尾の要素を削除
	//g.pop_back();
#pragma endregion

	 // 山手線の駅名を双方向リストに格納
	list<const char*> yamanote = {
		"shinagawa", "osaki", "gotanda", "meguro", "ebisu", "shibuya", "harajuku",
		"yoyogi", "shinjuku", "shin-okubo", "takadanobaba", "mejiro", "ikebukuro",
		"otsuka", "sugamo", "komagome", "tabata", "nippori", "uguisudani",
		"ueno", "okachimachi", "akihabara", "kanda", "tokyo", "yurakucho", "shimbashi",
		"hamamatsucho", "tamachi"
	};


	//双方向リスト
	cout << "1970年" << endl;
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr<<",";
	}

	cout << endl; // ★ここで改行
	
	// 「nippori」の前に「nishi-nippori」を追加
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		if (string(*itr) == "nippori") {
			yamanote.insert(itr, "nishi-nippori");
			break; // 1回だけでOKなので抜ける
		}
	}

	

	//双方向リスト
	cout << "2019年" << endl;
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << ",";
	}
	
	cout << endl; // ★ここで改行

	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		if (string(*itr) == "tamachi") {
			yamanote.insert(itr, "takanawa-gateway");
			break; // 1回だけでOKなので抜ける
		}
	}

	//双方向リスト
	cout << "令和5年" << endl;
	for (auto itr = yamanote.begin(); itr != yamanote.end(); ++itr) {
		cout << *itr << ",";
	}

	cout << endl; // ★ここで改行

	return 0;
}