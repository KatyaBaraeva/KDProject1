#include "stdafx.h"
 #include <iostream>
 using namespace std;

 int main()
 {
	 int count; // ���������� ��� ������ � switch
	 setlocale(LC_ALL, "rus");
	 
		 cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	 cin >> count;
	 switch (count) // ������ ��������� switch
		 {
		 case 1: // ���� count = 1
			 {
			 cout << "��������� ������� ��������� � ���������� ";
				 break;
				 }
		 case 2: // ���� count = 2
				 {
			 cout << "��������� ������� ��������� � ���������� ";
					 break;
					 }
				 case 3: // ���� count = 3
					 {
					 cout << "��������� ������� ��������� � ���������� ";
						 break;
						 }
					 case 4: // ���� count = 4
						 {
						 cout << "��������� ������� ��������� � ���������� ";
							 break;
							 }
						 default: // ���� count ����� ������ ������� ��������
							 cout << "Nepravilni vvod" << endl;
							 }
	 system("pause");
	 return 0;
	 }