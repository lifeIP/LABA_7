#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <cstring>

using namespace std;

void findANDreplace(char str[]);


int main() {
	setlocale(LC_ALL, "RUS");
	char str[] =  "Привет Мир Нахуй Ты нужен";

	findANDreplace(str);
}


void findANDreplace(char str[]) {
	short i = 0;
	short ii = strlen(str);
	char str1[250];
	short addres = 0;
	for (; i < ii - 1;) {
		strncpy(str1, i + str, 50);
		short iii = strcspn(str1, " ");
		
		i = i+iii+1;
		if (static_cast<int>('А') <= static_cast<int>(str[i]) && static_cast<int>('Я') >= static_cast<int>(str[i])) {
			if (i > ii) break;
			addres = i;
		}
	}
	cout << addres << endl;
	cout << str[addres];
	


	//	strncpy(str1, i + str, 50);
	//	short ii = strcspn(str, " ");
	//	i += ii+1;
	//	cout << i <<endl;
//
	//	cout << str1<<endl;
	//}
	//cout << strlen(str);
	
}