#include<iostream>
#include<cstdio>
#include<cstring> 
using namespace std;



int a[100][100];


bool CompareLeft(int i, int j){
	return a[i][j] >= a[i][j - 1];
}

bool CompareRight(int i, int j){
	return a[i][j] >= a[i][j + 1];
}

bool CompareUp(int i, int j){
	return a[i][j] >= a[i - 1][j];

}
bool CompareDown(int i, int j){
	return a[i][j] >= a[i + 1][j];
}

int main(){
	int M, N;

	int result_M[1000], result_N[1000];
	int resultCount = 0;

	cin >> M >> N;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			cin >> a[i][j];

	for (int i = 0; i < M; i++){
		for (int j = 0; j < N; j++){
			bool isMoutain;// = true;
			if (i == 0 && j == 0){
				isMoutain = CompareDown(i, j) && CompareRight(i, j);
			}
			else if (i == 0 && j == N - 1){
				isMoutain = CompareDown(i, j) && CompareLeft(i, j);
			}
			else if (i == M - 1 && j == 0){
				isMoutain = CompareUp(i, j) && CompareRight(i, j);
			}
			else if (i == M - 1 && j == N - 1){
				isMoutain = CompareUp(i, j) && CompareLeft(i, j);
			}
			else if (i == 0 && (j != 0 && j != N - 1)){
				isMoutain = CompareLeft(i, j) && CompareRight(i, j) && CompareDown(i, j);
			}
			else if (i == M - 1 && (j != 0 && j != N - 1)){
				isMoutain = CompareLeft(i, j) && CompareRight(i, j) && CompareUp(i, j);
			}
			else if (j == 0 && (i != 0 && i != M - 1)){
				isMoutain = CompareRight(i, j) && CompareUp(i, j) && CompareDown(i, j);
			}
			else if (j == N - 1 && (i != 0 && i != M - 1)){
				isMoutain = CompareLeft(i, j) && CompareUp(i, j) && CompareDown(i, j);
			}
			else{
				isMoutain = CompareRight(i, j) && CompareUp(i, j) && CompareDown(i, j) && CompareLeft(i, j);
			}


			if (isMoutain){
				result_M[resultCount] = i;
				result_N[resultCount] = j;
				resultCount++;
			}
		}
	}

	for (int i = 0; i < resultCount; i++){
		cout << result_M[i] << " " << result_N[i] << endl;
	}
}




//寻找山顶
//
//描述
//在一个m×n的山地上，已知每个地块的平均高程，请求出所有山顶所在的地块
//（所谓山顶，就是其地块平均高程不比其上下左右相邻的四个地块每个地块的平均高程小的地方)。
//
//输入
//第一行是两个整数，表示山地的长m（5≤m≤20）和宽n（5≤n≤20）。
//其后m行为一个m×n的整数矩阵，表示每个地块的平均高程。每行的整数间用一个空格分隔。
//
//输出
//输出所有上顶所在地块的位置。每行一个。按先m值从小到大，再n值从小到大的顺序输出。
//
//样例输入
//10 5
//0 76 81 34 66
//1 13 58 4 40
//5 24 17 6 65
//13 13 76 3 20
//8 36 12 60 37
//42 53 87 10 65
//42 25 47 41 33
//71 69 94 24 12
//92 11 71 3 82
//91 90 20 95 44
//
//样例输出
//0 2
//0 4
//2 1
//2 4
//3 0
//3 2
//4 3
//5 2
//5 4
//7 2
//8 0
//8 4
//9 3