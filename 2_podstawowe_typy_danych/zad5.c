#include <stdio.h>

void change_cm_to_in(double value){
	printf("%.2lf cm = %.2lf in \n", value, value/2.54);
}

void change_in_to_cm(double value){
	printf("%.2lf in = %.2lf cm \n", value, value*2.54);
}

double get_value(){
	double value;
	printf("Podaj wartość do przeliczenia: ");
	scanf("%lf", &value);
	return value;
}
 

int main(){
	
	char choice; 
	double value;
	
	printf("Wybierz co chcesz zrobić: \n1.Podać wzrost w cm \n2.Podać wzrost w calach \nWybieram opcje nr:");
	scanf("%c", &choice);
	
	switch(choice){
		case '1':
			value = get_value(); 
			change_cm_to_in(value); 
			break; 
		case '2':
			value = get_value();
			change_in_to_cm(value); 
			break;
		default: 
			printf("Podałeś złą opcje \n"); 
			break; 
	}
	
	return 0; 
}