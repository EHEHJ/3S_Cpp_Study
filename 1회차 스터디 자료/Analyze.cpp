/*
 * Analyze.cpp
 *
 *  Created on: 2017. 3. 12.
 *      Author: TaeWook
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int readFile(char str[]) {
	static FILE *fp2 = fopen("c:\\data\\rockyou.txt", "r");
	assert(fp2!=NULL);

	char temp[200];

	//�޸� ����
	if (str != NULL){
		free(str);
		str = NULL;
	}

	//��й�ȣ �б�
	if (fgets(temp, sizeof(temp), fp2) != NULL) {
		temp[strlen(temp) - 1] = '\0';

		//�޸� �Ҵ�
		str = (char *) malloc(sizeof(char) * strlen(temp) + 1);

		//���ڿ� ����
		strcpy(str, temp);
		return 1;
	}
	else fseek(fp2,SEEK_SET,0);//����Ŀ���� �� ���� ������ ���,
	//���� Ŀ���� ������ �ǵ�����.
	return 0;
}

void saveNumberCnt(int ary[])
//���ڷ� �����ϴ� ��й�ȣ�� ������ ���� �Լ�
//int ary : �� ���ȣ�� �ش�Ǵ� ���ڷ� �����ϴ� ��й�ȣ�� ������ ����
//ex) 0���� �����ϴ� ��й�ȣ�� ary[0]�� ����
{

}

int returnAlphaCnt()
//���ĺ����� �����ϴ� ��й�ȣ�� ������ ���� �Լ�
//��ҹ��� ���� X, ������ ���ô�.
{
	return 0;
}

