#include<iostream>
using namespace std;

int a[100][100];

int main(){
	int row, col;
	cin >> row>>col;
	for (int i = 0; i < row; i++){
		for (int j = 0; j < col; j++){
			cin >> a[i][j];
		}
	}

	for (int j = 0; j < col; j++){
		int jNow = j;
		for (int i = 0; i < row && jNow >= 0; jNow-- , i++){
			cout << a[i][jNow] << endl;;
		}
	}

	for (int i = 1; i < row; i++){
		int iNow = i;
		for (int j = col - 1; iNow < row && j >= 0; j--, iNow++){
			cout << a[iNow][j] << endl;
		}
	}
}



//��ά�����������±���
//
//����
//����һ��row��col�е���������array��Ҫ���array[0][0]Ԫ�ؿ�ʼ���������ϵ����µĶԽ���˳������������顣
//
//����
//����ĵ�һ��������������������Ϊrow��col��
//������row�У�ÿ�а���col������������һ����ά�������顣
//��ע�������row��col��֤0 < row < 100, 0 < col < 100��
//
//���
//������˳�����ÿ��������ÿ������ռһ�С�
//
//��������
//3 4
//1 2 4 7
//3 5 8 10
//6 9 11 12
//
//�������
//1
//2
//3
//4
//5
//6
//7
//8
//9
//10
//11
//12