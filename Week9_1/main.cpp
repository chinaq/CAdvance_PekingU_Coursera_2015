#include<iostream>
using namespace std;

int main(){
	int m, k;
	cin >> m >> k;
	int count = 0;

	int temp = m;
	if (temp / 10000 == 3){
		count++;
	}

	temp = temp % 10000;
	if (temp / 1000 == 3){
		count++;
	}

	temp = temp % 1000;
	if (temp / 100 == 3){
		count++;
	}

	temp = temp % 100;
	if (temp / 10 == 3){
		count++;
	}

	temp = temp % 10;
	if (temp == 3)
		count++;

	if (count == k && m % 19 == 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}


//��k��3����
//
//����
//�������������m �� k������1 < m < 100000��1 < k <5 ���ж�m �ܷ�19��������ǡ�ú���k��3��
//������������������YES���������NO��
//���磬���룺
//43833 3
//�������������YES
//�������
//39331 3
//������3��3�������ܱ�19������Ҳ������������Ӧ���NO
//
//����
//m �� k ��ֵ���ո���
//
//���
//��������ʱ��� YES��������ʱ��� NO
//
//��������
//43833 3
//
//�������
//YES