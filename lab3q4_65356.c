#include <stdio.h>
int main() {
	int a,b,c;
	
	while(1){
		printf("enter a number : ");
		scanf("%d", &a);
		if(a <= 0)
			break;
		printf("enter two number : ");
		scanf("%d", &b);
		if(b <= 0)
			break;
		scanf("%d", &c);
		if(c <= 0)
			break;
		printf("sumation = %d\n", a+b+c);
		printf("average = %d\n", (a+b+c)/2);
	}
	return 0;
}
