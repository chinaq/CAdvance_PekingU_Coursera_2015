#include<iostream>
#include<string>
using namespace std;


string str[1000];

void PrintLine(int startIndex, int endIndex){
	for (int i = startIndex; i <= endIndex; i++){
		cout << str[i];
		if (i != endIndex)
			cout << " ";
	}
	cout << endl;
}




int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> str[i];
	}

	int lineCount = 0;
	int startIndex = 0;
	int endIndex = 0;

	for (int i = 0; i < n; i++){
		lineCount += str[i].length() + 1;
		if (lineCount - 1 > 80){
			PrintLine(startIndex, endIndex - 1);
			startIndex = endIndex;
			lineCount = 0;
			i--;
		}
		else if (i == n - 1){
			PrintLine(startIndex, endIndex);
		}
		else{
			endIndex++;
		}
	}
}


//�����Ű�
//
//����
//��һ��Ӣ�Ķ��ģ�����֮���Կո�ָ���ÿ�����ʰ�����ǰ����ڵı����ţ����뽫���������Ű棬Ҫ�����£�
//ÿ�в�����80���ַ���ÿ�����ʾ���ͬһ���ϣ���ͬһ�еĵ���֮����һ���ո�ָ������׺���β��û�пո�
//
//����
//��һ����һ������n����ʾӢ�Ķ����е��ʵ���Ŀ.�����n���Կո�ָ���Ӣ�ĵ���
//�����ʰ�����ǰ����ڵı����ţ���ÿ�����ʳ��ȶ�������40����ĸ����
//
//���
//�Ű��Ķ����ı���ÿ���ı��ַ������80���ַ�������֮����һ���ո�ָ���ÿ���ı���β��û�пո�
//
//��������
//84
//One sweltering day, I was scooping ice cream into cones and told my four childre
//n they could "buy" acone from me for a hug.Almost immediately, the kids lined u
//p to make their purchases.The three youngest each gave me a quick hug, grabbed 
//their cones and raced back outside.But when my teenage son at the end of the li
//ne finally got his turn to "buy" his ice cream, he gave me two hugs. "Keep the c
//hanges," he said with a smile.
//
//�������
//One sweltering day, I was scooping ice cream into cones and told my four
//children they could "buy" a cone from me for a hug.Almost immediately, the kids
//lined up to make their purchases.The three youngest each gave me a quick hug,
//grabbed their cones and raced back outside.But when my teenage son at the end
//of the line finally got his turn to "buy" his ice cream, he gave me two hugs.
//"Keep the changes," he said with a smile.