#include<iostream>
#include<cstring>
using namespace std;


int main(){
	char o[101];
	char s[101];
	//char result[101];

	while (cin >> o){

		int len = strlen(o);
		memcpy(s, o, len + 1);

		int last$Pos = -1;
		cout << o << endl;
		
		bool elseCouple = true;
		while (elseCouple){
			elseCouple = false;
			for (int i = 0; i < len; i++){
				if (s[i] == '(' || s[i]=='$'){
					s[i] = '$';
					last$Pos = i;
				}
				else if (s[i] == ')' || s[i] == '?'){
					s[i] = '?';
					if (last$Pos > -1){
						s[last$Pos] = ' ';
						s[i] = ' ';
						last$Pos = -1;
						elseCouple = true;
						break;
					}
				}
				else if((s[i]>=65 && s[i]<=90) ||(s[i]>=97 && s[i]<122))
				{
					s[i] = ' ';
				}
			}
		}
		cout << s << endl;
	}
}


//扩号匹配问题
//
//描述
//
//在某个字符串（长度不超过100）中有左括号、右括号和大小写字母；规定（与常见的算数式子一样）
//任何一个左括号都从内到外与在它右边且距离最近的右括号匹配。写一个程序，找到无法匹配的左括号和右括号，
//输出原来字符串，并在下一行标出不能匹配的括号。不能匹配的左括号用"$"标注, 不能匹配的右括号用"?"标注.
//
//输入
//输入包括多组数据，每组数据一行，包含一个字符串，只包含左右括号和大小写字母，字符串长度不超过100
//注意：cin.getline(str, 100)最多只能输入99个字符！
//
//输出
//对每组输出数据，输出两行，第一行包含原始输入字符，第二行由"$", "?"和空格组成，"$"和"?"表示与之对应的左括号和右括号不能匹配。
//
//样例输入
//((ABCD(x)
//)(rttyy())sss)(
//
//样例输出
//((ABCD(x)
//$$
//)(rttyy())sss)(
//? ? $