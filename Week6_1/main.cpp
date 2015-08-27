//#include<iostream>
//#include<string>
//#include <iomanip>
//
//using namespace std;
//
//
//int m;
//float standard;
//
//string id[50];
//float point[50];
//
//int maxCount = 0;
//
//
//bool selectMax(){
//	int tempPos;
//	int tempMax = 0;
//	for (int i = 0; i < m; i++){
//		if (point[i] > tempMax){
//			tempMax = point[i];
//			tempPos = i;
//		}
//	}
//	if (tempMax > standard){
//		cout << setprecision(1) << setiosflags(ios::fixed);
//		cout << id[tempPos] << " " << point[tempPos] << endl;
//		maxCount++;
//		point[tempPos] = 0;
//		return true;
//	}
//	return false;
//}
//
//
//int main(){
//	
//	cin >> m >> standard;
//	for (int i = 0; i < m; i++){
//		cin >> id[i] >> point[i];
//	}
//
//	bool isGotMax = true;
//	
//	while (isGotMax){
//		isGotMax = selectMax();
//	}
//
//	if (maxCount < 1)
//		cout << "None.";
//
//}





#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m;
	cin >> m;
	float a;
	cin >> a;
	char number[50][4], temp_num[4];
	float value[50], temp_value;
	int i, j, k, count = 0;
	cin.get();

	for (i = 0; i<m; i++){
		scanf_s("%s %f", temp_num, &temp_value);
		if (temp_value>a){
			number[count][0] = temp_num[0];
			number[count][1] = temp_num[1];
			number[count][2] = temp_num[2];
			number[count][3] = '\0';
			value[count] = temp_value;
			count++;
		}
	}

	if (count == 0){
		cout << "None." << endl;
		return 0;
	}

	float max;
	int flag = -1;
	for (k = 1; k <= count; k++){
		max = value[0];
		flag = 0;
		for (j = 1; j<count; j++){
			if (value[j]>max){
				max = value[j];
				flag = j;
			}
		}
		//cout<<number[flag]<<' '<<max<<endl;
		printf("%s %.1f\n", number[flag], max);
		value[flag] = -1;
	}
	return 0;
}







//
//分配病房
//
//描述
//某个科室的病房分为重症和普通，只有当病人的疾病严重程度超过了入住重症病房的最低严重值，才可以安排入住重症病房。
//现在要求设计一个程序，给病人安排好病房。疾病的严重程度用0到10来表示，0表示小毛病，10表示非常严重。
//
//输入
//第一行输入病人的个数m(m < 50)，以及安排住入重症病房的最低严重值a
//紧接着m行，每行表示病人编号（三个位，用0补齐）及其疾病的严重程度（浮点数，1位小数）。
//每个病人的疾病严重程度都不一样。
//
//输出
//要求按照病人的严重程度输出住在重症病房里的病人的编号
//
//注意：
//如果当前所有病人的严重程度并不满足住在重症病房里，则输出“None.”（不包括引号）
//
//样例输入
//10 7.55
//006 6.5
//005 8.0
//004 3.5
//009 8.5
//011 7.0
//043 9.5
//003 5.0
//103 6.0
//112 4.0
//118 9.0
//
//样例输出
//043 9.5
//118 9.0
//009 8.5
//005 8.0