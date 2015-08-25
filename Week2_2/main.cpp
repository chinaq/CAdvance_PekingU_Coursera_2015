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




//�Ĵ��
//
//����
//�ҹ���4��ˮ����
//A˵����ͥ����󣬺������С��۶����������
//B˵���������󣬶�ͥ����С��۶�����ڶ���̫��������
//C˵���������С����ͥ��������
//D˵��۶�������̫����С��������ڶ�����ͥ��������
//��֪��4�����Ĵ�С������ȣ�4����ÿ�˽����һ����
//���̰���۶��������ͥ����̫�����������˳��������ǵĴ�С������
//
//����
//�ޡ�
//
//���
//���Ϊ4�У���1��Ϊ۶�����Ĵ�С���Σ��Ӵ�С���ηֱ��ʾΪ1��2��3��4����2��3��4�зֱ�Ϊ��ͥ����̫����������Ĵ�С���Ρ�
//
//��������
//(��)
//
//�������
//3
//2
//1
//4
//
//��ʾ
//�������������ʽ�ο�