#include <stdio.h>

#include <iostream>
using namespace std;

#include "Analyze.h"

int main(void) {

	cout << "# ��й�ȣ �м� ���α׷��� �����մϴ�."<<endl<<endl<<endl;

	int numberArray[10] = { 0 };
	int alphaCnt = 0;
	char *str = NULL;

	///////////////////////////
	//0~9�� �����ϴ� ��й�ȣ�� ���� ����
	saveNumberCnt(numberArray);
	alphaCnt = returnAlphaCnt();
	//���ĺ����� �����ϴ� ��й�ȣ�� ���� ����.
	///////////////////////////


	//��� ���
	int i;
	for (i = 0; i < 10; i++)
		cout << i + 1 << "�� �����ϴ� ��й�ȣ�� ���� : " << numberArray[i] << endl;
	cout << "���ĺ����� �����ϴ� ��й�ȣ�� ���� : " << alphaCnt << endl;

	//�׽�Ʈ �ڵ�
	int cnt = 0;
	while(1){
		if(readFile(str) == 1)
			cnt++;
		else break;
	}
	cout << "�˻��� �ڷ��� ���� : "<<cnt << endl;
	return 0;
}
