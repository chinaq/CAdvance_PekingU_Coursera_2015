#include<iostream>
using namespace std;

int main(){
	int a[1000];

	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}

	for (int i = 0; i < n; i++){
		if (a[i] == i){
			cout << i << endl;
			return 0;
		}
	}

	cout << "N" << endl;
}


//Ѱ���±�
//
//����
//��֪һ����������x[], ���е�Ԫ�ر˴˶�����ͬ���ҳ��������������Ƿ���һ��Ԫ������x[i] = i�Ĺ�ϵ�������±��0��ʼ��
//�������ԣ����x[] = { -2, -1, 7, 3, 0, 8 }, ��x[3] = 3, ���3���Ǵ𰸡�
//
//����
//��һ�а���һ������n(0 < n < 100)����ʾ������Ԫ�صĸ�����
//�ڶ��а���n�����������α�ʾ�����е�Ԫ�ء�
//
//���
//���Ϊһ��������������x[i] = i��Ԫ�أ����ж��Ԫ�����㣬�����һ�������Ԫ��
//��û��Ԫ�����㣬�������N����
//
//��������
//6
//-2 -1 7 3 4 8
//
//�������
//3