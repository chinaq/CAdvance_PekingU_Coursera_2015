#include<iostream>
#include<cstring>
using namespace std;

struct Point{
	int x;
	int y;
};



int main(){
	Point points[100];
	Point results[100];
	int resultsCount = 0;

	int n;
	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> points[i].x >> points[i].y;
	}


	for (int i = 0; i < n; i++){
		bool isVery = true;
		for (int j = 0; j < n; j++){
			if (i == j)
				continue;
			if (points[j].x >= points[i].x && points[j].y >= points[i].y){
				isVery = false;
				break;
			}
		}
		if (isVery){
			results[resultsCount] = points[i];
			resultsCount++;
		}
	}


	for (int i = 0; i < resultsCount; i++){
		for (int j = 0; j < resultsCount - 1; j++){
			if (results[j].y < results[j + 1].y
				|| (results[j].y == results[j + 1].y && results[j].x < results[j + 1].x)){
				Point temp = results[j];
				results[j] = results[j + 1];
				results[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < resultsCount; i++){
		if (i > 0)
			cout << ",";
		cout << "(" << results[i].x << "," << results[i].y << ")";
	}
	cout << endl;
}

//Ѱ��ƽ���ϵļ����
//
//����
//��һ��ƽ���ϣ������������(x, y), (a, b), ���˵(x, y)֧����(a, b)������ָx >= a, y >= b;
//��ͼ����������(a, b)��������(x, y)Ϊ���Ͻǵ�һ�����޵������ڡ�
//����n����ļ��ϣ�һ���������ɸ��㣬���ǲ��ᱻ�����е��κ�һ����֧�䣬��Щ���������ֵ�㡣
//����ҳ����еļ���㣬����x������С����������������ꡣ
//����涨��n������100�����Ҳ����ǵ������Ϊ�����������
//
//����
//����������У���һ����������n����ʾ�ǵ������ڶ��а���n��������꣬����ֵ�������������귶Χ��0��100��
//���������в�����������ͬ�ĵ㡣
//
//���
//��x��������С�����˳��������м���㡣
//�����ʽΪ : (x1, y1), (x2, y2), ...(xk, yk)
//ע�⣺�����ÿ����֮����","�ָ�, ���һ����֮��û��",", ������Ͷ�������ᱻ�д�
//
//��������
//5
//1 2 2 2 3 1 2 3 1 4
//
//�������
//(1, 4), (2, 3), (3, 1)