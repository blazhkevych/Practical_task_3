/*
«адание 1. —оздать приложение, которое выводит информацию о книге, в следующем формате:
Name : УThe war and the peaceФ
Avtor : L.N. Tolstoj
Izdatelstvo: Piter
Pages : 500.
*/
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	cout << "Name :\t     \"The war and the peace\""
		<< "\nAvtor :\t     L.N. Tolstoj"
		<< "\nIzdatelstvo: Piter"
		<< "\nPages :\t     500." << endl;

	return 0;
}