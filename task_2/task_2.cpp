﻿/*
Задание 2. Создать приложение, которое выводит на
консоль фразу:
“U lukomor’a dub zelenij,
 Zlataya zep na dupe tom,
 I dnem i nochju kot uchenij
 vse hodit po cepi krugom”
Сопроводить каждую новую строчку тройным звуковым сигналом.
*/
#include <iostream>

using namespace std;

int main()
{
	cout << "\a\a\a\"U lukomor’a dub zelenij,"
		<< "\a\a\a\n Zlataya zep na dupe tom,"
		<< "\a\a\a\n I dnem i nochju kot uchenij"
		<< "\a\a\a\n vse hodit po cepi krugom\"" << endl;

	return 0;
}