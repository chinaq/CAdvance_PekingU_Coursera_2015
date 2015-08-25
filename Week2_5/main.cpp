#include<iostream>
using namespace std;

int x[1000];
int a[1000];
int b[1000];
int total = 0;
int average;
int allCount;
int aCount = 0;
int bCount = 0;

void getABCount(){
	for (int i = 1; i < allCount + 1; i++){
		if (x[i]> average){
			aCount++;
		}
		else{
			bCount++;
		}
	}
}


int main(){
	cin >> allCount;

	int round = allCount;
	while (round--){
		int i;
		int before;
		int after;
		cin >> i >> before >> after;
		x[i] = after / before;
		total += x[i];
	}

	average = total / allCount;
	getABCount();

	
	
	for (int h = 0; h < aCount; h++){
		int aMax = 0;
		int pos = 0;
		for (int i = 1; i < allCount + 1; i++){
			if (x[i]>aMax && x[i] > average){
				aMax = x[i];
				pos = i;
			}
		}
		a[h] = pos;
		x[pos] = 0;
	}

	cout << aCount << endl;
	for (int h = aCount - 1; h >= 0; h--){
		cout << a[h] << endl;
	}



	for (int h = 0; h < bCount; h++){
		int bMax = 0;
		int pos = 0;
		for (int i = 1; i < allCount + 1; i++){
			if (x[i]> bMax && x[i] < average){
				bMax = x[i];
				pos = i;
			}
		}
		b[h] = pos;
		x[pos] = 0;
	}

	cout << bCount << endl;
	for (int h = bCount - 1; h >= 0; h--){
		cout << b[h] << endl;
	}


}


//细菌实验分组
//
//描述
//有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，
//A亚种繁殖能力非常强，B亚种的繁殖能力很弱。在一次为时一个 小时的细菌繁殖实验中，
//实验员由于疏忽把细菌培养皿搞乱了，请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。
//
//输入
//输入有多行，第一行为整数n（n≤100），表示有n个培养皿。
//其余n行，每行有三个整数，分别代表培养皿编号，试验前细菌数量，试验后细菌数量。
//
//输出
//输出有多行：
//第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。
//然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。
//
//样例输入
//5
//1 10 3456
//2 10 5644
//3 10 4566
//4 20 234
//5 20 232
//
//样例输出
//3
//1
//3
//2
//2
//5
//4
//
//提示
//亚种内部，细菌繁殖能力差异远远小于亚种之间细菌繁殖能力的差异。
//也就是说，亚种间任何两组细菌的繁殖率之差都比亚种内部两组细菌的繁殖率之差大。