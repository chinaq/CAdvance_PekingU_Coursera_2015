#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int a, b, c;
	char dot;
	cin >> a >> dot >> b >> dot >> c;

	if (c == a + b)
		cout << "+" << endl;
	else if (c == a - b)
		cout << "-" << endl;
	else if (c == a *b)
		cout << "*" << endl;
	else if (c == a / b)
		cout << "/" << endl;
	else if (c == a%b)
		cout << "%" << endl;
	else
		cout << "error" << endl;

}


//������ж�
//
//����
//�������� a �� b �����õ���� c����ʾΪ��a ? b = c�����У��������Ǽӷ� + ������ - ���˷� *������ / �� ȡ�� %��
//���������� a, b, c ��ֵ��ȷ������������ĳ������������������Ӧ�������������κ����㶼������������� error.
//
//���磺
//���룺
//3, 4, 5
//�����
//error
//
//�����룺
//3, 4, 3
//�������
//%
//
//����
//a b�� c ��ֵ�����������룬�Զ��ż��
//
//���
//��������֮һ�� error
//
//��������
//6, 7, 13
//
//�������
//+