#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char s[500];

	int pos[26];
	int count[26];

	for (int i = 0; i < 26; i++){
		pos[i] = 500;
		count[i] = 0;
	}

	cin >> s;
	for (int i = 0; i < strlen(s); i++){
		if (s[i] >= 97 && s[i] <= 122){
			s[i] -= 32;
		}
		if (s[i] >= 65 && s[i] <= 90){
			count[s[i] - 65]++;
			if (pos[s[i] - 65] == 500)
				pos[s[i] - 65] = i;
		}
	}

	int maxCharNum = -1;
	int maxCount = 0;
	for (int i = 0; i < 26; i++){
		if (count[i] > maxCount){
			maxCount = count[i];
			maxCharNum = i;
		}
	}

	//count[maxCharNum] = 0;
	int secMaxCharNum = -1;
	int secMacCount = 0;
	for (int i = 0; i < 26; i++){
		if (count[i] > secMacCount && count[i]< maxCount){
			secMacCount = count[i];
			secMaxCharNum = i;
		}
		else if (count[i] == secMacCount && secMaxCharNum >= 0 && pos[i]< pos[secMaxCharNum]){
			secMacCount = count[i];
			secMaxCharNum = i;
		}
	}

	cout << (char)(secMaxCharNum + 65) << "+" << char(secMaxCharNum + 97) << ":" << secMacCount << endl;
}


//�ַ����д�����2�����ĸ
//
//����
//����һ�����Ȳ�����500�����ŵ��ַ���������ڴ��г��ֵ�2���Ӣ����ĸ(��Сд��ĸ��Ϊ��ͬ)
//�ʹ���������������������ţ�����Բ����ǣ�������ж����ĸ�Ĵ������ǵ�2�࣬�򰴴�����ĸ���ֵ�˳�������1����
//�� ab&dcAab&c9defgb
//���a �� b������3�Σ�c��d������2�Σ�e��f �� g ������1�Σ����еķ���&��9�����Բ����ǡ�
//��ˣ����ֵ�2���Ӧ���� c �� d������ d ��ʼ���ֵ�λ���� c ��ǰ�棬��ˣ����Ϊ
//D + d:2
//(�ٶ����ַ����У�������2�����ĸ�ܴ���)
//
//����
//һ���ַ���
//
//���
//��д��ĸ + Сд��ĸ:����
//
//��������
//ab&dcAab&c9defgb
//
//�������
//D + d:2
