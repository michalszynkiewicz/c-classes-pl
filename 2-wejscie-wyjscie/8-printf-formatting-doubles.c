#include <stdio.h>

int main() {
	double val = 12.4212331243;
	double val2 = 1;
	printf("%.3lf\n", val); 	/* 12.421	.3 - 3 miejsca po przecinku, f - liczba zmienno przecinkowa w "normalnym" formacie*/

	printf("%011.4e\n", val); 	/* 01.2421e+01	0 - uzupełnij zerami, 11 - co najmniej 11 znaków, .4 - cztery miejsca po przecinku, e - format naukowy*/	
	printf("%+15.4a\n", val);	/* +0x1.8d7bp+3	+ - dodaj znak, 15 - co najmniej 15 znaków, .4 - j.w., a - format naukowy heksadecymalny */
	return 0;
}
