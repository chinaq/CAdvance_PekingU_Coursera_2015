#include<iostream>
#include<string>
#include <iomanip>

using namespace std;


float bill[3] = {0,0,0};
float person[3] = { 0, 0, 0 };

void calculatePerson(int personId, float value){
	person[personId - 1] += value;
}

void calculateBill(string type, float value){
	if (type == "A")
		bill[0] += value;
	else if (type == "B")
		bill[1] += value;
	else if (type == "C")
		bill[2] += value;
}


int main(){
	int n = 3;


	while (n--){
		int personId;
		cin >> personId;
		int m;
		cin >> m;
		while (m--){
			string type;
			float value;
			cin >> type >> value;
			calculatePerson(personId, value);
			calculateBill(type, value);
		}
	}

	cout <<setprecision(2)<< setiosflags(ios::fixed);

	cout << "1 " << person[0] << endl;
	cout << "2 " << person[1] << endl;
	cout << "3 " << person[2] << endl;

	cout << "A " << bill[0] << endl;
	cout << "B " << bill[1] << endl;
	cout << "C " << bill[2] << endl;


	
}


//��Ʊͳ��
//
//����
//��һ��С�͵ı���ϵͳ���������¹��ܣ�
//��1��ͳ��ÿ����������Ʊ����Ǯ��
//��2��ͳ��ÿ�෢Ʊ����Ǯ��
//����ϵͳ��Ϊ���£����跢Ʊ�����A��B��C����; һ���������ˣ�ID�ֱ�Ϊ1��2��3��
//
//����
//ϵͳ����������У�ÿ�е�һ����Ϊ��ԱID�����ͣ�1��2��3�����ڶ�����Ϊ��Ʊ������(����������100)��
//֮���Ƕ����Ʊ����ַ��ͣ�A��B��C������Ӧ��Ʊ�������ȸ�����, ������1000.0����
//
//���
//����������У�ǰ����Ϊÿ�ˣ���ID��С���������������Ʊ��Ǯ����������λС������������Ϊÿ�෢Ʊ����Ǯ����������λС������
//
//��������
//1 5 A 1.0 A 2.0 C 1.0 B 1.0 C 1
//3 3 B 1 C 2 C 1
//2 4 B 1 A 1 C 1 A 1
//
//�������
//1 6.00
//2 4.00
//3 4.00
//A 5.00
//B 3.00
//C 6.00