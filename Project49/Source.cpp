#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <cstring>

using namespace std;

void findANDreplace(char str[]);


int main() {
	setlocale(LC_ALL, "RUS");
	char str[] =  "Привет Мир Иди на";

	findANDreplace(str);
}


void findANDreplace(char str[]) {
	short i = 0;
	short ii = strlen(str);
	char str1[250];
	for (; i < ii - 1;) {
		strncpy(str1, i + str, 50);
		short iii = strcspn(str1, " ");
		if (iii > ii) break;
		i = i+iii+1;
		cout << str1<<endl;

	}


	//	strncpy(str1, i + str, 50);
	//	short ii = strcspn(str, " ");
	//	i += ii+1;
	//	cout << i <<endl;
//
	//	cout << str1<<endl;
	//}
	cout << strlen(str);
	
}