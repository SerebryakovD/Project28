#include<iostream>
#include<string>

using namespace std;

string accum(string str) {
	string repeatStr;

	for (int i = 0; i < str.length(); i ++) {
		for (int j = 0; j < i + 1; j++) {
			repeatStr += j == 0
				? char(toupper(str[i]))
				: char(tolower(str[i]));
		}
		if (i < str.length() - 1) repeatStr += "-";
	}

	return repeatStr;
};

int main() {
	string s = "ZpglnRxqenU";

	cout << accum(s) << endl;
	return 0;
}