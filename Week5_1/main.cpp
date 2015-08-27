#include<iostream>
using namespace std;

int e[100][100];
int result[10000];


void getSum(int z, int a, int b){
	result[z] = 0;
	for (int j = 0; j < b; j++){
		result[z] = result[z] + e[0][j];
		if (b> 1)
			result[z] += e[a - 1][j];
	}
	for (int i = 1; i < a - 1; i++){
		result[z] = result[z] + e[i][0];
		if (a> 1)
			result[z] += e[i][b - 1];

	}
}


int main(){

	int z;
	cin >> z;
	for (int i = 0; i < z; i++){
		int a, b;
		cin >> a >> b;
		for (int j = 0; j < a; j++){
			for (int k = 0; k < b; k++){
				cin >> e[j][k];
			}
		}
		getSum(i, a, b);
	}

	for (int i = 0; i < z; i++)
		cout << result[i] << endl;
}








//计算矩阵边缘元素之和
//
//描述
//输入一个整数矩阵，计算位于矩阵边缘的元素之和。所谓矩阵边缘的元素，就是第一行和最后一行的元素以及第一列和最后一列的元素。
//
//输入
//第一行为整数k，表示有k组数据。
//每组数据有多行组成，表示一个矩阵：
//第一行分别为矩阵的行数m和列数n（m < 100，n < 100），两者之间以空格分隔。
//接下来输入的m行数据中，每行包含n个整数，整数之间以空格作为间隔。
//
//输出
//输出对应矩阵的边缘元素和，一个一行。
//
//样例输入
//2
//4 4
//1 1 1 1
//0 0 0 0
//1 0 1 0
//0 0 0 03 33 4 13 7 12 0 1
//
//样例输出
//5
//15