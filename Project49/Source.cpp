#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <cstring>

using namespace std;

void findANDreplace(char str[], char resault[]);


int main() {
	setlocale(LC_ALL, "RUS");
	char str[] =  "Привет Мир.";
	char res[250] = {};
	findANDreplace(str,res);
	cout << res;
}







void findANDreplace(char str[], char resault[]) {
	short i = 0;
	short ii = strlen(str);
	char str1[250];
	short iii;
	short addres = 0;
	for (; i < ii - 1;) {
		strncpy(str1, i + str, 50);
		iii = strcspn(str1, " ");

		i = i + iii + 1;
		if (static_cast<int>('А') <= static_cast<int>(str[i]) && static_cast<int>('Я') >= static_cast<int>(str[i])) {
			if (i > ii) break;
			addres = i;
		}
	}

	char str2[250];
	strncpy(str2, (addres)+str, 50);
	short iii_p = strcspn(str2, " ");
	short b = addres + iii_p;
	short a = addres;

	char end_resault[250] = {};
	char addstr[] = { "Кукушечка" };
	strncpy(end_resault, str, a);
	strcat(end_resault, addstr);
	strncpy(str1, b+str, 50);
	strcat(end_resault, str1);
	strcat(resault, end_resault);
}