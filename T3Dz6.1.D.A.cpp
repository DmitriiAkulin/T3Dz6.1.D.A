// T3Dz6.1.D.A

#include "math_func.h"
#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main()
{
    setlocale(LC_ALL,"rus");

	cout << "Введите первое число: ";
	int a;
	cin >> a;

	cout << "Введите второе число: ";
	int b;
	cin >> b;

	cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	char act; cin >> act;
	switch (act){
	     case '1': cout << a << " + " << b << " = " << sum(a, b) << std::endl; 
		      break;
	     case '2': cout << a << " - " << b << " = " << diff(a, b) << std::endl;
		      break;
	     case '3': cout << a << " * " << b << " = " << multiplication(a, b) << std::endl;
		      break;
	     case '4': if (b != 0) cout << a << " / " << b << " = " << division(a, b) << std::endl; else cout << "деление на ноль!\n";
		      break;
		 case '5': cout << a << " ^ " << b << " = " << num_pow(a, b) << std::endl;
			 break;
	     default: 
		         cout << "неcуществующая операция!\n"; 
		 
	}
	return 0;
}


