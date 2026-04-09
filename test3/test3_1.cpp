#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
/*1. 使用关联容器编写程序，算出输入中每一个不同的单词出现的次数, 并且按照词典序输出单词及其次数。
例如：输入:
I am from Shanghai .
I love Shanghai .
输出:
. 2
I 2
Shanghai 2
am 1
from 1
love 1*/
int main() 
{ 
	//TODO
	string x;
	vector<string> words;
	map<string, int> words_count;
	typedef pair<string, int> word_count;

	while (cin >> x) {
		words.push_back(x);
	}

	for (string word : words) {
		++words_count[word];
	}

	for (word_count count : words_count) {
		cout << count.first << ' ' << count.second << '\n';
	}
    
	return 0; 
}
