#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

char* removeLetterFromString(char data[], int len, char letter)
{
	for (; *data != 0; data++) // hello world ello world llo world.....
	{
		if (*data == letter) // 'l' == 'l'
		{
			strcpy(data, data + 1); // hello world -> helo world // llo world lo world -> lo world // ������
			data--; //elo world
			len--;
		}
	}
	data -= len; // data�� �÷��������Ƿ� ������� �ǵ������� ���ڼ���ŭ �������
	return data;
}

char* replaceLetterFromString(char data[], int len, char letter)
{
	for (int i = 0; i < len; i++)
	{
		if (data[i] == letter)
			data[i] = 0;
	}
	return data;
}

void main()
{
	char data[16] = "Hello World";
	int len = strlen(data);
	char* result = removeLetterFromString(data, len, 'l');
	printf("%s", result);
	return;
}
