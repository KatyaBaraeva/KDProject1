#include "stdafx.h"
 #include <iostream>
 using namespace std;

 int main()
{
	 int count; // ���������� ��� ������ � switch
 double a, b; // ���������� ��� �������� ���������
 cout << " Vvedite pervoe chislo : ";
 cin >> a;
 cout << "Vvedite vtoroe chislo : ";
 cin >> b;
 
	 setlocale(LC_ALL, "rus");
	 
		 cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	 cin >> count;
	 switch (count) // ������ ��������� switch
		 {
		 case 1: // ���� count = 1
			 {
			 cout << a << " + " << b << " = " << a + b << endl; // ��������� ��������
                              break;
				 }
		 case 2: // ���� count = 2
				 {
			cout << a << " - " << b << " = " << a - b << endl; // ��������� ���������
                                break;
					 }
default: // ���� count ����� ������ ������� ��������
 cout << " Nepravilni vvod  " << endl;
 }
 system("pause");
 return 0;
 }