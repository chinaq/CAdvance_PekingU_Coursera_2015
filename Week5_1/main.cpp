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








//��������ԵԪ��֮��
//
//����
//����һ���������󣬼���λ�ھ����Ե��Ԫ��֮�͡���ν�����Ե��Ԫ�أ����ǵ�һ�к����һ�е�Ԫ���Լ���һ�к����һ�е�Ԫ�ء�
//
//����
//��һ��Ϊ����k����ʾ��k�����ݡ�
//ÿ�������ж�����ɣ���ʾһ������
//��һ�зֱ�Ϊ���������m������n��m < 100��n < 100��������֮���Կո�ָ���
//�����������m�������У�ÿ�а���n������������֮���Կո���Ϊ�����
//
//���
//�����Ӧ����ı�ԵԪ�غͣ�һ��һ�С�
//
//��������
//2
//4 4
//1 1 1 1
//0 0 0 0
//1 0 1 0
//0 0 0 03 33 4 13 7 12 0 1
//
//�������
//5
//15