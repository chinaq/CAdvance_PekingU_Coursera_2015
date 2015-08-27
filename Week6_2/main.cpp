#include<iostream>
#include<cstdio>

using namespace std;


char dna[1000][255];
int len[1000];


char convert(char c){
	char result;
	switch(c){
	case 'A': result = 'T'; break;
	case 'T': result = 'A'; break;
	case 'C': result = 'G'; break;
	case 'G': result = 'C'; break;
	}
	return result;
}



void Print(int index){
	for (int i = 0; i < len[index]; i++)
		cout << convert(dna[index][i]);
	cout << endl;
}


int main(){
	int  n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> dna[i];
		//gets_s(dna[i]);
		len[i] = strlen(dna[i]);
	}

	for (int i = 0; i < n; i++){
		Print(i);
	}

}


//��Լ����
//
//����
//�������Ǻ��ᣨDNA�������������ļ������˫�����ķ�ʽ��϶��ɡ�������DNA�ļ������4�֣�
//�ֱ�Ϊ����ʣ�A���������ʣ�G����������ण�T���Ͱ���ण�C��������֪��������������������Ķ�Ӧλ���ϣ�
//��������Ǻ����������ԣ����������ǺͰ������ԡ����������Ǹ���һ�������ϵļ�����У�������Ӧ�Ļ������ϵļ�����С�
//
//����
//��һ����һ��������n����������n��Ҫ���ļ������
//���¹���n�У�ÿ����һ���ַ�����ʾһ�������������ַ���ֻ���д�д��ĸA��T��G��C��
//�ֱ��ʾ����ʡ�������ड������ʺͰ���ड�ÿ��������ĳ��ȶ�������255��
//
//���
//����n�У�ÿ��Ϊһ��ֻ���д�д��ĸA��T��G��C���ַ������ֱ�Ϊ������ĸ�����������ļ������
//
//��������
//5
//ATATGGATGGTGTTTGGCTCTG
//TCTCCGGTTGATT
//ATATCTTGCGCTCTTGATTCGCATATTCT
//GCGTTTCGTTGCAA
//TTAACGCACAACCTAGACTT
//
//�������
//TATACCTACCACAAACCGAGAC
//AGAGGCCAACTAA
//TATAGAACGCGAGAACTAAGCGTATAAGA
//CGCAAAGCAACGTT
//AATTGCGTGTTGGATCTGAA