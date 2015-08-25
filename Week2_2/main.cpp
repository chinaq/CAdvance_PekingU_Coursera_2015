#include<iostream>
using namespace std;

#define poyanghu 0
#define dongtinghu 1
#define taihu 2
#define hongzehu 3

int a[4];


bool AIsRight(){
	int result = 0;
	if (a[dongtinghu] == 1)
		result++;
	if (a[hongzehu] == 4)
		result++;
	if (a[poyanghu] == 3)
		result++;
	if (result == 1)
		return true;
	else
		return false;
}

bool BIsRight(){
	int result = 0;
	if (a[hongzehu] == 1)
		result++;
	if (a[dongtinghu] == 4)
		result++;
	if (a[poyanghu] == 2)
		result++;
	if (a[taihu] == 3)
		result++;
	if (result == 1)
		return true;
	else
		return false;
}


bool CIsRight(){
	int result = 0;
	if (a[hongzehu] == 4)
		result++;
	if (a[dongtinghu] == 3)
		result++;
	if (result == 1)
		return true;
	else
		return false;
}


bool DIsRight(){
	int result = 0;
	if (a[poyanghu] == 1)
		result++;
	if (a[taihu] == 4)
		result++;
	if (a[hongzehu] == 2)
		result++;
	if (a[dongtinghu] == 3)
		result++;
	if (result == 1)
		return true;
	else
		return false;
}


void getRank(){
	if (AIsRight() && BIsRight() && CIsRight() && DIsRight())
	{
		for (int r = 0; r < 4; r++){
			cout << a[r] << endl;
		}
	}
}

void setHongzehu(){
	for (int l = 1; l <= 4; l++){
		if (l == a[0] || l == a[1] || l == a[2])
			continue;
		a[3] = l;
		getRank();
	}
}

void setTaihu(){
	for (int k = 1; k <= 4; k++){
		if (k == a[0] || k == a[1])
			continue;
		a[2] = k;
		setHongzehu();
	}
}

void setDongtinghu(){
	for (int j = 1; j <= 4; j++){
		if (j == a[0])
			continue;
		a[1] = j;
		setTaihu();
	}
}


void setPoyanghu(){
	for (int i = 1; i <= 4; i++){
		a[0] = i;
		setDongtinghu();
	}
}




int main(){
	setPoyanghu();
}




//四大湖
//
//描述
//我国有4大淡水湖。
//A说：洞庭湖最大，洪泽湖最小，鄱阳湖第三。
//B说：洪泽湖最大，洞庭湖最小，鄱阳湖第二，太湖第三。
//C说：洪泽湖最小，洞庭湖第三。
//D说：鄱阳湖最大，太湖最小，洪泽湖第二，洞庭湖第三。
//已知这4个湖的大小均不相等，4个人每人仅答对一个，
//请编程按照鄱阳湖、洞庭湖、太湖、洪泽湖的顺序给出他们的大小排名。
//
//输入
//无。
//
//输出
//输出为4行，第1行为鄱阳湖的大小名次，从大到小名次分别表示为1、2、3、4；第2、3、4行分别为洞庭湖、太湖、洪泽湖的大小名次。
//
//样例输入
//(无)
//
//样例输出
//3
//2
//1
//4
//
//提示
//样例输出仅供格式参考