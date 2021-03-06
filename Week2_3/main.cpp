#include<iostream>
#include<string>
#include <iomanip>

using namespace std;


float bill[3] = {0,0,0};
float person[3] = { 0, 0, 0 };

void calculatePerson(int personId, float value){
	person[personId - 1] += value;
}

void calculateBill(string type, float value){
	if (type == "A")
		bill[0] += value;
	else if (type == "B")
		bill[1] += value;
	else if (type == "C")
		bill[2] += value;
}


int main(){
	int n = 3;


	while (n--){
		int personId;
		cin >> personId;
		int m;
		cin >> m;
		while (m--){
			string type;
			float value;
			cin >> type >> value;
			calculatePerson(personId, value);
			calculateBill(type, value);
		}
	}

	cout <<setprecision(2)<< setiosflags(ios::fixed);

	cout << "1 " << person[0] << endl;
	cout << "2 " << person[1] << endl;
	cout << "3 " << person[2] << endl;

	cout << "A " << bill[0] << endl;
	cout << "B " << bill[1] << endl;
	cout << "C " << bill[2] << endl;


	
}


//发票统计
//
//描述
//有一个小型的报账系统，它有如下功能：
//（1）统计每个人所报发票的总钱数
//（2）统计每类发票的总钱数
//将此系统简化为如下：假设发票类别共有A、B、C三种; 一共有三个人，ID分别为1、2、3。
//
//输入
//系统输入包含三行，每行第一个数为人员ID（整型，1或2或3），第二个数为发票总张数(张数不超过100)，
//之后是多个发票类别（字符型，A或B或C）和相应发票金额（单进度浮点型, 不超过1000.0）。
//
//输出
//输出包含六行，前三行为每人（按ID由小到大输出）所报发票总钱数（保留两位小数），后三行为每类发票的总钱数（保留两位小数）。
//
//样例输入
//1 5 A 1.0 A 2.0 C 1.0 B 1.0 C 1
//3 3 B 1 C 2 C 1
//2 4 B 1 A 1 C 1 A 1
//
//样例输出
//1 6.00
//2 4.00
//3 4.00
//A 5.00
//B 3.00
//C 6.00