#include "stdafx.h"
 #include <iostream>
 using namespace std;

 int main()
 {
	 int count; // переменная для выбора в switch
	 setlocale(LC_ALL, "rus");
	 
		 cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: ";
	 cin >> count;
	 switch (count) // начало оператора switch
		 {
		 case 1: // если count = 1
			 {
			 cout << "выбранная функция находится в разработке ";
				 break;
				 }
		 case 2: // если count = 2
				 {
			 cout << "выбранная функция находится в разработке ";
					 break;
					 }
				 case 3: // если count = 3
					 {
					 cout << "выбранная функция находится в разработке ";
						 break;
						 }
					 case 4: // если count = 4
						 {
						 cout << "выбранная функция находится в разработке ";
							 break;
							 }
						 default: // если count равно любому другому значению
							 cout << "Nepravilni vvod" << endl;
							 }
	 system("pause");
	 return 0;
	 }