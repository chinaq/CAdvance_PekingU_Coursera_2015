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


//ϸ��ʵ�����
//
//����
//��һ��ϸ����ΪA��B�������֣����ǵ���������������ȫ��ͬ�������ڷ�ֳ���������������
//A���ַ�ֳ�����ǳ�ǿ��B���ֵķ�ֳ������������һ��Ϊʱһ�� Сʱ��ϸ����ֳʵ���У�
//ʵ��Ա���������ϸ������������ˣ������дһ�����򣬸���ʵ���������������ֵ����������·ֳ����顣
//
//����
//�����ж��У���һ��Ϊ����n��n��100������ʾ��n��������
//����n�У�ÿ���������������ֱ�����������ţ�����ǰϸ�������������ϸ��������
//
//���
//����ж��У�
//��һ�����A��������������������ÿ�����A����������ı�ţ�����ֳ���������С�
//Ȼ��һ�����B��������������������ÿ�����B����������ı�ţ�Ҳ����ֳ���������С�
//
//��������
//5
//1 10 3456
//2 10 5644
//3 10 4566
//4 20 234
//5 20 232
//
//�������
//3
//1
//3
//2
//2
//5
//4
//
//��ʾ
//�����ڲ���ϸ����ֳ��������ԶԶС������֮��ϸ����ֳ�����Ĳ��졣
//Ҳ����˵�����ּ��κ�����ϸ���ķ�ֳ��֮��������ڲ�����ϸ���ķ�ֳ��֮���