//#include<iostream>
//#include<string>
//#include <iomanip>
//
//using namespace std;
//
//
//int m;
//float standard;
//
//string id[50];
//float point[50];
//
//int maxCount = 0;
//
//
//bool selectMax(){
//	int tempPos;
//	int tempMax = 0;
//	for (int i = 0; i < m; i++){
//		if (point[i] > tempMax){
//			tempMax = point[i];
//			tempPos = i;
//		}
//	}
//	if (tempMax > standard){
//		cout << setprecision(1) << setiosflags(ios::fixed);
//		cout << id[tempPos] << " " << point[tempPos] << endl;
//		maxCount++;
//		point[tempPos] = 0;
//		return true;
//	}
//	return false;
//}
//
//
//int main(){
//	
//	cin >> m >> standard;
//	for (int i = 0; i < m; i++){
//		cin >> id[i] >> point[i];
//	}
//
//	bool isGotMax = true;
//	
//	while (isGotMax){
//		isGotMax = selectMax();
//	}
//
//	if (maxCount < 1)
//		cout << "None.";
//
//}





#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	int m;
	cin >> m;
	float a;
	cin >> a;
	char number[50][4], temp_num[4];
	float value[50], temp_value;
	int i, j, k, count = 0;
	cin.get();

	for (i = 0; i<m; i++){
		scanf_s("%s %f", temp_num, &temp_value);
		if (temp_value>a){
			number[count][0] = temp_num[0];
			number[count][1] = temp_num[1];
			number[count][2] = temp_num[2];
			number[count][3] = '\0';
			value[count] = temp_value;
			count++;
		}
	}

	if (count == 0){
		cout << "None." << endl;
		return 0;
	}

	float max;
	int flag = -1;
	for (k = 1; k <= count; k++){
		max = value[0];
		flag = 0;
		for (j = 1; j<count; j++){
			if (value[j]>max){
				max = value[j];
				flag = j;
			}
		}
		//cout<<number[flag]<<' '<<max<<endl;
		printf("%s %.1f\n", number[flag], max);
		value[flag] = -1;
	}
	return 0;
}







//
//���䲡��
//
//����
//ĳ�����ҵĲ�����Ϊ��֢����ͨ��ֻ�е����˵ļ������س̶ȳ�������ס��֢�������������ֵ���ſ��԰�����ס��֢������
//����Ҫ�����һ�����򣬸����˰��źò��������������س̶���0��10����ʾ��0��ʾСë����10��ʾ�ǳ����ء�
//
//����
//��һ�����벡�˵ĸ���m(m < 50)���Լ�����ס����֢�������������ֵa
//������m�У�ÿ�б�ʾ���˱�ţ�����λ����0���룩���伲�������س̶ȣ���������1λС������
//ÿ�����˵ļ������س̶ȶ���һ����
//
//���
//Ҫ���ղ��˵����س̶����ס����֢������Ĳ��˵ı��
//
//ע�⣺
//�����ǰ���в��˵����س̶Ȳ�������ס����֢������������None.�������������ţ�
//
//��������
//10 7.55
//006 6.5
//005 8.0
//004 3.5
//009 8.5
//011 7.0
//043 9.5
//003 5.0
//103 6.0
//112 4.0
//118 9.0
//
//�������
//043 9.5
//118 9.0
//009 8.5
//005 8.0