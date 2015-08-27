#include<iostream>
#include<cstdio>
#include<cstring> 


using namespace std;



char a[1000];
char temp[100];
int tempPos = 0;



void SetTemp(int index){
	temp[tempPos] = a[index];
	tempPos++;
}


void PrintTemp(){
	temp[tempPos] = '\0';
	while (tempPos--){
		cout << temp[tempPos];
	}
	tempPos = 0;
}


int main(){
	gets_s(a);
	int len = strlen(a);
	for(int i=0;i<len+1;i++){
		if (a[i] == '\0'){
			PrintTemp();
			return 0;
		}
		else if (a[i] == ' '){
			PrintTemp();
			cout << " ";
		}
		else{
			SetTemp(i);
		}
	}
}

//单词翻转
//
//描述
//输入一个句子（一行），将句子中的每一个单词翻转后输出。
//
//输入
//只有一行，为一个字符串，不超过500个字符。单词之间以空格隔开。
//
//输出
//翻转每一个单词后的字符串，单词之间的空格需与原文一致。
//
//样例输入
//hello world
//
//样例输出
//olleh dlrow
