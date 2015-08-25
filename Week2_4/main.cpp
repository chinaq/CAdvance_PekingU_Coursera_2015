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


//Tomorrow never knows？
//
//描述
//甲壳虫的《A day in the life》和《Tomorrow never knows》脍炙人口，如果告诉你a day in the life, 
//真的会是tomorrow never knows ? 相信学了计概之后这个不会是难题，现在就来实现吧。
//读入一个格式为yyyy - mm - dd的日期（即年－月－日），输出这个日期下一天的日期。
//可以假定输入的日期不早于1600 - 01 - 01，也不晚于2999 - 12 - 30。
//
//输入
//输入仅一行，格式为yyyy - mm - dd的日期。
//
//输出
//输出也仅一行，格式为yyyy - mm - dd的日期
//
//样例输入
//2010 - 07 - 05
//
//样例输出
//2010 - 07 - 06
//
//提示
//闰年的标准：
//(1)普通年能被4整除且不能被100整除的为闰年。（如2004年就是闰年, 1901年不是闰年）
//地球公转示意图
//(2)世纪年能被400整除的是闰年。(如2000年是闰年，1100年不是闰年)
//输入语句scanf("%d-%d-%d", &y, &m, &d)可以存储年，月，日．输出语句格式类似printf("%d-%02d-%02d\n", year, month, day)．
