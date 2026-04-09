#include <iostream>
#include <string>
#include <vector>
#include <map>
/*2. 编写程序产生交叉引用表，一行一行读入句子，根据空白符分割单词，记录每个单词出现的行号，并输出。
输入:
I am from Shanghai .
I love Shanghai .
输出:
. 1 2
I 1 2
Shanghai 1 2
am 1
from 1
love 2*/
using namespace std;
//TODO
typedef vector<int> index_book;
typedef pair<string, index_book> word_index;
typedef pair<string, int> sentence_index;

template<class In>
vector<string> split(In begin, In end) {
	In i = begin, j;
	vector<string> out;
	while (isspace(*i)) ++i;

	j = i;
	while (j != end) {
		while (j != end && !isspace(*j)) ++j;
		out.push_back(string(i, j));
		i = j;
		while (i != end && isspace(*i)) ++i;
		j = i;
	}

	return out;
}

int main() 
{ 
	//TODO
	string x;
	map<string, int> sentences;
	int index = 1;
	map<string, index_book> words;
	vector<string> words_temp;

	while (getline(cin, x)) {
		sentences[x] = index++;
	}

	for (sentence_index sentence : sentences) {
		words_temp = split(sentence.first.begin(), sentence.first.end());
		for (string word : words_temp) {
			words[word].push_back(sentence.second);
		}
	}

	for (word_index w : words) {
		cout << w.first << ' ';
		for (int index : w.second) {
			cout << index << ' ';
		}
		cout << '\n';
	}

	return 0; 
}
