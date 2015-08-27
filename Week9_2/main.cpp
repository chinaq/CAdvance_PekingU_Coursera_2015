#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[500];

	int pos[26];
	int count[26];

	for (int i = 0; i < 26; i++){
		pos[i] = 500;
		count[i] = 0;
	}

	cin >> s;
	for (int i = 0; i < strlen(s); i++){
		if (s[i] >= 97 && s[i] <= 122){
			s[i] -= 32;
		}
		if (s[i] >= 65 && s[i] <= 90){
			count[s[i] - 65]++;
			if (pos[s[i] - 65] == 500)
				pos[s[i] - 65] = i;
		}
	}

	int maxCharNum = -1;
	int maxCount = 0;
	for (int i = 0; i < 26; i++){
		if (count[i] > maxCount){
			maxCount = count[i];
			maxCharNum = i;
		}
	}

	//count[maxCharNum] = 0;
	int secMaxCharNum = -1;
	int secMacCount = 0;
	for (int i = 0; i < 26; i++){
		if (count[i] > secMacCount && count[i]< maxCount){
			secMacCount = count[i];
			secMaxCharNum = i;
		}
		else if (count[i] == secMacCount && secMaxCharNum >= 0 && pos[i]< pos[secMaxCharNum]){
			secMacCount = count[i];
			secMaxCharNum = i;
		}
	}

	cout << (char)(secMaxCharNum + 65) << "+" << char(secMaxCharNum + 97) << ":" << secMacCount << endl;
}


//字符串中次数第2多的字母
//
//描述
//输入一串长度不超过500个符号的字符串，输出在串中出现第2多的英语字母(大小写字母认为相同)
//和次数（如果串中有其它符号，则忽略不考虑）。如果有多个字母的次数都是第2多，则按串中字母出现的顺序输出第1个。
//例 ab&dcAab&c9defgb
//这里，a 和 b都出现3次，c和d都出现2次，e、f 和 g 各出现1次，其中的符号&和9均忽略不考虑。
//因此，出现第2多的应该是 c 和 d，但是 d 开始出现的位置在 c 的前面，因此，输出为
//D + d:2
//(假定在字符串中，次数第2多的字母总存在)
//
//输入
//一个字符串
//
//输出
//大写字母 + 小写字母:个数
//
//样例输入
//ab&dcAab&c9defgb
//
//样例输出
//D + d:2
