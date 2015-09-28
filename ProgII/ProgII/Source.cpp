#include <iostream>
struct llista{

	char a[100];

};

void my_func(int* num){

	*num = 15;
}
int main(){
	int a=1;

	my_func(&a);
	
	printf("%d", a);
	getchar();
	return 0;
}