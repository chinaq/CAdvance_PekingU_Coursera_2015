#include<iostream>
#include<string>
#include <iomanip>
#include<cstdio> 


using namespace std;


bool getIsLeapYear(int year){
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		return true;
	}
	return false;
}

int getMaxDayByMonth(bool isLeapYear, int monthNum){
	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (isLeapYear)
		months[1] = 29;
	return months[monthNum-1];
}


int main(){
	int year;
	int month;
	int day;
	scanf_s("%d-%d-%d", &year, &month, &day);

	bool isLeapYear = getIsLeapYear(year);
	int maxDay;
	maxDay = getMaxDayByMonth(isLeapYear, month);
	if (maxDay > day)
		day++;
	else{
		if (month == 12){
			year++;
			month = 1;
			day = 1;
		}
		else{
			month++;
			day = 1;
		}
	}


	printf("%d-%02d-%02d\n", year, month, day);

}


//Tomorrow never knows��
//
//����
//�׿ǳ�ġ�A day in the life���͡�Tomorrow never knows�������˿ڣ����������a day in the life, 
//��Ļ���tomorrow never knows ? ����ѧ�˼Ƹ�֮��������������⣬���ھ���ʵ�ְɡ�
//����һ����ʽΪyyyy - mm - dd�����ڣ����꣭�£��գ���������������һ������ڡ�
//���Լٶ���������ڲ�����1600 - 01 - 01��Ҳ������2999 - 12 - 30��
//
//����
//�����һ�У���ʽΪyyyy - mm - dd�����ڡ�
//
//���
//���Ҳ��һ�У���ʽΪyyyy - mm - dd������
//
//��������
//2010 - 07 - 05
//
//�������
//2010 - 07 - 06
//
//��ʾ
//����ı�׼��
//(1)��ͨ���ܱ�4�����Ҳ��ܱ�100������Ϊ���ꡣ����2004���������, 1901�겻�����꣩
//����תʾ��ͼ
//(2)�������ܱ�400�����������ꡣ(��2000�������꣬1100�겻������)
//�������scanf("%d-%d-%d", &y, &m, &d)���Դ洢�꣬�£��գ��������ʽ����printf("%d-%02d-%02d\n", year, month, day)��
