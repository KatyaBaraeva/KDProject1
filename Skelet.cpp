#include "stdafx.h"
 #include <iostream>
 #include "funcs.h"
 using namespace std;

 int main()
 {
	 int count; // ���������� ��� ������ � switch
	 setlocale(LC_ALL, "rus");
	 double a, b;
cout << "Vvedite 1 chislo ";
cin >> a;

cout << "Vvedite 2 chislo ";
cin >> b;
	 
		 cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	 cin >> count;
	 switch (count) // ������ ��������� switch
		 {
		 case 1: // ���� count = 1
			 {
			 cout << Summa(a,b) << endl;
				 break;
				 }
		 case 2: // ���� count = 2
				 {
			 cout << Raznost(a,b) << endl;;
					 break;
					 }
				 case 3: // ���� count = 3
					 {
					 cout << Ym(a,b) << endl;
						 break;
						 }
					 case 4: // ���� count = 4
						 {
						 cout << Del(a,b) << endl;
							 break;
							 }
						 default: // ���� count ����� ������ ������� ��������
							 cout << "Nepravilni vvod" << endl;
							 }
	 system("pause");
	 return 0;
	 }