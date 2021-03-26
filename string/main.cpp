#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

char* removeLetterFromString(char data[], int len, char letter)
{
	for (; *data != 0; data++) // hello world ello world llo world.....
	{
		if (*data == letter) // 'l' == 'l'
		{
			strcpy(data, data + 1); // hello world -> helo world // llo world lo world -> lo world // 덮어씌우기
			data--; //elo world
			len--;
		}
	}
	data -= len; // data를 플러스했으므로 원래대로 되돌리려면 글자수만큼 빼줘야함
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
