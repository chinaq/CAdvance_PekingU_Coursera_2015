#include<iostream>
#include<cstdio>
#include<cstring> 


using namespace std;



char a[1000];
char temp[100];
int tempPos = 0;



void SetTemp(int index){
	temp[tempPos] = a[index];
	tempPos++;
}


void PrintTemp(){
	temp[tempPos] = '\0';
	while (tempPos--){
		cout << temp[tempPos];
	}
	tempPos = 0;
}


int main(){
	gets_s(a);
	int len = strlen(a);
	for(int i=0;i<len+1;i++){
		if (a[i] == '\0'){
			PrintTemp();
			return 0;
		}
		else if (a[i] == ' '){
			PrintTemp();
			cout << " ";
		}
		else{
			SetTemp(i);
		}
	}
}

//���ʷ�ת
//
//����
//����һ�����ӣ�һ�У����������е�ÿһ�����ʷ�ת�������
//
//����
//ֻ��һ�У�Ϊһ���ַ�����������500���ַ�������֮���Կո������
//
//���
//��תÿһ�����ʺ���ַ���������֮��Ŀո�����ԭ��һ�¡�
//
//��������
//hello world
//
//�������
//olleh dlrow
