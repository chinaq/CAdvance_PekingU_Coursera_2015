#include<iostream>
#include<cstring>
using namespace std;

char boy, girl;
char blank = ' ';
char children[100];
int len;


void getCouple(){
	char last = blank;
	int lastNum = -1;
	for (int i = 0; i < len; i++){
		if (last == boy && children[i] == girl){
			cout << lastNum << " " << i << endl;
			children[lastNum] = blank;
			children[i] = blank;
			break;
		}
		if (children[i] == boy || children[i] == girl){
			last = children[i];
			lastNum = i;
		}
	}
	
	if (lastNum != -1)
		getCouple();
}


int main(){

	cin >> children;
	len = strlen(children);

	boy = children[0];
	for (int i = 0; i < len; i++){
		if (children[i] != boy){
			girl = children[i];
			break;
		}
	}

	getCouple();
	
}
//�Ŷ���Ϸ
//
//����
//���׶�԰�У���ʦ����С������һ���Ŷӵ���Ϸ��������ʦ���ĵİ���Ŀ��ͬ��С�к���СŮ��������һ�������У�
//ÿ��С�������ڶ����е�λ�÷���һ����ţ��� �Ŵ�0��ʼ����Ȼ����ʦ����С�����ǣ�
//վ��ǰ�ߵ�С�к����Ժ���������ڵ�СŮ���������뿪���У�ʣ���С��������վ£���ٰ�ǰ�����ڵ�С�к�СŮ������ ���뿪������Ϸ��
//������������ڽ�ʦ���ĵİ��ţ�ǡ�ÿ��Ա�֤ÿ����С���Ѷ����������뿪���У�
//��������뿪������С�����Ǳ����С�ĺ���������С�� �ѡ�
//��ע��ֻ��С�к���ǰ��СŮ���ں���������֮��û��������С���ѣ����ǲ����������뿪���У���
//�������ʦ���Ŷӣ���СŮ����Ŵ�С�����˳�򣬸��� �����������뿪���е�С�к���СŮ���ı�Ŷԡ�
//
//����
//��һ���ַ�������С���Ѷ��С��ַ�����ֻ����������ַ����ֱ����С�к���СŮ�������ȳ��ֵ��ַ�����С�к���
//��һ���ַ�����СŮ����С������������100
//
//���
//��СŮ�����˳��˳������������뿪���е�С�к���СŮ���ı�Ŷԣ�ÿ��һ�Ա�ţ����֮����һ���ո�ָ���
//
//��������
//((()(())())(()))
//
//�������
//2 3
//5 6
//4 7
//8 9
//1 10
//12 13
//11 14
//0 15